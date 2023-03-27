#include <iostream>
using namespace std;
int numbers[50];
main()
{
    int size;
    int cycle;
    bool isTrue;
    cout << "Enter the size of array:";
    cin >> size;
    cout << "Enter number of cycles:";
    cin >> cycle;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the number:";
        cin >> numbers[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == numbers[i + cycle] && numbers[i + 1] == numbers[i + cycle + 1] && numbers[i + 2] == numbers[i + cycle + 2])
        {
            isTrue = true;
        }
        else
        {
            isTrue = false;

        }
    }
    if (isTrue = true)
    {
        cout << "TRUE!!";
    }
    if (isTrue = false)
    {
        cout << "FALSE!!";
    }
}