#include <iostream>
#include <fstream>
using namespace std;

main()
{
    int count = 0;
    char letter;
    fstream file;
    string line;
    cout << "Enter the letter for the frequency: ";
    cin >> letter;
    file.open("new1.txt", ios::in);
    while (!file.eof())
    {
        getline(file, line);
        for(int i = 0; line[i] != '\0' ; i++)
        {
            if (line[i] == letter)
            {
                count ++;
            }
        }
    }
     cout<< "The frequency of the letter is : "<< count;
}