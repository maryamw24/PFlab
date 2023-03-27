#include <iostream>
using namespace std;

main()
{
    char system[13][6] = {{'*', '*', 'X', '*', 'X', '*'},
                          {'X', '*', 'X', '*', '*', '*'},
                          {'*', 'X', '*', '*', 'X', '*'},
                          {'X', '*', '*', '*', '*', 'X'},
                          {'*', '*', 'X', '*', '*', '*'},
                          {'X', '*', '*', 'X', '*', '*'},
                          {'*', '*', '*', '*', 'X', 'X'},
                          {'*', 'X', 'X', '*', 'X', '*'},
                          {'X', '*', 'X', 'X', '*', '*'},
                          {'*', '*', '*', 'X', '*', '*'},
                          {'X', '*', 'X', 'X', '*', '*'},
                          {'*', 'X', '*', '*', 'X', 'X'},
                          {'X', '*', 'X', 'X', '*', '*'}};
    string seat;
    string type;
    cout << "Enter your desired seat rows(1-13) columns(A-F):";
    cin >> seat;
    cout << "Enter the type of your ticket:";
    cin >> type;
}