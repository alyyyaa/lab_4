//Дан текстовый файл с именем a.num, в котором записано несколько натуральных чисел. Посчитать среднее арифметическое чисел, хранимых в файле.
#include<iostream>
#include <fstream>
#include <string>
using namespace std;

void main()
{
    string num;
    float numsum = 0, k = 0;
    ifstream file("a.num");

    while (!file.eof())
    {
        file >> num;
        if (stoi(num) != 0)
        {
            numsum += stoi(num);
            k += 1;
        }
    }
    cout << (numsum / k);
    file.close();
}