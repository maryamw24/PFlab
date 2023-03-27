#include <iostream>
using namespace std;
int numbers[20];
int checkCondition(int weeks);
main()
{
    int weeks;
    cout<<"Enter number of weeks you run:";
    cin>>weeks;
    for(int i = 0 ; i < weeks ; i ++)
    {
        cout<<"Enter miles you run in "<< i + 1 <<" week";
        cin>> numbers[i];
    }

    int count = checkCondition( weeks );
    cout<< "He has "<< count << " progress days!!";
}

int checkCondition(int weeks )
{
    int count = 0 ; 
    for (int i = 0 ; i < weeks - 1; i++)
    {
        if (numbers[i] < numbers [i + 1])
        {
            count ++ ;
        }
    }
    return count;
}