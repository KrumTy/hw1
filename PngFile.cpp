#include "PngFile.h"

PngFile::PngFile(std::string Name, int width, int height) :ImageFile(Name, width, height)
{
};

PngFile::~PngFile()
{
};

void PngFile::Open()
{
	File::Open();
	cout << "png\n";
};

int* PngFile::GetData() const
{
	int size = *ImageFile::GetData();
	int *myArray = new int[size];

	for (int i = 0; i < size; myArray[i] = 0, i++);

	return myArray;
};