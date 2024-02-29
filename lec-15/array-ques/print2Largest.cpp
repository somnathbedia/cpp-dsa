#include<iostream>
using namespace std;

int print2Largest(int arr[],int N){
    int ans = INT32_MIN;
    int secontlargest = INT32_MIN;
    for (int i = 0; i <= N - 1; i++)
    {
        if(ans > arr[i]){
            ans = arr[i];
        }
    }
    cout << N - 1 << endl;
    for (int j = 0; j <= N - 1; j++)
    {
        if(ans != arr[j]){
           secontlargest =  max(secontlargest, arr[j]);
        }
    }

    return ans;
}

int main()
{
    int arr[7] = {2, 6, 4, 3, 8, 5, 1};
    cout << print2Largest(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}