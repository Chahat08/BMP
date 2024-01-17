#include <iostream>
#include "Bitmap.h"

using namespace std;

int main() {

	BMP::Bitmap bmp(800, 600);
	bmp.write("test.bmp");

	cout << "Hello, World!" << endl;
	
	return 0;
}