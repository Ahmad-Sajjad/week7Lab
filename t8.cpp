#include <iostream>
using namespace std;
string calculateMoney(int age, int machinePrice, int toyPrice);
main()
{
    int age, machinePrice, toyPrice;
    cout << "Enter Lilly's age: ";
    cin >> age;
    cout << "Enter the price of the washing machine: ";
    cin >> machinePrice;
    cout << "Enter the unit price of each toy: ";
    cin >> toyPrice;
    cout << calculateMoney(age, machinePrice, toyPrice);
}
string calculateMoney(int age, int machinePrice, int toyPrice)
{
    int odd = 0, even = 0;
    int money = 10;
    int money1 = 0;
    int toy = 1;
    string st;
    for (int i = 1; i <= age; i++)
    {
        if (i % 2 == 1)
        {
            odd++;
        }
        if (i % 2 == 0)
        {
            even++;
        }
    }
    for (int j = 1; j <= even; j++)
    {
        money1 = money1 + (money - 1);
        money = money + 10;
    }
    toy = toy * odd;
    toyPrice = toyPrice * toy;
    int totalMoney = toyPrice + money1;
    if (machinePrice > totalMoney)
    {
        int final = machinePrice - totalMoney;
        st = "No! \n" + to_string(final);
    }
    if (machinePrice < totalMoney)
    {
        int final = totalMoney - machinePrice;
        st = "Yes! \n" + to_string(final);
    }
    return st;
}