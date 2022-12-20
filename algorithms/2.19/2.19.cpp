//2.19 Вычислить сумму S = 1 + 2 - 3 + 4 + 5 - 6 + 7 + 8 - 9 ... до N слагаемых.

#include <iostream>

using namespace std;

int main()
{
    int n,s = 0;
    cin >> n;
    for ( int i = 1; i <= n; i++)
    {
        if (i % 3 != 0)
        {
            s += i;
        }
        else
        {
            s -= i;
        }
    } cout << s;
    
    

    return 0;
}