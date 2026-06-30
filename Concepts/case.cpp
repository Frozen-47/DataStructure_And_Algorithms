#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter a String :";
    getline(cin,str);
    for(char &c : str)
        c = tolower(c);
    cout<<"Lower Case : "<<str;
    for(char &c : str)
        c = toupper(c);
    cout<<"Upper Case : "<<str;
    return 0;
}