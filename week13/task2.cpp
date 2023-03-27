#include <iostream>
using namespace std;
string check(int colIndex, int rowIndex);
string game[5][5]= {{".",".",".","*","*" },
                    {".","*",".",".","."},
                    {".","*",".","*","."},
                    {".",".","*",".","*"},
                    {".",".","*","*","."}};

main()
{
    string point;
    char row = point[0] ;
    char col= point[1];
    int rowIndex;
    int colIndex= (int)col - '0';
    cout<< "Enter point";
    cin>>point;
    if(row == 'A')
    {
        rowIndex = 0;
    }
    else if(row == 'B')
    {
        rowIndex = 1;
    }
    else if(row == 'C')
    {
        rowIndex = 2;
    }
    else if(row == 'D')
    {
        rowIndex = 3;
    }
    else if(row == 'E')
    {
        rowIndex = 4;
    }
    string c = check(colIndex, rowIndex);
    cout << c;

}
string check(int colIndex, int rowIndex)
{
    string c;
   if(game[rowIndex][colIndex] == "*")
   {
       c = "Boom";
   }
   if(game[rowIndex][colIndex] == ".")
   {
        c = "Splash";
   }
   return c ;
}
