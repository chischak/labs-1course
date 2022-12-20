//2.21 Числа вводятся с клавиатуры до тех пор, пока не встретится число 0 (0 — признак окончания ввода). Проверить, упорядочены ли числа по возрастанию.

#include <iostream>

using namespace std;

int main()
{
    int tmp, next;
    bool ordered = true;
    cin >> tmp;
    while ( tmp != 0)
    {
        cin >> next;
        if ( next != 0 and tmp > next)
        {
            ordered = false;
        }
        tmp = next;
    }
    if (ordered)
    {
        cout << "числа упорядочены";
    }
    else
    {
        cout << "числа не упорядочены";
    }

    return 0;
}