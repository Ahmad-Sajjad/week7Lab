#include <iostream>
using namespace std;
void printTable(int num);
main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    printTable(num);
}
void printTable(int num)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}