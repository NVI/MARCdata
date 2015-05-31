#include "MARCdata.hpp"

#pragma warning (disable : 4996)

MARCdata::MARCdata(){
}

void MARCdata::xmlInput(const std::string filename){
	FILE *f = fopen(filename.c_str(), "rb");
	fseek(f, 0, SEEK_END);
	long fsize = ftell(f);
	fseek(f, 0, SEEK_SET);
	char *content = (char *)malloc(fsize + 1);
	fread(content, fsize, 1, f);
	fclose(f);
	content[fsize] = 0;
	xmlTree.parse<0>(content); // constructs XML parse tree
	xmlToBst(); // moves data from XML parse tree to a binary search tree (C++ map)
	xmlTree.clear(); // clears XML parse tree
}

void MARCdata::xmlToBst(){
	rapidxml::xml_node<> *record = xmlTree.first_node()->first_node();
	for (record->next_sibling(); record; record = record->next_sibling()){
		Book book;
		if (record->first_node() == 0){
			continue;
		}
		for (rapidxml::xml_node<> *datafield = record->first_node()->next_sibling(); datafield; datafield = datafield->next_sibling()){
			std::string val = "";
			std::string loc = datafield->first_attribute()->value();
			auto& field = book[loc];
			for (rapidxml::xml_node<> *subfield = datafield->first_node(); subfield; subfield = subfield->next_sibling()){
				if (subfield->first_attribute()){
					val += '$';
					val += subfield->first_attribute()->value();
				}
				val += subfield->value();
				replaceAll(val, "|", ","); // '|' is the csv separator here
				replaceAll(val, "\"", "\'");
			}
			field['#'] += val;
		}
		books.push_back(book);
	}
}

void MARCdata::constructSubfields(){
	for (auto& book : books){
		for (auto& field : book){
			std::string *pf = nullptr;
			unsigned int idx = 0;
			while (idx < field.second['#'].length()){
				if (pf == nullptr && field.second['#'][idx] != '$'){
					++idx;
				}
				else if (field.second['#'][idx] == '$'){
					++idx;
					pf = &field.second[field.second['#'][idx]];
					++idx;
					if (pf != nullptr && *pf != ""){
						*pf += ";"; // there may be multiple subfields with same annotation
					}
				}
				else {
					if (pf != nullptr){
						*pf += field.second['#'][idx];
					}
					++idx;
				}
			}
		}
	}
}

void MARCdata::replaceAll(std::string& str, const std::string a, const std::string b){
	int l = str.length();
	int i = 0;
	while (i != l){
		if (str.substr(i, a.length()) == a){
			if (b.length() < a.length()){
				str.erase(i, a.length() - b.length());
			}
			str.replace(i, b.length(), b);
			l -= (a.length() - b.length());
		}
		else {
			++i;
		}
	}
}

void MARCdata::flush(){
	books.clear();
}
