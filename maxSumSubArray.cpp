#include <iostream>
using namespace std;

int getMax(int a, int b)
{
    return (a > b ? a : b);
}

int getMaxSum(int arr[], int size)
{
    int maxValue = arr[0];
    int realMax = arr[0];
    for (int i = 0; i < size; i++)
    {
        maxValue = getMax(arr[i], maxValue + arr[i]);
        realMax = getMax(maxValue, realMax);
    }
    return realMax;
}

int main()
{
    int arr[1000], size;
    cout << "Enter the size of the array : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i + 1 << " : ";
        cin >> arr[i];
    }
    int maxValue = getMaxSum(arr, size);
    cout << "The max sum of the given array is : " << maxValue;
    return 0;
}