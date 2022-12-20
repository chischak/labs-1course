//2.23 Посчитать количество элементов, совпадающих с максимальным. Последовательность элементов задана формулой общего члена <img src="https://latex.codecogs.com/svg.latex?%5Cinline%20a_%7Bi%7D%20%3D%20sin%28n%20&plus;%20%5Cfrac%7Bi%7D%7Bn%7D%29">

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float n, a, max = - 1;
    int amount = 0;
    cin >> n;
    for ( int i = 1; i <= n; i++)
    {
        a = sin(n + i / n);
        if (a > max)
        {
            max = a;
        }
        else if (a == max)
        {
            amount += 1;
        }
    } cout << "колво совпадающиx элементв равно" << ' ' << amount;
    

    return 0;
}