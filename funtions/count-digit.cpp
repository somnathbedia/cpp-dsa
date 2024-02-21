// ## Write a program to count digit of a number which is >= 10.

#include<iostream>
using namespace std;

int countDigit(int num){
    int count = 0,rem;

    if(num <= 9)
        return 1;
    while (num)
    {
        rem = num % 10;
        num /= 10;
        count += 1;
    }
    return count;
}


int main(){

    int ans,num;
    cout << "Enter number to count digit: ";
    cin >> num;
    ans = countDigit(num);
    cout <<"Number has " <<ans <<" digits"<< endl;
    return 0;
}