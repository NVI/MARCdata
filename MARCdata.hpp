#pragma once

#include <cstdlib>
#include <cstdio>
#include <string>
#include <vector>
#include <map>
#include "rapidxml/rapidxml.hpp" // The MIT License; (c) 2006, 2007 Marcin Kalicinski
#include "gzstream/gzstream.h" // GNU Lesser General Public License (LGPL) 2.1; (c) 2001 Deepak Bandyopadhyay, Lutz Kettner

typedef std::map<std::string, std::map<char, std::string> > Book;

class MARCdata
{
public:
	MARCdata();
	void xmlInput(const std::string filename);
	void csvOutput(const std::string filename);
	void flush();
private:
	std::vector<Book> books;
	rapidxml::xml_document<> xmlTree;
	void xmlToBst();
	void constructSubfields();
	void replaceAll(std::string& str, const std::string a, const std::string b);
};
