//2.16 Вычислить сумму S = -1 + 2 - 3 + 4 - 5 + 6 - ... до N слагаемых.

#include <iostream>

using namespace std;

int main()
{
    int n, s = 0;
    cin >> n;
    for ( int i = 0; i <= n; i++)
    {
        if ( i % 2 != 0)
        {
            s = s - i;
        }
        else
        {
            s = s + i;
        }
    } cout << s;

    return 0;
}