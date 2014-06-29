#pragma once
#include <iostream>
#include <string>
#include "File.h"
#include <vector>
using namespace std;

class Folder
{
public:
	Folder(string Name);
	~Folder(){};
	string GetName() const;
	void AddFile(File* file);
	void AddFolder(Folder* folder);
	File** GetFiles();
	Folder** GetFolders();
	void DeleteFile(File* file);
	void DeleteFolder(Folder* folder);
	void MoveFileTo(File* file, Folder* newFolder);
private:
	string name;
	File* allFiles[2000];
	int currentFile = 0;
	Folder* allFolders[2000];
	int currentFolder = 0;
	//File* files;
	//File** filez;
	//std::vector<File>* v = new vector<File>();
};