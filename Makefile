estc : estc.o MARCdata.o gzstream.o
	clang++ -std=c++11 -lz -O3 -o estc estc.o MARCdata.o gzstream.o
estc.o : estc.cpp MARCdata.hpp
	clang++ -std=c++11 -O3 -c estc.cpp

fennica : fennica.o MARCdata.o gzstream.o
	clang++ -std=c++11 -lz -O3 -o fennica fennica.o MARCdata.o gzstream.o
fennica.o : fennica.cpp MARCdata.hpp
	clang++ -std=c++11 -O3 -c fennica.cpp

kungliga : kungliga.o MARCdata.o gzstream.o
	clang++ -std=c++11 -lz -O3 -o kungliga kungliga.o MARCdata.o gzstream.o
kungliga.o : kungliga.cpp MARCdata.hpp
	clang++ -std=c++11 -O3 -c kungliga.cpp	

MARCdata.o : MARCdata.cpp MARCdata.hpp
	clang++ -std=c++11 -O3 -c MARCdata.cpp
gzstream.o : gzstream/gzstream.cpp gzstream/gzstream.h
	clang++ -std=c++11 -O3 -c gzstream/gzstream.cpp

clean :
	rm estc estc.o fennica fennica.o kungliga kungliga.o MARCdata.o gzstream.o
