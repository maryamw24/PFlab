#include <iostream>
#include <fstream>
using namespace std;

main()
{
    int linecount = 0;
    fstream file;
    string line;
    file.open("story.txt", ios::in);
    getline(file, line);
    file.close();
    // cout<<line;
    int length = line.length();
    if (line[0] != 'T')
    {
        linecount++;
    }
    for (int i = 0; i < length; i++)
    {
        if (line[i] == '.' && line[i+1] == ' ' && line[i + 2] != 'T')
        {
            linecount++;
        }
    }
    cout << "total lines are:" << linecount;
}