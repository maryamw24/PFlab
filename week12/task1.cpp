#include <iostream>
#include <fstream>
using namespace std;

main()
{
    int count = 0;
    string line;
    fstream file;
    file.open("new1.txt", ios::in);
    while (!file.eof())
    {
        getline(file, line);
        for (int i = 0; line[i] != '\0'; i++)
        {
            count++;
        }
    }
    cout << "total number of characters are:" << count;
}