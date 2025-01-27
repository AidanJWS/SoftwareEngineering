#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	//Output stream object
	ofstream outputStream;

	//Open
	outputStream.open("tables.txt");

	//Check this succeeded (maybe the disk is full?)
	if (outputStream.is_open() == false) {
		cerr << "Cannot create file" << endl;
		return -1;
	}

	//The following code is unchanged, except we use a different stream object
	for (unsigned int r = 2; r <= 12; r++) {
		for (unsigned int c = 2; c <= 12; c++) {
			outputStream << r * c << "\t";
		}
		outputStream << endl;
	}
	outputStream << endl;

	//Remember to close when done
	outputStream.close();

	return 0;
}
