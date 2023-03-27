#include <iostream>
using namespace std;
bool check(int i, int j);
int matrix[4][3] = {{1, 0, 1},
                    {0, 0, 0},
                    {1, 0, 1},
                    {1, 0, 0}};

main()
{
    int count = 0;
    bool flag;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            bool flag = check(i, j);
        }
        if(flag = true)
        {
            count++;
        }
    }
    cout<< count;
}

bool check(int i, int j)
{
    bool flag = true;
    if (matrix[i][j] != matrix[i][j + 1])
    {
        flag = false;
    }
    return flag;
}