CXX = clang++ -std=c++11 -O3

cerl: cerl.o MARCdata.o gzstream.o
	$(CXX) -lz -o cerl cerl.o MARCdata.o gzstream.o
cerl.o: cerl.cpp MARCdata.hpp
	$(CXX) -c cerl.cpp

estc: estc.o MARCdata.o gzstream.o
	$(CXX) -lz -o estc estc.o MARCdata.o gzstream.o
estc.o: estc.cpp MARCdata.hpp
	$(CXX) -c estc.cpp

fennica: fennica.o MARCdata.o gzstream.o
	$(CXX) -lz -o fennica fennica.o MARCdata.o gzstream.o
fennica.o: fennica.cpp MARCdata.hpp
	$(CXX) -c fennica.cpp

kungliga: kungliga.o MARCdata.o gzstream.o
	$(CXX) -lz -o kungliga kungliga.o MARCdata.o gzstream.o
kungliga.o: kungliga.cpp MARCdata.hpp
	$(CXX) -c kungliga.cpp	

MARCdata.o: MARCdata.cpp MARCdata.hpp
	$(CXX) -c MARCdata.cpp
gzstream.o: gzstream/gzstream.cpp gzstream/gzstream.h
	$(CXX) -c gzstream/gzstream.cpp

clean:
	rm estc estc.o fennica fennica.o kungliga kungliga.o MARCdata.o gzstream.o
