#include <iostream>
#include <fstream>
using namespace std;

string names[10];
int age[10];

main()
{
    fstream file;
    string name;
    int age;
    file.open("name.txt ", ios::in);
    while(file.eof())
    {
        if (getline(file, name))
        {
            if 
        }
    }
}