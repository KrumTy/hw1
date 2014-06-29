#include "TxtFile.h"

TxtFile::TxtFile(std::string Name) :TextFile(Name)
{
};

TxtFile::~TxtFile()
{
};

void TxtFile::Open()
{
	File::Open();
	cout << "txt\n";
};