#include <iostream>
using namespace std;

int min(int *arr, int N)
{

    int max = INT32_MAX;
    int ans;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] < max)
            ans = arr[i];
    }

    return ans;
}

long int evenProduct(int *arr, int N)
{
    int size = sizeof(arr) / sizeof(arr[0]);
    int i = 0, mul = 1;

    while (i < N)
    {
        if (arr[i] % 2 == 0)
        {
            int even = arr[i];
            mul *= even;
        }
        i++;
    }
    return mul;
}

int sumOfEven(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            ans += arr[i];
    }

    return ans;
}

int main()
{
    int num[6] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(num) / sizeof(num[0]);

    cout << sumOfEven(num, size) << endl;
    return 0;
}