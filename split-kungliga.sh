#!/bin/bash
awk '{gsub("ind1=\"? ind2","ind1=\"?\" ind2"); print $0}' data/finland_export.xml > data/kungliga_full
awk 'NR<6' data/kungliga_full > data/first
awk 'NR>5&&NR<6000040' data/kungliga_full > data/kungliga1
awk 'NR>6000039&&NR<12000081' data/kungliga_full > data/kungliga2
awk 'NR>12000080&&NR<18000080' data/kungliga_full > data/kungliga3
awk 'NR>18000079&&NR<24000073' data/kungliga_full > data/kungliga4
awk 'NR>24000072&&NR<29947472' data/kungliga_full > data/kungliga5
awk 'NR==29947472' data/kungliga_full > data/last
cat data/first data/kungliga1 data/last >> data/kungliga_pt1.xml
cat data/first data/kungliga2 data/last >> data/kungliga_pt2.xml
cat data/first data/kungliga3 data/last >> data/kungliga_pt3.xml
cat data/first data/kungliga4 data/last >> data/kungliga_pt4.xml
cat data/first data/kungliga5 data/last >> data/kungliga_pt5.xml
rm data/first data/last data/kungliga1 data/kungliga2 data/kungliga3 data/kungliga4 data/kungliga5
