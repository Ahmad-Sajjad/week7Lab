#include <iostream>
using namespace std;
void generateFibonacci(int length);
main()
{
    int length;
    cout << "Enter the length of the Fibonacci series: ";
    cin >> length;
    generateFibonacci(length);
}
void generateFibonacci(int length)
{
    int n1 = 0;
    int n2 = 1;
    if (length == 1)
    {

        cout << n1;
    }
    if (length == 2)
    {

        cout << n1 << ", ";
        cout << n2;
    }
    if (length > 2)
    {
        cout << n1 << ", ";
        cout << n2;

        for (int i = 3; i <= length; i++)
        {
            int n = n1 + n2;
            cout << ", ";
            cout << n;
            n1 = n2;
            n2 = n;
        }
    }
}