#include<iostream>
using namespace std;

int main(){
    int option = 1;
    cout << "Select 1 or 10 : ";
    cin >> option;
    switch (option)
    {
    case 1:
        cout << "Jay Hind\n";
        break;
    case 10:
        cout << "Everyone has their own choice\n";
        break;
    default:
        break;
    }

   
    return 1;
}