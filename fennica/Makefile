fennica : fennica.o MARCdata.o gzstream.o
	clang++ -std=c++11 -stdlib=libc++ -lz -O2 -o fennica fennica.o MARCdata.o gzstream.o

fennica.o : fennica.cpp ../MARCdata.hpp
	clang++ -std=c++11 -stdlib=libc++ -O2 -c fennica.cpp
MARCdata.o : ../MARCdata.cpp ../MARCdata.hpp
	clang++ -std=c++11 -stdlib=libc++ -O2 -c ../MARCdata.cpp
gzstream.o : ../gzstream/gzstream.cpp ../gzstream/gzstream.h
	clang++ -std=c++11 -stdlib=libc++ -O2 -c ../gzstream/gzstream.cpp

clean :
	rm fennica fennica.o MARCdata.o gzstream.o
