#include <iostream>
using namespace std;
int count = 0;
bool IsDiagonel();
int matrix[3][3] = {{4, 0, 0},
                    {0, 4, 0},
                    {0, 0, 4}};

main()
{
    bool flag = IsDiagonel();
    if (flag == true)
    {
        cout<< "It is identity matrix"<<endl;
    }
    else
    {
        cout<< "Not a identity matrix"<<endl;
    }
}
bool IsDiagonel()
{
    bool flag = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j< 3 ; j++)
        {
            if(i==j && matrix[i][j] != 4)
            {
                flag = false;
                break;
            }
            if (i != j && matrix[i][j] != 0)
            {
                flag = false;
                break;
            }
        }
    }
    return flag;
}