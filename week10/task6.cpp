#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter the size of Array:";
    cin >> size;
    int numbers[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter numbers:";
        cin >> numbers[i];
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j = j + 1)
        {
            int number = numbers[i];
            if (numbers[i] > numbers[j])
            {
                numbers[i] = numbers[j];
                numbers[j] = number;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }
}