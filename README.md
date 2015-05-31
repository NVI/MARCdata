# MARCdata

Writes selected parts of a [MARC XML](http://www.loc.gov/standards/marcxml/) bibliographic data file into a .csv.gz file.

## Preliminaries

+ [GNU Make](http://www.gnu.org/software/make/) (build automation)
+ [Clang](http://clang.llvm.org/) (compiler)
+ [libc++](http://libcxx.llvm.org/) (standard library)
+ [zlib.h](http://www.zlib.net/) (header)

## Usage

Input files should be placed in folder 'data'. Output goes there as well.

### ESTC

	make estc
	./estc

### Fennica

	make fennica
	./fennica

### Kungliga

	bash split-kungliga.sh
	make kungliga
	./kungliga

## Author

[Niko Ilomäki](https://github.com/NVI/)

## License

MIT License

[RapidXML](http://rapidxml.sourceforge.net/) library by Marcin Kalicinski and licensed under the MIT License

[Gzstream](http://www.cs.unc.edu/Research/compgeom/gzstream/) library by Deepak Bandyopadhyay and Lutz Kettner and licensed under LGPL 2.1
