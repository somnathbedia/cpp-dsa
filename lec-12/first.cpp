#include <iostream>
using namespace std;

long int decToBin(int dec)
{
    int rem, ans = 0, mul = 1;
    while (dec > 0)
    {
        rem = dec % 2;
        dec = dec / 2;
        ans = rem * mul + ans;
        mul *= 10;
    }
    return ans;
}

int main()
{
    const int result = decToBin(13);
    cout << result << endl;
    return 1;
}
