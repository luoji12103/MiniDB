#include <bits/stdc++.h>
#include "BasicDefinition.h"

using namespace std;

// execute command CREATE DATABSE
void createDatabase(const string& name);

// execute command USE DATABASE
void useDatabase(const string& name);

// execute command CREATE TABLE
void createTable(const string& name);

int main(string inputName, string outputName)   // input and output name
{
    // opem files
    ifstream inputFile;
    inputFile.open(inputName.c_str());
    inputFile.open(outputName.c_str());

    // create commands in terminal:CREATE DATABASE database_name & USE DATABASE
    string command, name;    

    // inputc commands
    cin >> command >> name;

    // judge commands
    if (command == CD) createDatabase(name);
    if (command == UD) useDatabase(name);
    if (command == CT) createTable(name);
}

void createDatabase(const string& name)
{

}

void useDatabase(const string& name)
{

}

void createTable(const string& name)
{
    Table* new_table = new Table;
}