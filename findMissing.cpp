#include <iostream>

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int findMissingNumber(int arr[], int size)
{
    int firstNumber = arr[0];
    int j = 1;
    for (int i = 0; i < size; i++)
    {
        if (firstNumber + j != arr[j])
        {
            return firstNumber + j;
        }
        j++;
    }
    return -1;
}

int main()
{
    int nums[1000], n;
    std::cout << "Enter the size of the array (Max: 1000) : ";
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter Element " << i + 1 << " : ";
        std::cin >> nums[i];
    }
    bubbleSort(nums, n);
    int missingNumber = findMissingNumber(nums, n);
    if (missingNumber != -1)
    {
        std::cout << "The missing number is : " << missingNumber;
    }
    else
    {
        std::cout << "No missing number found";
    }
    return 0;
}

// #include <iostream>
// #include <algorithm>

// int findMissingNumber(int arr[], int n)
// {
//     int minElement = *std::min_element(arr, arr + n);
//     int maxElement = *std::max_element(arr, arr + n);

//     bool *present = new bool[maxElement - minElement + 1];

//     for (int i = 0; i < maxElement - minElement + 1; i++)
//     {
//         present[i] = false;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         present[arr[i] - minElement] = true;
//     }
//     for (int i = 0; i < maxElement - minElement + 1; i++)
//     {
//         if (!present[i])
//         {
//             return i + minElement;
//         }
//     }

//     delete[] present;
//     return -1; // No missing number found
// }

// int main()
// {
//     int n;

//     std::cout << "Enter the size of the array: ";
//     std::cin >> n;

//     int arr[n];

//     std::cout << "Enter the elements of the array:" << std::endl;
//     for (int i = 0; i < n; i++)
//     {
//         std::cin >> arr[i];
//     }

//     int missingNumber = findMissingNumber(arr, n);

//     if (missingNumber != -1)
//     {
//         std::cout << "The missing number is: " << missingNumber << std::endl;
//     }
//     else
//     {
//         std::cout << "No missing number found." << std::endl;
//     }

//     return 0;
// }
