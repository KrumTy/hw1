#include "ImageFile.h"

ImageFile::ImageFile(std::string Name, int width, int height) :File(Name)
{
	this->width = width;
	this->height = height;
};

ImageFile::~ImageFile()
{
};

void ImageFile::Open()
{
	File::Open();
	cout << "image\n";
};

int* ImageFile::GetData() const
{
	int a = this->width*this->height;
	return &a;
	//return new int[this->width*this->height];
};