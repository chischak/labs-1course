//2.8 Напечатать прямоугольный равнобедренный треугольник со сторонами катетов, равными N, и прямым углом слева, где N — натуральное число больше 2.

#include <iostream>

using namespace std;

int main()
{
    int n;

cin >> n;

for (int i = 0; i < n; i++)
{
    for (int j = 0; j <= i; j++)
    {
        cout << "*";
    }
    cout << endl;
}
return 0;
}