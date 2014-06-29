#pragma once
#include "TextFile.h"
class TxtFile :
	public TextFile
{
public:
	TxtFile(string Name);
	~TxtFile();
	virtual void Open();
};

