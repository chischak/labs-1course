#include <iostream>

using namespace std;

int main()
{
    int n, tmp, max, min, *ptr=&tmp;

cout << "дайти дилну" << endl;
cin >> n;

cout << " введите перви число" << endl;
cin >> *ptr;
max = *ptr;
min = *ptr;

for (int i = 2; i <= n; i++)
{
    cout << " введите ещё число" << endl;
    cin >> *ptr;
    if (*ptr > max)
    {
        max = *ptr;
    }
    else if (*ptr < min)
    {
        min = *ptr;
    }
}
cout << " больший элемент эт " << max << endl << " меньший элемент эт " << min << endl;

    return 0;
}