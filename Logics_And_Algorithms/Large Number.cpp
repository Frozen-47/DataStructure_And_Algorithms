// Find the Largest Digit in a Number
#include <iostream>
using namespace std;
int main()
{
    int n,cpy,temp,large = 0;
    cout << "Enter the number : ";
    cin>>n;
    cpy = n;
    while(cpy > 0){
        temp = cpy % 10;
        if(temp > large){
            large = temp;
        }
        cpy = cpy/10;
    }
    cout<<large;
    return 0;
}