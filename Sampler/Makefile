SamplerTest: SamplerTest.o sampler.o
	g++ -o SamplerTest SamplerTest.o sampler.o

SamplerTest.o: SamplerTest.cc sampler.h
	g++ -c SamplerTest.cc

sampler.o: sampler.cc sampler.h
	g++ -c sampler.cc