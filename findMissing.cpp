#include <iostream>
#include <algorithm>

int findMissingNumber(int arr[], int n)
{
    int minElement = *std::min_element(arr, arr + n);
    int maxElement = *std::max_element(arr, arr + n);

    bool *present = new bool[maxElement - minElement + 1];

    for (int i = 0; i < maxElement - minElement + 1; i++)
    {
        present[i] = false;
    }

    for (int i = 0; i < n; i++)
    {
        present[arr[i] - minElement] = true;
    }
    for (int i = 0; i < maxElement - minElement + 1; i++)
    {
        if (!present[i])
        {
            return i + minElement;
        }
    }

    delete[] present;
    return -1; // No missing number found
}

int main()
{
    int n;

    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int arr[n];

    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    int missingNumber = findMissingNumber(arr, n);

    if (missingNumber != -1)
    {
        std::cout << "The missing number is: " << missingNumber << std::endl;
    }
    else
    {
        std::cout << "No missing number found." << std::endl;
    }

    return 0;
}

// #include <iostream>
// using namespace std;
// int findMissingNumber(int arr[], int n)
// {
//     int i, total;
//     total = (n + 1) * (n + 2) / 2;
//     for (i = 0; i < n; i++)
//         total -= arr[i];
//     return total;
// }

// int main()
// {
//     int nums[1000], n;
//     cout << "Enter the size of the array (Max: 1000) : ";
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter Element " << i + 1 << " : ";
//         cin >> nums[i];
//     }

//     int missingNumber = findMissingNumber(nums, n);

//     cout << "The missing number is: " << missingNumber << std::endl;

//     return 0;
// }