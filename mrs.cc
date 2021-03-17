#include "mrs.h"
#include <stdexcept>

MRSCodec::MRSCodec(int nRadix, const int *radixList, const int *minList) {
	radices = new int[nRadix];
	decoded = new int[nRadix];
	minima = new int[nRadix];
	nRadices = nRadix;
	for (int i=0;i<nRadix;i++)
		radices[i] = radixList[i];
	if (minList != nullptr)
		for (int i=0;i<nRadix;i++)
			minima[i] = minList[i];
	else
		for (int i=0;i<nRadix;i++)
			minima[i] = 0;
}

MRSCodec::~MRSCodec() {
	delete[] radices;
	delete[] decoded;
	delete[] minima;
}

int MRSCodec::encode(const int *values) {
	int result = 0, tmp;
	for (int i=0;i<nRadices;i++) {
		tmp = values[i]-minima[i];
		if (tmp < 0)
			throw std::underflow_error("Value too small");
		if (tmp >= radices[i])
			throw std::overflow_error("Value too large");
		result = result * radices[i] + tmp;
	}
	return result;
}

int *MRSCodec::decode(int value) {
	if (value < 0)
		throw std::underflow_error("Encoded value is too small");
	for (int i=nRadices-1;i>=0;i--) {
		decoded[i] = value % radices[i] + minima[i];
		value /= radices[i];
	}
	if (value > 0)
		throw std::overflow_error("Encoded value too large");
	return decoded;
}
