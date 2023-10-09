#include <iostream>
#include <string>

bool hasUniqueDigits(int num)
{
    int digitCount[10] = {0};
    while (num > 0)
    {
        int digit = num % 10;
        if (digit == 0 || ++digitCount[digit] > 1)
        {
            return false;
        }
        num /= 10;
    }
    return true;
}

bool isFascinating(int num)
{
    if (num < 100 || num > 999)
    {
        return false;
    }
    int doubleNum = num * 2;
    int tripleNum = num * 3;
    int concatenated = ((((num * 1000) + doubleNum) * 1000) + tripleNum);

    return hasUniqueDigits(concatenated);
}

int main()
{
    int userNumber;

    std::cout << "Enter a number (between 100 and 999): ";
    std::cin >> userNumber;

    if (isFascinating(userNumber))
    {
        std::cout << userNumber << " is a fascinating number." << std::endl;
    }
    else
    {
        std::cout << userNumber << " is not a fascinating number." << std::endl;
    }

    return 0;
}
