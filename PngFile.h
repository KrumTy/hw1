#pragma once
#include "ImageFile.h"
class PngFile :
	public ImageFile
{
public:
	PngFile(string Name, int width, int height);
	~PngFile();
	virtual void Open();
	virtual int* GetData() const;
};

