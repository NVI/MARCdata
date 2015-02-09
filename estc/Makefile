estc : estc.o MARCdata.o gzstream.o
	clang++ -std=c++11 -stdlib=libc++ -lz -O2 -o estc estc.o MARCdata.o gzstream.o

estc.o : estc.cpp ../MARCdata.hpp
	clang++ -std=c++11 -stdlib=libc++ -O2 -c estc.cpp
MARCdata.o : ../MARCdata.cpp ../MARCdata.hpp
	clang++ -std=c++11 -stdlib=libc++ -O2 -c ../MARCdata.cpp
gzstream.o : ../gzstream/gzstream.cpp ../gzstream/gzstream.h
	clang++ -std=c++11 -stdlib=libc++ -O2 -c ../gzstream/gzstream.cpp

clean :
	rm estc estc.o MARCdata.o gzstream.o
