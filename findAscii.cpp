#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter any character to get the ASCII code for the character : ";
    cin >> ch;
    cout << "The ASCII code for the " << ch << " is " << int(ch);
    return 0;
}