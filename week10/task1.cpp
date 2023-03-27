#include <iostream>
using namespace std;
int CheckCount(string temp, char letter);

main()
{
    int size;
    char letter;
    string temp;
    int k = 0;
    int sum = 0;
    cout << "Enter number of words you want to enter:";
    cin >> size;
    string words[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << ":";
        cin >> words[i];
    }
    cout << "Enter the letter:";
    cin >> letter;
    for (int i = 0; i < size; i++)
    {
        temp = words[i];
        k = 0;
        sum = sum + CheckCount(temp, letter);
    }
    if (sum != 0)
    {
        cout << letter << " is " << sum << " times in the string.";
    }
    else if (sum == 0)
    {
        cout << "Letter not found!!";
    }
}
int CheckCount(string temp, char letter)
{
    int k = 0;
    int count = 0;
    while (temp[k] != '\0')
    {
        if (temp[k] == letter)
        {
            count++;
        }
        k++;
    }
    return count;
}