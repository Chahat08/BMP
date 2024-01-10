#pragma once

#include <string>

namespace BMP {
	class Bitmap
	{
	private:
		int _width{ 0 };
		int _height{ 0 };
	public:
		// constructors
		Bitmap() {};
		Bitmap(int width, int height) : _width(width), _height(height) {};

		// destructor
		virtual ~Bitmap();

		// utils
		bool write(std::string filename);
		void setPixel(int x, int y, uint8_t red, uint8_t blue, uint8_t green);

	};
}

