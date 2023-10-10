#include <iostream>

int minJumpsToEnd(int arr[], int n)
{
    if (n == 0)
    {
        return -1;
    }

    if (n == 1)
    {
        return 0;
    }

    int jumps = 1;
    int maxReach = arr[0];
    int stepsLeft = arr[0];

    for (int i = 1; i < n; ++i)
    {
        if (i == n - 1)
        {
            return jumps;
        }

        if (i + arr[i] > maxReach)
        {
            maxReach = i + arr[i];
        }

        stepsLeft--;

        if (stepsLeft == 0)
        {
            jumps++;
            if (i >= maxReach)
            {
                return -1;
            }
            stepsLeft = maxReach - i;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {9, 10, 1, 2, 3, 4, 8, 0, 0, 0, 0, 0, 0, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = minJumpsToEnd(arr, n);
    std::cout << result << std::endl;

    return 0;
}
