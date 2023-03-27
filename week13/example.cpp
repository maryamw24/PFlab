#include <iostream>
using namespace std;
void Print();
int sum = 0;
int carsData[5][5] = {{10, 7, 12, 10, 4},
                      {18, 11, 15, 17, 2},
                      {23, 19, 12, 16, 14},
                      {7, 12, 16, 0, 2},
                      {3, 5, 6, 2, 1}};

main()
{
    Print();
}

void Print()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            cout << carsData[i][j] << "\t";
        }

        cout << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        sum = sum + carsData[i][0];
    }
    cout << sum;
}