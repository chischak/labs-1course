//2.18 Дано натуральное число N. Поменять порядок цифр числа N на обратный.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

int n;
int r = 0;

cin >> n;

while (n > 0)
{
    r = r*10 + n % 10;
    n /= 10;
}
cout << r << endl;

    return 0;
}