#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {13, 65, 22, 90, 20, 17};

    int temp;
    for (int i = 5; i >  0; i--)

    {
        int index = i;
        for (int j = i - 1; j >= 0 ; j--)
        {
            if (arr[j] < arr[index])
            {
                index = j;
                
            }
        }
        swap(arr[index], arr[i]);
    }
    for (int i = 0; i <= 5; i++){
        cout << arr[i] << endl;
    }
        return 0;
}