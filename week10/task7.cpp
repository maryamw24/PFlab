#include <iostream>
using namespace std;

main()
{
    string words;
    cout<<"Enter the word:";
    getline(cin, words);
    int counter = words.length();
    int k = counter;
    for (int x = counter -1 ; x >= 0 ; x--)
    {
        if (words[x] == ' ' || x == 0)
        {
            for(int y = x ; y < k ; y++)
            {
                cout <<words[y];

            }
            cout<< " ";
            k = x;
        }
    }
}