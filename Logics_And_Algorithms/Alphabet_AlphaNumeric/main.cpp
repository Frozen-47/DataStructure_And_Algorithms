#include<iostream>
#include<cctype>
using namespace std;
int main(){
    string str;
    cout << "Enter a string:";
    getline(cin,str);
    string letters = "", numbers = "";
    for(auto i : str){
        if(isalpha(i)){
            letters += i;
        }
        else if(isdigit(i)){
            numbers += i;
        }
        else{
            continue;
        }
    }
    cout<<letters<<numbers;
} 
