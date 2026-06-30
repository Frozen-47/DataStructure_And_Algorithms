#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;
int binarySearch(int arr[],int n,int f) {
	int low = 0, high = n - 1;
	if(low <= high){
		int mid = low + (high - low) / 2;
		if (arr[mid]==f) return mid;
		else if(arr[mid] < f) high = mid - 1;
		else low = mid + 1;
	}
	return -1;
}
int main() {
	int n;
	cout << "Enter Size of the Array : ";
	cin >> n;
	int *arr = new int[n];
	cout << "Enter Array Elements : ";
	for(int i = 0; i < n; i++)
		cin >> arr[i];
    system("cls");
	sort(arr,arr+n);
	cout << "Sorted Array : ";
	for(int i = 0; i < n; i++)
		cout << arr[i] <<" ";
	int target,foundedat;
	cout << "\nEnter the Target Value : ";
	cin >> target;
	foundedat = binarySearch(arr,n,target);
	if(foundedat != -1) {
		cout << "Target is founded at index : "<<foundedat;
	}
	else {
		cout<<"Target not found !!!";
	}
	return 0;
}