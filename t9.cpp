#include <iostream>
using namespace std;
string calculatePrice(int money, int year);
main()
{
    int money;
    int year;
    cout << "Enter Money: ";
    cin >> money;
    cout << "Enter Year: ";
    cin >> year;
    cout << calculatePrice(money, year);
}
string calculatePrice(int money, int year)
{
    int even = 0;
    int odd = 0;
    int sum = 0;
    int k = 1;
    string st;
    for (int i = 1800; i <= year; i++)
    {
        if (i % 2 == 0)
        {
            even++;
        }
        if (i % 2 == 1)
        {
            odd++;
        }
    }
    int evenYear = 12000 * even;
    for (int j = 1; j <= odd; j++)
    {
        
        sum = sum + 12000 + 50 * (18 + k);
        k = k + 2;
    }
    int total = evenYear + sum;
    if (money > total)
    {
        int total1 = money - total;
        st = "Yes! He will live a carefree life and will have " + to_string(total1) + " dollars left.";
    }
    if (money < total)
    {
        int total1 = total - money;
        st = "He will need " + to_string(total1) + " dollars to survive.";
    }
    return st;
}