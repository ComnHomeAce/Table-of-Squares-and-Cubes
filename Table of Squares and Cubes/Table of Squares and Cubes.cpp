// This program will calculate the squares and cubes for the numbers 1-10

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //i = index
    double i = 0;

    cout << "This program will calculate the squares and cubes for the numbers 1-10\n\n";

    //Tabel header
    cout << "number  square  cube" << endl;
    while (i < 11)
    {
        //This loop will calculate the square and cobe of the index, before incrementing the index by 1
        cout << left;
        cout << setw(8) << i;
        cout << setw(8) << pow(i, 2);
        cout << setw(8) << pow(i, 3) << endl;

        //Increments index
        i++;
    }
}
