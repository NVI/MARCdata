# MARCdata
Writes selected parts of a MARC XML bibliographic data file into a .csv.gz file.

Preliminaries

+ GNU make (build automation)
+ Clang (compiler)
+ libc++ (standard library)
+ zlib.h (header)

Usage:

1. Copy input files (.xml) to folder 'data'
1. Depending on the input, 'make' in either 'estc' or 'fennica'
1. Run 'estc' or 'fennica' in the respective folder
1. Output files (.csv.gz) are written to folder 'data'

Author: [Niko Ilomäki](https://github.com/NVI/)

License: MIT License

RapidXML library by Marcin Kalicinski and licensed under the MIT License

Gzstream library by Deepak Bandyopadhyay and Lutz Kettner and licensed under LGPL 2.1
