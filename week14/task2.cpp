#include <iostream>
using namespace std;
void MergeArray(int array1[], int array2[], int size1, int size2);

main()
{
    int size1 = 4;
    int size2 = 5;
    int array1[size1] = {1, 4, 5, 6};
    int array2[size2] = {8, 9, 4, 3, 2};
    MergeArray(array1, array2, size1, size2);
}
void MergeArray(int array1[], int array2[], int size1, int size2)
{
    int count = 0;
    int size3 = size1 + size2;
    int array3[size3];
    for (int i = 0; i < size1; i++)
    {
        array3[count] = array1[i];
        count++;
    }
    for(int j = 0; j < size2 ;j++)
    {
       array3[count]=  array2[j];
        count++;
    }
    cout<< "{";
    for(int k= 0; k < count; k++)
    {
        cout<< array3[k] << ",";
    }
    cout<< "}";
}