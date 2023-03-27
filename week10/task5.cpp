#include <iostream>
using namespace std;

main()
{
    int boxes;
    int sum = 0;
    cout<<"Enter the number of boxes:";
    cin>>boxes;
    int size = boxes * 3;
    int numbers[size];
    for(int i = 0 ; i < size; i++)
    {
        cout<<"Enter the dimensions:";
        cin>> numbers[i];
    }
    for (int i = 0 ; i < size; i = i + 3)
    {
        sum = sum + (numbers[i]*numbers[i+1]*numbers[i+2]);
    }
    cout<<"Volume of the boxes is : " << sum;
}