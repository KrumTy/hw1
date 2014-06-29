#include "File.h"

File::File(std::string Name)
{
	this->name = Name;
};

string File::GetName() const
{
	return this->name;
};

void File::Open() const
{
	cout << "Opening a ";
};