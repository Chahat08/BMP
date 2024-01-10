#pragma once
// DIB header of type BITMAPINFOHEADER

class BMPInfoHeader {
	/*
	* Offset: 0, size: 4 -> biSize (Size of the DIB header, 40 bytes)
	* Offset: 4, size: 4 -> biWidth (Width of image in pixels)
	* Offset: 8, size: 4 -> biHeight (Height of image in pixels)
	* Offset: 12, size: 2 -> biPlanes (No of color planes, must be 1)
	* Offset: 14, size: 2 -> biBitCount (Number of bits per pixel (1, 4, 8, 16, 24, or 32))
	* Offset: 16, size: 4 -> biCompression (Compression, 0 for uncompressed)
	* Offset: 20, size: 4 -> biSizeImage (Size of the raw bitmap data (including padding))
	* Offset: 24, size: 4 -> biXPelsPerMeter (Pixels per meter in X direction)
	* Offset: 28, size: 4 -> biYPelsPerMeter (Pixels per meter in Y direction)
	* Offset: 32, size: 4 -> biClrUsed (Number of colors in the color palette, 0 for full color)
	* Offset: 36, size: 4 -> biClrImportant (Number of important colors, 0 meaning all are imp)
	*/
public:

};