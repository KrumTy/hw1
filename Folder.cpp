#include "Folder.h"

Folder::Folder(std::string Name)
{
	this->name = Name;
};

string Folder::GetName() const
{
	return this->name;
};

void Folder::AddFile(File* file)
{
	this->allFiles[this->currentFile] = file;
	currentFile++;
};

File** Folder::GetFiles()
{
	return this->allFiles;
};

void Folder::AddFolder(Folder* folder)
{
	this->allFolders[this->currentFolder] = folder;
	currentFolder++;
};

Folder** Folder::GetFolders()
{
	return this->allFolders;
};

void Folder::DeleteFile(File* file)
{
	delete file;
};

void Folder::DeleteFolder(Folder* folder)
{
	delete folder;
};

void Folder::MoveFileTo(File* file, Folder* newFolder)
{
	newFolder->AddFile(file);
	//this->DeleteFile(file);
};