#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    getline(cin,name);
    string rev = name;
    reverse(rev.begin(),rev.end());
    cout << (name == rev ? "Palindrome" : "Not Paindrome");

    return 0;
}