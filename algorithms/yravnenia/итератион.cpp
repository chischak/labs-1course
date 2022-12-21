// f(x)=0,25x^3+x-1,2502=0
// f'(x)=3*0,25x^2+1=0
// f''



#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    float x, xPrev;
    double lambda = 0.25 ;
    x = 1;
    xPrev = 0;
    double eps = 0.000001;

    while (abs(x - xPrev) > eps)
    {
        xPrev = x;
        x = lambda * ( 0.1 * pow(xPrev, 2) - xPrev * log(xPrev)) + xPrev;
    }
    cout << "Корень по методу итераций: " << x << endl;
    return 0;
}