#pragma once
// Written by Dyllin Black.
// This project is not meant for actual use as pharmacy management software for a number of reasons,
// it is just a personal practice project.

#include "NDCJSONReader.h"

using namespace std;

NDCJSONReader::NDCJSONReader()
{

}

MedDatabase NDCJSONReader::readDatabase(string databaseFileName)
{
    MedDatabase databaseToReturn;

	ifstream databaseToRead;
	databaseToRead.open(databaseFileName);
    if (!databaseToRead.is_open())
    {
        cout << databaseFileName << " failed to open." << endl;
        return databaseToReturn;
    }


}