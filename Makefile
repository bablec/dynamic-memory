MRSTest: MRSTest.o mrs.o
	g++ -o MRSTest MRSTest.o mrs.o
	
MRSTest.o: MRSTest.cc mrs.h
	g++ -c MRSTest.cc
	
mrs.o: mrs.cc mrs.h
	g++ -c mrs.cc

SamplerTest: SamplerTest.o sampler.o
	g++ -o SamplerTest SamplerTest.o sampler.o

SamplerTest.o: SamplerTest.cc sampler.h
	g++ -c SamplerTest.cc

sampler.o: sampler.cc sampler.h
	g++ -c sampler.cc