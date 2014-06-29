#pragma once
#include "ImageFile.h"
class JpgFile :
	public ImageFile
{
public:
	JpgFile(string Name, int width, int height);
	~JpgFile();
	virtual void Open();
	virtual int* GetData() const;
};

