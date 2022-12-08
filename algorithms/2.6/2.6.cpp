//2.6 напечатать заполненный прямоугольный равнобедренный треугольник из `*` со сторонами катетов, равными N, и прямым углом справа сверху. где N — натуральное число больше 2

#include <iostream>

using namespace std;

int main()
{
    int n;

cin >> n;

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < i; j++)
    {
        cout << " ";
    }
    for (int j = 1; j <= n-i; j++)
    {
        cout << "*";
    }
    cout << endl;
}
return 0;
}