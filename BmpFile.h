#pragma once
#include "ImageFile.h"
class BmpFile :
	public ImageFile
{
public:
	BmpFile(string Name, int width, int height);
	~BmpFile();
	virtual void Open();
	virtual int* GetData() const;
};

