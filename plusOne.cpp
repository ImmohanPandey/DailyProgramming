#include <iostream>
using namespace std;
int main()
{
    int arr[1000], size, i, number = 0, reversedarray[1000];
    cout << "Enter array size : ";
    cin >> size;
    for (i = 0; i < size; i++)
    {
        cout << "Enter Element " << i + 1 << " : ";
        cin >> arr[i];
        number = number * 10 + arr[i];
    }
    number = number + 1;
    i = 0;
    int rasize = 0;
    while (number != 0)
    {
        reversedarray[i] = number % 10;
        number = number / 10;
        i++;
        rasize++;
    }
    int j = 0;
    for (i = rasize - 1; i >= 0; i--)
    {
        arr[j] = reversedarray[i];
        j++;
    }
    for (i = 0; i < rasize; i++)
    {
        cout << arr[i];
    }
}