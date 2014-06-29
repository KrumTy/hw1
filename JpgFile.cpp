#include "JpgFile.h"

JpgFile::JpgFile(std::string Name, int width, int height) :ImageFile(Name, width, height)
{
};

JpgFile::~JpgFile()
{
};

void JpgFile::Open()
{
	File::Open();
	cout << "jpg\n";
};

int* JpgFile::GetData() const
{
	int size = *ImageFile::GetData();
	int *myArray = new int[size];

	for (int i = 0; i < size; myArray[i] = 1, i++);

	return myArray;
}