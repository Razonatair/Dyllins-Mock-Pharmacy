#pragma once
// Written by Dyllin Black.
// This project is not meant for actual use as pharmacy management software for a number of reasons,
// it is just a personal practice project.

#include "MedDatabase.h"
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

class NDCJSONReader
{
	public:
		NDCJSONReader();
		MedDatabase readDatabase(string databaseFileName);
	private:

};