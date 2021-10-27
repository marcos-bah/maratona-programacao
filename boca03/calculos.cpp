#include <iostream>
#include <string.h>

using namespace std;

//funtion itoa
char *itoa(int value, char *str, int base)
{
    int i = 0;
    int isNegative = 0;
    char *ptr = str;
    char *ptr1 = str;
    int remainder = 0;
    if (base < 2 || base > 36)
    {
        *ptr = '\0';
        return ptr;
    }
    if (value == 0)
    {
        *ptr++ = '0';
        *ptr = '\0';
        return ptr;
    }
    if (value < 0 && base == 10)
    {
        isNegative = 1;
        value = -value;
    }
    while (value != 0)
    {
        remainder = value % base;
        if (remainder > 9)
        {
            *ptr++ = (remainder - 10) + 'a';
        }
        else
        {
            *ptr++ = remainder + '0';
        }
        value = value / base;
    }
    if (isNegative)
    {
        *ptr++ = '-';
    }
    *ptr-- = '\0';
    while (ptr1 < ptr)
    {
        char temp = *ptr;
        *ptr-- = *ptr1;
        *ptr1++ = temp;
    }
    return str;
}

//function int value to string and return string type
string intToString(int value)
{
    char str[100];
    itoa(value, str, 10);
    string s = str;
    return s;
}

string sum(string num1, string num2)
{
    int len1 = num1.length();
    int len2 = num2.length();

    int len;
    if (len1 > len2)
    {
        len = len1;
    }
    else
    {
        len = len2;
    }
    int carry = 0;
    string result = "";
    for (int i = 0; i < len; i++)
    {
        int sum = carry;
        if (i < len1)
        {
            sum += num1[len1 - i - 1] - '0';
        }

        if (i < len2)
        {
            sum += num2[len2 - i - 1] - '0';
        }

        result = intToString(sum % 10) + result;
        carry = sum / 10;
    }
    if (carry > 0)
    {
        result = intToString(carry) + result;
    }

    return result;
}

int main()
{
    string N;
    string soma = "";

    while (cin >> N && N != "0")
    {
        if (soma.empty())
        {
            soma = N;
        }
        else
        {
            soma = sum(soma, N);
        }
    }

    cout << soma << endl;

    return 0;
}
