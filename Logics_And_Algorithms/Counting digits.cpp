// Count the Number of Digits in an Integer
#include <iostream>
using namespace std;
int main()
{
    int n,cpy,count = 0;
    cout << "Enter the integer  : ";
    cin >> n;
    cpy = n;
    while(cpy > 0){
        count++;
        cpy = cpy / 10;
        
    }
    cout<<"No of digits : "<<count;

    return 0;
}