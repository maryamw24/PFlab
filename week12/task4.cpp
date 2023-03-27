#include <iostream>
#include <fstream>
using namespace std;

string students[10];
int numbers[10];
int percentages[10];
int index = 0;

main()
{
    fstream file;
    fstream file1;
    string line;
    string student;
    string number;
    string percentage;
    file.open("students.txt", ios::in);
    while (!file.eof())
    {
        if (getline(file, student) && getline(file, number) && getline(file, percentage))
        {
            students[index] = student;
            cout << students[index];
            numbers[index] = stof(number);
            cout << numbers[index];
            percentages[index] = stoi(percentage);
            cout << percentages[index];
            index++;
        }
    }
    file.close();

    file1.open("Topperstudent.txt", ios::out);
    for (int i = 0; i < index; i++)
    {
        if (percentages[i] > 70)
        {
            file1 << "Name:" << students[i] << endl;
            file1 << "Roll number:" << numbers[i] << endl;
            file1 << "Percantge:" << percentages[i] << endl;
        }
    }
    file1.close();
}