fennica : fennica.o MARCdata.o
	clang++ -std=c++11 -stdlib=libc++ -O2 -o fennica fennica.o MARCdata.o

fennica.o : fennica.cpp ../MARCdata.hpp
	clang++ -std=c++11 -stdlib=libc++ -O2 -c fennica.cpp
MARCdata.o : ../MARCdata.cpp ../MARCdata.hpp
	clang++ -std=c++11 -stdlib=libc++ -O2 -c ../MARCdata.cpp

clean :
	rm fennica fennica.o MARCdata.o
