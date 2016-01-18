#include "MARCdata.hpp"

void MARCdata::csvOutput(const std::string filename){
	constructSubfields();
	ogzstream table(filename.c_str());
	table << "041a|041h|100a|100d|110a|240a|240n|245a|245b|245c|260a|260b|260c|260e|260f|300a|300b|300c|300e|310a|362a|440a|440v|500a|502a|502c|502d|510a|510c|650a|650x|650y|650z|651a|651y|651z\n|700a|700d|710a|720a|740a|772c|772d|772t|785t|852a\n|852j|852z|866x|900a|900d|900u|976a|976b\n";

	for (auto& book : books){

	  /* 008lang ignored as it had some problem */
		table << book["041"]['a'] << "|";
		table << book["041"]['h'] << "|";
		table << book["100"]['a'] << "|";
		table << book["100"]['d'] << "|";
		table << book["110"]['a'] << "|";
		table << book["240"]['a'] << "|";
		table << book["240"]['n'] << "|";
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
		table << book["651"]['y'] << "|";
		table << book["651"]['z'] << "\n";		
		table << book["700"]['a'] << "|";
		table << book["700"]['d'] << "|";
		table << book["710"]['a'] << "|";
		table << book["720"]['a'] << "|";
		table << book["740"]['a'] << "|";
		table << book["772"]['c'] << "|";
		table << book["772"]['d'] << "|";
		table << book["772"]['t'] << "|";	
		table << book["785"]['t'] << "|";
		table << book["852"]['a'] << "\n";
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
	MARCdata cerl;

	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_10.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_20.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_30.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_40.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_50.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_11.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_21.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_31.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_41.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_5.out.xml");
	cerl.csvOutput("data/cerl0.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_12.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_22.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_32.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_42.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_6.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_13.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_23.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_33.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_43.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_7.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_14.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_24.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_34.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_44.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_8.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_15.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_25.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_35.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_45.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_9.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_16.out.xml");
	cerl.csvOutput("data/cerl1.csv.gz");

	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_26.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_36.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_46.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_10.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_17.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_27.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_37.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_47.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_11.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_18.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_28.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_38.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_48.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_12.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_19.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_29.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_39.out.xml");
	cerl.csvOutput("data/cerl1b.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_49.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_13.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_1.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_2.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_3.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_4.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_14.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_20.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_30.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_40.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_50.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_15.out.xml");
	cerl.csvOutput("data/cerl2.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_21.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_31.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_41.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_5.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_16.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_22.out.xml");	
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_32.out.xml");
	cerl.csvOutput("data/cerl2b.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_42.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_6.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_17.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_23.out.xml");
	cerl.csvOutput("data/cerl2c.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_33.out.xml");
	cerl.csvOutput("data/cerl2d1.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_43.out.xml");
	cerl.csvOutput("data/cerl2d2.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_7.out.xml");
	cerl.csvOutput("data/cerl2d3.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_18.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_24.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_34.out.xml");
	cerl.csvOutput("data/cerl3.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_44.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_8.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_19.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_25.out.xml");
	cerl.csvOutput("data/cerl3b.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_35.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_45.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_9.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_1.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_26.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_36.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_46.out.xml");
	cerl.csvOutput("data/cerl3c.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_10.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_20.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_27.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_37.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_47.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_11.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_21.out.xml");
	cerl.csvOutput("data/cerl3d.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_28.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_38.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_48.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_12.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_22.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_29.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_39.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_49.out.xml");
	cerl.csvOutput("data/cerl3e.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_13.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_23.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_2.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_3.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_4.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_14.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_24.out.xml");
	cerl.csvOutput("data/cerl3f.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_30.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_40.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_50.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_15.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_25.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_31.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_41.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_5.out.xml");
	cerl.csvOutput("data/cerl3g.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_16.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_26.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_32.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_42.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_6.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_17.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_27.out.xml");	
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_33.out.xml");
	cerl.csvOutput("data/cerl4.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_43.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_7.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_18.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_28.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_34.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_44.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_8.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_19.out.xml");
	cerl.csvOutput("data/cerl4b.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_29.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_35.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_45.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_9.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_1.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_2.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_36.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_46.out.xml");
	cerl.csvOutput("data/cerl4c.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_10.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_20.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_30.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_37.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_47.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_11.out.xml");
	cerl.csvOutput("data/cerl5.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_21.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_31.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_38.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_48.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_12.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_22.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_32.out.xml");
	cerl.csvOutput("data/cerl5b.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_39.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_49.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_13.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_23.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_33.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_3.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_4.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_14.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_24.out.xml");
	cerl.csvOutput("data/cerl5c.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_34.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_40.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_50.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_15.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_25.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_35.out.xml");
	cerl.csvOutput("data/cerl5d.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_41.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_5.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_16.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_26.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_36.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_42.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_6.out.xml");
	cerl.csvOutput("data/cerl6.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_17.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_27.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_37.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_43.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_7.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_18.out.xml");
	cerl.csvOutput("data/cerl6b.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_28.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_38.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_44.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_8.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_19.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_29.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_39.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_45.out.xml");
	cerl.csvOutput("data/cerl6c.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_9.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_1.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_2.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_3.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_46.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_10.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_20.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_30.out.xml");
	cerl.csvOutput("data/cerl6d.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_40.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_47.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_11.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_21.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_31.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_41.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_48.out.xml");
	cerl.csvOutput("data/cerl7.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_12.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_22.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_32.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_42.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_49.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_13.out.xml");
	cerl.csvOutput("data/cerl7b.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_23.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_33.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_43.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_4.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_14.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_24.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_34.out.xml");
	cerl.csvOutput("data/cerl7c.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_44.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_50.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_15.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_25.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_35.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_45.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_5.out.xml");
	cerl.csvOutput("data/cerl7d.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_16.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_26.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_36.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_46.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_6.out.xml");
	cerl.csvOutput("data/cerl7e.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_17.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_27.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_37.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_47.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_7.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_18.out.xml");
	cerl.csvOutput("data/cerl8.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_28.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_38.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_48.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_8.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_19.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_29.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_39.out.xml");
	cerl.csvOutput("data/cerl8b.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_49.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.001.mrc_9.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_1.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_2.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_3.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_4.out.xml");
	cerl.csvOutput("data/cerl8c.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_10.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_20.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_30.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_40.out.xml");
	cerl.csvOutput("data/cerl8d.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_50.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_11.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_21.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_31.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_41.out.xml");
	cerl.csvOutput("data/cerl9.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_5.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_12.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_22.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_32.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_42.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_6.out.xml");
	cerl.csvOutput("data/cerl9b.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_13.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_23.out.xml");	
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_33.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_43.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_7.out.xml");
	cerl.csvOutput("data/cerl9c.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_14.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_24.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_34.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_44.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_8.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_15.out.xml");
	cerl.csvOutput("data/cerl9d.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_25.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_35.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_45.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.006.mrc_9.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_16.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_26.out.xml");
	cerl.csvOutput("data/cerl9e.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_36.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_46.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.007.mrc_1.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_17.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_27.out.xml");
	cerl.csvOutput("data/cerl10.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_37.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_47.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.007.mrc_2.out.xml");	
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_18.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_28.out.xml");
	cerl.csvOutput("data/cerl10b.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_38.out.xml");	
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_48.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_19.out.xml");	
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_29.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_39.out.xml");
	cerl.csvOutput("data/cerl10c.csv.gz");
	
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_49.out.xml"); 
	cerl.xmlInput("data/CERL/result/db1_77.002.mrc_1.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.003.mrc_2.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.004.mrc_3.out.xml");
	cerl.xmlInput("data/CERL/result/db1_77.005.mrc_4.out.xml");
	cerl.csvOutput("data/cerl11.csv.gz");
	
	return 0;
}
