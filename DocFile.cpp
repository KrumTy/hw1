#include "DocFile.h"

DocFile::DocFile(std::string Name) :TextFile(Name)
{
};

DocFile::~DocFile()
{
};

void DocFile::Open()
{
	File::Open();
	cout << "doc\n";
};