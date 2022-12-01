//На отрезке [2;N] найти все натуральные числа, сумма цифр которых при умножении числа на А не изменится.
#include<iostream>
#include <fstream>
using namespace std;

void main()
{
    ofstream fout("e.dat");

    int a, n, num, num1, sumbefore = 0, sumafter = 0;
    cin >> n >> a;
    for (num = 2; num <= n; num++)
    {
        num1 = num;
        while (num1 != 0)
        {
            sumbefore += num1 % 10;
            num1 /= 10;
        }
        num1 = num * a;
        while (num1 != 0)
        {
            sumafter += num1 % 10;
            num1 /= 10;
        }
        if (sumafter == sumbefore)
        {
            fout << num << "\n";
        }
        sumafter = 0;
        sumbefore = 0;
    }
    fout.close();
}