#include <iostream>
#include "Bitmap.h"

const int WIDTH = 800;
const int HEIGHT = 600;

using namespace std;

int main() {

	BMP::Bitmap bmp(WIDTH, HEIGHT);

	bmp.setPixel(WIDTH / 2, HEIGHT / 2, 255, 255, 255);
	bmp.write("test.bmp");

	cout << "Hello, World!" << endl;
	
	return 0;
}