#include "TextFile.h"

TextFile::TextFile(std::string Name) :File(Name)
{
	this->content = "";
};

TextFile::~TextFile()
{
};

void TextFile::Open()
{
	File::Open();
	cout << "text\n";
};

void TextFile::SetContent(std::string& content)
{
	this->content = content;
};

void TextFile::PrintContent() const
{
	cout << this->content << endl;
};
