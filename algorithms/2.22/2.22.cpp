//2.22 Найти максимальный элемент в последовательности (его значение и номер). Последовательность элементов задана формулой общего члена <img src="https://latex.codecogs.com/svg.latex?%5Cinline%20a_%7Bi%7D%20%3D%20sin%28n%20&plus;%20%5Cfrac%7Bi%7D%7Bn%7D%29">.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float n, a, pos, max = - 1;
    cin >> n;
    for ( int i = 1; i <= n; i++)
    {
        a = sin(n + i / n);
        if (a > max)
        {
            max = a;
            pos = i;
        }
    } cout << "большее число это" << max << endl << "в списке он кароч идёт " << pos;
    

    return 0;
}