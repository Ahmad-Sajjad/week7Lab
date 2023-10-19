#include <iostream>
using namespace std;
int frequencyChecker(int num, int digit);
main()
{
    int num, digit;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter the digit to check: ";
    cin >> digit;
    cout << "Frequency: " << frequencyChecker(num, digit);
}
int frequencyChecker(int num, int digit)
{
    int answer = 0;
    while (num > 0)
    {
        int mod = num % 10;
        num = num / 10;
        if (mod == digit)
        {
            answer = answer + 1;
        }
    }
    return answer;
}