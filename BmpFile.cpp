#include "BmpFile.h"

BmpFile::BmpFile(std::string Name, int width, int height) :ImageFile(Name, width, height)
{
};

BmpFile::~BmpFile()
{
};

void BmpFile::Open()
{
	File::Open();
	cout << "bmp\n";
};

int* BmpFile::GetData() const
{
	int size = *ImageFile::GetData();
	int *myArray = new int[size];

	for (int i = 0; i < size; myArray[i] = 2, i++);

	return myArray;
};