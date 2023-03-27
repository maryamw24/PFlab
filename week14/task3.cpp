#include <iostream>
using namespace std;
void RotateArray(int array[], int size, int number);

main()
{
    int size;
    cout << "Enter number of elements :";
    cin>> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the "<< i+ 1 << " element";
        cin>> array[i];
    }
    int number;
    cout<<"Enter number to which you want to rotate:";
    cin>> number;
    RotateArray(array, size, number);

}
void RotateArray(int array[], int size, int number)
{
    int array1[number];
    int count = 0;
    for(int i = 0; i < number; i++)
    {
        array1[i] = array[i];
    }
    for(int j = 0; j < size - number; j++)
    {
        array[j] = array[j+ number];
    }
    for(int k = size - number ; k < size; k++)
    {
        array[k] = array1[count];
        count++;
    }
    cout<< "{";
    for(int x = 0; x< size; x++)
    {
        cout<< array[x]<< ",";
    }
    cout<< "}";
   
}