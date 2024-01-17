#include <fstream>
#include "Bitmap.h"
#include "DIBHeader.h"
#include "BMPFileHeader.h"

namespace BMP {
	bool Bitmap::write(std::string filename) {
		BMP::BMPInfoHeader bmpInfoHeader;
		BMP::BMPFileHeader bmpFileHeader;

		// setting the deterministic fields in bmpFileHeader
		bmpFileHeader.fileSize = sizeof(BMPFileHeader) + sizeof(BMPInfoHeader) + sizeof(this);
		bmpFileHeader.dataOffset = sizeof(BMPFileHeader) + sizeof(BMPInfoHeader);

		// setting the deterministic fields in bmpInfoHeader
		bmpInfoHeader.biWidth = _width;
		bmpInfoHeader.biHeight = _height;

		std::fstream file(filename, std::ios::out|std::ios::binary);

		if (file.is_open()) {
			file.write((char*)&bmpFileHeader, sizeof(bmpFileHeader));
			file.write((char*)&bmpInfoHeader, sizeof(bmpInfoHeader));
			file.write((char*)_pPixelData.get(), sizeof(_pPixelData));
		}
		else return false;

		file.close();

		return true;
	}

	void Bitmap::setPixel(int x, int y, uint8_t red, uint8_t blue, uint8_t green) {

	}
}