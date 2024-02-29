#include <iostream>
using namespace std;
int arr[1000];

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    int first = 0;
    int second = 1;

    arr[0] = first;
    arr[1] = second;

    for (int i = 2; i <= n - 1; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    cout << arr[n - 1] << endl;
    return 0;
}
