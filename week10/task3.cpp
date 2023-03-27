#include <iostream>
using namespace std;
bool check(int pre, int curr, int next);
main()
{
    int size;
    bool istrue;
    int count = 0;
    cout << "Enter the size of arrays:";
    cin >> size;
    int numbers[size];
    int final[20];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << " number:";
        cin >> numbers[i];
    }
    for (int j = 1; j < size - 1; j++)
    {
        int pre = numbers[j - 1];
        int curr = numbers[j];
        int next = numbers[j + 1];
        istrue = check(pre, curr, next);
        if (istrue == true)
        {
            for (int k = 0; k <= j; k++)
            {
                final[k] = numbers[j];
            }
            count++;
        }
    }
    if (istrue == true)
    {
        cout << "[";
        for (int k = 0; k < count; k++)
        {
            cout << final[k] << ",";
        }
        cout << "]";
    }
}

bool check(int pre, int curr, int next)
{
    bool istrue = false;
    if (pre < curr && next < curr)
    {
        istrue = true;
    }
    return istrue;
}