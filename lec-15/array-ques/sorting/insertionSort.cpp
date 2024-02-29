#include <iostream>
using namespace std;



int main()
{
    int nums[5] = {7, 4, 2, 3, 5};

    for (int i = 1; i < sizeof(nums) / sizeof(nums[0]); i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (nums[j] < nums[j - 1])
            {
                swap(nums[j], nums[j - 1]);
            }
            else
            {
                break;
            }
        }
    }

    for (int i = 0; i < 5; i++)
        cout << nums[i] << " ";

    cout << endl;

    return 0;
}