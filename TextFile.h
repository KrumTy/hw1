#pragma once
#include "File.h"
class TextFile :
	public File
{
private:
	string content;
public:
	TextFile(string Name);
	~TextFile();
	virtual void Open();
	void SetContent(std::string& content);
	void PrintContent() const;
};

