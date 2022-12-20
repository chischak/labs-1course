//2.20 Последовательность элементов задана формулой общего члена <img src="https://latex.codecogs.com/svg.latex?%5Cinline%20a_%7Bi%7D%20%3D%20sin%28n%20&plus;%20%5Cfrac%7Bi%7D%7Bn%7D%29">. Проверить, если ли среди этих элементов элемент, равный S.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float n, a, s;
    bool flag = false;
    cout << "введите число" << endl; cin >> n; cout << "введите че ищем" << endl; cin >> s;
    for ( int i = 1; i <= n; i++)
    {
        a = sin(n + i / n);
        if ( s == a )
        {
            flag = true;
        }
    }
     if (flag)
        {
            cout << "нашли s";
        }
        else
        {
            cout << "не нашли s";
        }
     

    return 0;
}