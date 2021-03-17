#include <iostream>
#include "mrs.h"

using namespace std;

int main() {
	const int 
		timeRadices[] = {7,24,60,60},
		chessRadices[] = {8,8},
		chessMinima[] = {'1','a'};
	int encoded, *pDecoded, values[4];
	char str[2];
	MRSCodec timeCodec(4,timeRadices);
	MRSCodec chessCodec(2,chessRadices,chessMinima);
	
	//cout << "Enter days, hours, minutes, seconds: ";
	//cin >> values[0] >> values[1] >> values[2] >> values[3];
	//
	//encoded = timeCodec.encode(values);
	//cout << "Encoded time: " << encoded << endl;
	//
	//cout << "Enter encoded time: ";
	//cin >> encoded;
	//
	//pDecoded = timeCodec.decode(encoded);
	//cout << "Day: " << pDecoded[0] << "   Hour: " << pDecoded[1] << "   Minute: " << pDecoded[2] << "   Second: " << pDecoded[3] << endl;

	cout << "Enter chess pos: ";
	cin >> str;
	
	values[0] = str[1];
	values[1] = str[0];
	
	encoded = chessCodec.encode(values);
	cout << "Encoded position: " << encoded << endl;
	
	cout << "Enter encoded position: ";
	cin >> encoded;
	
	pDecoded = chessCodec.decode(encoded);
	cout << "Decoded position: " << (char) pDecoded[1] << (char) pDecoded[0] << endl;

	return 0;
}
