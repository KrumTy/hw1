#include "PdfFile.h"

PdfFile::PdfFile(std::string Name) :TextFile(Name)
{
};

PdfFile::~PdfFile()
{
};

void PdfFile::Open()
{
	File::Open();
	cout << "pdf\n";
};