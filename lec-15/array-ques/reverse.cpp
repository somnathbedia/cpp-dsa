#include <iostream>
using namespace std;



void reverse(int arr[], int N)
{
    N -= 1;
    int i = 0;
    while ( i < N)
    {
        swap(arr[i], arr[N]);
        i++;
        N--;
    }
    
    for (int index = 0; index < 6; index++)
        cout << arr[index] << endl;
}

int main()
{
    int arr[6] = {12,45,67,11,42,100};

    
    reverse(arr, sizeof(arr) / sizeof(arr[0]));

    return 0;
}