#ifndef _MRSCODEC_H
#define _MRSCODEC_H

class MRSCodec {
public:
	MRSCodec(int nRadix, const int *radixList, const int *minList=nullptr);
	~MRSCodec();
	int encode(const int *values);
	int *decode(int value);	
private:
	int nRadices, *radices, *decoded, *minima;
};

#endif
