#include <iostream>
using namespace std;

void printFactors(int num)
{
    int i = 1;
    while (i <= num)
    {
        if (num % i == 0)
            cout << i << endl;

        i++;
    }
    return;
}

void printEvenInRange(int end)
{
    int start = 1;
    while (start <= end)
    {
        if (start % 2 == 0)
            cout << start << endl;
        start++;
    }
    return;
}

int sum(int end)
{
    int sum = 0;
    int i = 1;
    do
    {
        sum += i;
        i++;
    } while (i <= end);

    return sum;
}

int main()
{
    // int num,initialVal=1;
    // cout << "Enter a number to generate table: ";
    // cin >> num;

    // while(initialVal<=10){
    //     cout << num * initialVal << endl;
    //     initialVal++;
    // }
    // if(initialVal>10)
    //     return 1;
    // cout << initialVal << endl;

    bool opinion = true;
    while (opinion)
    {
        cout << "India is great\n";
        cout << "But creating bug is not great\n";
        opinion = 0;
    }

    opinion = true;
    cout << "opinion is still " << opinion << endl;

    // precedence rule:
    //  {* , /, %}   >                        {+ ,-}
    // Associativity: left to right        left to right

    // same precedence : perform ops from left to right
    int ans = 3 + 4 - 6 - 2;
    int ans2 = 2 * 3 / 4;

    cout << ans << " " << ans2 << endl;

    return 1;
}