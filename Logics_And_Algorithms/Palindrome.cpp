// Number Palindrome or Not
#include <iostream>
using namespace std;
int main()
{
    int n,cpy,rev = 0,temp =0;
    cout << "Enter the number : ";
    cin>>n;
    cpy =  n;
    while(cpy > 0){
        temp = cpy % 10;
        rev = (rev * 10) + temp;
        cpy = cpy / 10;
    }
    if((n - rev) == 0){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
    return 0;
}