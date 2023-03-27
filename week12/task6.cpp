#include <iostream>
#include <fstream>
using namespace std;
main()
{
    int count = 0;
    fstream file;
    string line;
    file.open("story.txt", ios::in);
    while (!file.eof())
    {
        file >> line;
        int length = line.length();
        if (length < 4)
        {
            cout << line << endl;
        }
    }
    file.close();
}