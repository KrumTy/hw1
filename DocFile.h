#pragma once
#include "TextFile.h"
class DocFile :
	public TextFile
{
public:
	DocFile(string Name);
	~DocFile();
	virtual void Open();
};

