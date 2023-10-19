#include <iostream>
#include<iomanip>
using namespace std;
void percentage(int count);
main()
{
    int count;
    cout << "Enter numbers count: ";
    cin >> count;
    percentage(count);
}
void percentage(int count)
{
    float P1 = 0.0;
    float P2 = 0.0;
    float P3 = 0.0;
    float P4 = 0.0;
    float P5 = 0.0;
    float p1Percent,p2Percent,p3Percent,p4Percent,p5Percent;
    int num;
    for (int i = 1; i <= count; i++)
    {
        cout << "Enter a number: ";
        cin >> num;
        if (num < 200)
        {
            P1++;
        }
        else if (num >= 200 && num <= 399)
        {
            P2++;
        }
        else if (num >= 400 && num <= 599)
        {
            P3++;
        }
        else if (num >= 600 && num <= 799)
        {
            P4++;
        }
        else
        {
            P5++;
        }
    }
    p1Percent = (P1  / count) * 100.00;
    p2Percent = (P2  / count) * 100.00;
    p3Percent = (P3  / count) * 100.00;
    p4Percent = (P4  / count) * 100.00;
    p5Percent = (P5  / count) * 100.00;
    cout << fixed << setprecision(2) << p1Percent <<"%"<< endl;
    cout << fixed << setprecision(2) << p2Percent <<"%"<< endl;
    cout << fixed << setprecision(2) << p3Percent <<"%"<< endl;
    cout << fixed << setprecision(2) << p4Percent <<"%"<< endl;
    cout << fixed << setprecision(2) << p5Percent <<"%"<< endl;
 
}