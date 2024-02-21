#include <iostream>
using namespace std;

int main()
{

    int num = 97, mul = 2, ans = 0;
    while (mul <= num)
    {
    
        mul *= 2;
       if(mul == num && mul <= num){
           cout<<"Power of 2\n";
       }
       continue;
    }
    
   
    return 0;
}