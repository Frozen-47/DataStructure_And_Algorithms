// Sum of Digits of a Number
#include <iostream>
using namespace std;
int main()
{
    int n,cpy,temp = 0,tot = 0;
    cout << "Enter the number : ";
    cin>>n;
    cpy = n;
    while (cpy > 0){
        temp = cpy % 10;
        tot += temp;
        cpy /= 10;
    }
    cout<<"The sum of "<<n<<" = "<<tot;
    return 0;
}