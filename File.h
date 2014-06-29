#pragma once
#include <iostream>
#include <string>
using namespace std;

class File
{
public:
	File(string Name);
	~File(){};
	string GetName() const;
	virtual void Open() const;
private:
	string name;
};