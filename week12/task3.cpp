#include <iostream>
#include <fstream>
using namespace std;

void TakeInformation();
void StoreData();

string students[100];
int ages[100];
int MatricMarks[100];
int InterMarks[100];
int EcatMarks[100];
int count = 0;

main()
{
    while (1)
    {
        TakeInformation();
        StoreData();
    }
}
void TakeInformation()
{
    cout << "Enter the name of student:";
    cin >> students[count];
    cout << "Enter the age of student:";
    cin >> ages[count];
    cout << "Enter the Matric marks:";
    cin >> MatricMarks[count];
    cout << "Enter the Inter Marks:";
    cin >> InterMarks[count];
    cout << "Enter the Ecat marks:";
    cin >> EcatMarks[count];
    count++;
}

void StoreData()
{
    fstream file;
    file.open("students.txt", ios::out);
    for (int i = 0; i < count; i++)
    {
        file << students[i]<<endl;
        file << ages[i]<<endl;
        file << MatricMarks[i]<<endl;
        file << InterMarks[i]<<endl;
        file << EcatMarks[i]<<endl;
    }
    file.close();
}