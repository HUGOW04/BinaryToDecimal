#include <iostream>

using namespace std;

int binaryToDecimal(int number)
{
    int num = number;
    int decimal = 0;

    int base = 1;
    int temp = num;
    while (temp)
    {
        int last = temp % 10;
        temp = temp / 10;
        decimal += last * base;
        base = base * 2;
    }
    return decimal;
    
}

int main()
{
    int num = 10101001;
 
    cout << binaryToDecimal(num) << endl;
}
