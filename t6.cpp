#include <iostream>
using namespace std;
int calculateGCD(int n1, int n2);
int calculateLCM(int n1, int n2, int Hcf);
main()
{
    int n1, n2;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    int HCF = calculateGCD(n1, n2);
    cout << "GCD: " << HCF << endl;
    cout << "LCM: " << calculateLCM(n1, n2, HCF);
}
int calculateGCD(int n1, int n2)
{

    while (n1 != n2)
    {
        if (n1 > n2)
        {
            n1 = n1 - n2;
        }
        else
        {
            n2 = n2 - n1;
        }
    }
        return n1;
}
int calculateLCM(int n1, int n2, int Hcf)
{
    int Lcm = (n1 * n2) / Hcf;
    return Lcm;
}