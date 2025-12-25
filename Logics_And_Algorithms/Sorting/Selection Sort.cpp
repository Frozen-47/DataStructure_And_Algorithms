// Selection Sort Implementation in C++
#include<iostream>
using namespace std;
void Selection_sort(int arr[],int n){
    int low;
    for(int i = 0; i < n-1; i++){
      low = i;
      for(int j = i+1; j < n; j++){
        if(arr[j] < arr[low]){
            low = j;
        }
      }
      int temp = arr[i];
      arr[i] = arr[low];
      arr[low] = temp;
    }
}
void print(int arr[],int n){
    for(int i = 0;i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n = 6;
    int arr[n] = {5,2,3,8,1,0};
    print(arr,n);
    Selection_sort(arr,n);
    print(arr,n);
    return 0;
}