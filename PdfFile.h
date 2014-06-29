#pragma once
#include "TextFile.h"
class PdfFile :
	public TextFile
{
public:
	PdfFile(string Name);
	~PdfFile();
	virtual void Open();
};

