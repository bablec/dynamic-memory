#ifndef _SAMPLER_H
#define _SAMPLER_H

class Sampler {
public:
	Sampler(int n);
	~Sampler();
	int getSample();
private:
	int size, *array;
};

#endif
