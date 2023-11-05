#include <iostream>
#include <string>
using namespace std;

string addBinary(string a, string b)
{
    int m = a.length();
    int n = b.length();

    int max_len = max(m, n);
    a = string(max_len - m, '0') + a;
    b = string(max_len - n, '0') + b;

    string result = "";
    int carry = 0;

    for (int i = max_len - 1; i >= 0; i--)
    {
        int bit_a = a[i] - '0';
        int bit_b = b[i] - '0';

        int sum = bit_a + bit_b + carry;
        carry = sum / 2;
        result = to_string(sum % 2) + result;
    }

    if (carry > 0)
    {
        result = "1" + result;
    }

    return result;
}

int main()
{
    string binary1 = "1010";
    string binary2 = "1101";

    string sum = addBinary(binary1, binary2);
    cout << "Sum of " << binary1 << " and " << binary2 << " is: " << sum << endl;

    return 0;
}

// #include <iostream>
// #include <string.h>
// using namespace std;
// int main()
// {
//     char n1[100], n2[100];
//     cout << "Enter first binary : ";
//     cin >> n1;
//     cout << "Enter second binary : ";
//     cin >> n2;
//     int len1 = strlen(n1);
//     int len2 = strlen(n2);

// }