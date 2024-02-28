#include <iostream>
using namespace std;

int main()
{

    char chars[6] = {'z', 'y', 'x', 'w', 'v', 'u'};

    for (int i = 0; i < 5; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j <= 5; j++)
        {
            if (chars[j] < chars[i])
            {
                minIndex = j;
            }
        }

        swap(chars[minIndex], chars[i]);
    }

    for (int i = 0; i <= 5; i++)
        cout << int(chars[i]) << endl;
    return 0;
}