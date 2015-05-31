#include "MARCdata.hpp"

void MARCdata::csvOutput(const std::string filename){
	constructSubfields();
	ogzstream table(filename.c_str());
	table << "008lang|100a|100d|110a|240a|245a|245b|245c|260a|260b|260c|260e|260f|300a|300b|300c|300e|310a|362a|440a|440v|";
	table << "500a|502a|502c|502d|510a|510c|650a|650x|650y|650z|651a|700a|700d|710a|720a|740a|772c|772d|772t|785t|";
	table << "852a|852j|852z|866x|900a|900d|900u|976a|976b\n";
	for (auto& book : books){
		if (book["008"]['#'].length() > 4){
			int langIdx = book["008"]['#'].length()-5;
			table << book["008"]['#'].substr(langIdx,3);
		}
		table << "|";
		table << book["100"]['a'] << "|";
		table << book["100"]['d'] << "|";
		table << book["110"]['a'] << "|";
		table << book["240"]['a'] << "|";
		table << book["245"]['a'] << "|";
		table << book["245"]['b'] << "|";
		table << book["245"]['c'] << "|";
		table << book["260"]['a'] << "|";
		table << book["260"]['b'] << "|";
		table << book["260"]['c'] << "|";
		table << book["260"]['e'] << "|";
		table << book["260"]['f'] << "|";
		table << book["300"]['a'] << "|";
		table << book["300"]['b'] << "|";
		table << book["300"]['c'] << "|";
		table << book["300"]['e'] << "|";
		table << book["310"]['a'] << "|";
		table << book["362"]['a'] << "|";
		table << book["440"]['a'] << "|";
		table << book["440"]['v'] << "|";
		table << book["500"]['a'] << "|";
		table << book["502"]['a'] << "|";
		table << book["502"]['c'] << "|";
		table << book["502"]['d'] << "|";
		table << book["510"]['a'] << "|";
		table << book["510"]['c'] << "|";
		table << book["650"]['a'] << "|";
		table << book["650"]['x'] << "|";
		table << book["650"]['y'] << "|";
		table << book["650"]['z'] << "|";
		table << book["651"]['a'] << "|";
		table << book["700"]['a'] << "|";
		table << book["700"]['d'] << "|";
		table << book["710"]['a'] << "|";
		table << book["720"]['a'] << "|";
		table << book["740"]['a'] << "|";
		table << book["772"]['c'] << "|";
		table << book["772"]['d'] << "|";
		table << book["772"]['t'] << "|";	
		table << book["785"]['t'] << "|";
		table << book["852"]['a'] << "|";
		table << book["852"]['j'] << "|";
		table << book["852"]['z'] << "|";
		table << book["866"]['x'] << "|";
		table << book["900"]['a'] << "|";
		table << book["900"]['d'] << "|";
		table << book["900"]['u'] << "|";
		table << book["976"]['a'] << "|";
		table << book["976"]['b'] << "\n";

	}
}

int main()
{
	MARCdata kungliga;
	kungliga.xmlInput("data/kungliga_hf1.xml");
	kungliga.csvOutput("data/kungliga_hf1.csv.gz");
	kungliga.flush();
	kungliga.xmlInput("data/kungliga_hf2.xml");
	kungliga.csvOutput("data/kungliga_hf2.csv.gz");
	return 0;
}
