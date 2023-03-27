#include <iostream>
using namespace std;
bool checkSparse(int Matrix[][3], int row);

main()
{
    bool Istrue;
    int row = 3;
    int column = 3;
    int Matrix[row][3] = { {1, 2, 3},
                         {3, 0, 5},
                         {0, 7, 6}};
                        
    Istrue = checkSparse(Matrix, row);
    if(Istrue == true)
    {
        cout<<"It is a Sparse Matrix"<<endl;
    }
    else
    {
        cout<<"It is not a sparxe Matrix"<<endl;
    }
}

bool checkSparse(int Matrix[][3], int row)
{
    bool Istrue = false; 
    int count= 0;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(Matrix[i][j] == 0)
            {
                count++;
            }
        }
        int limit = (row*3)/2;
        if(count > limit)
        {
            Istrue = true;
        }
    }
    return Istrue;
}