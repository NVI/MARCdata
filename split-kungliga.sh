#!/bin/bash
awk '{gsub("=\"[?] ","ind1=\"[?]\" "); gsub("=\"[?]>","ind1=\"[?]\">"); print $0}' data/finland_export.xml > data/kungliga.xml
awk 'NR<15000076' data/kungliga.xml > data/kungliga_hf1.xml
echo "$(awk 'NR==29947472' data/kungliga.xml)" >> data/kungliga_hf1.xml
awk 'NR<6' data/kungliga.xml > data/kungliga_hf2.xml
echo "$(awk 'NR>15000075' data/kungliga.xml)" >> data/kungliga_hf2.xml
