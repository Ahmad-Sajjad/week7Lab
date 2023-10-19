#include <iostream>
using namespace std;
int totalDigits(int num);
main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Total number of digits: " << totalDigits(num);
}
int totalDigits(int num)
{
    if (num == 0)
    {
        int i = 1;
        return i;
    }
    int i = 0;
    while (num != 0)
    {
        num = num / 10;
        i++;
    }
    return i;
}