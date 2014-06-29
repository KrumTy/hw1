#pragma once
#include "File.h"
class ImageFile :
	public File
{
public:
	ImageFile(string Name, int width, int height);
	~ImageFile();
	virtual void Open();
	virtual int* GetData() const;
private:
	int width;
	int height;
};

