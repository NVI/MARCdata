#include "../MARCdata.hpp"

void MARCdata::csvOutput(const std::string filename){
	constructSubfields();
	ogzstream table(filename.c_str());
	table << "008lang|100a|100d|240n|245a|260a|260b|260c|300a|300c|650a|650y,651y|650z,651a,651z\n";
	for (auto& book : books){
		int langIdx = book["008"]['#'].length()-5;
		table << book["008"]['#'].substr(langIdx,3) << "|";
		table << book["100"]['a'] << "|";
		table << book["100"]['d'] << "|";
		table << book["240"]['n'] << "|";
		table << book["245"]['a'] << "|";
		table << book["260"]['a'] << "|";
		table << book["260"]['b'] << "|";
		table << book["260"]['c'] << "|";
		table << book["300"]['a'] << "|";
		table << book["300"]['c'] << "|";
		table << book["650"]['a'] << "|";
		table << book["650"]['y'] << ";";
		table << book["651"]['y'] << "|";
		table << book["650"]['z'] << ";";
		table << book["651"]['a'] << ";";
		table << book["651"]['z'] << "\n";
	}
}

int main()
{
	MARCdata estc;
	estc.xmlInput("../data/ESTChistory.xml");
	estc.csvOutput("../data/estc.csv.gz");
	return 0;
}
