#include <iostream>
using namespace std;

	int main(){
	
		int size;
		int *arr= new int[size];
		cout<<"Enter size of array : ";
		cin>>size;
		for(int i=0;i<size;i++){
			cout<<"Enter "<<i+1<<" element of array : ";
			cin>>arr[i];
		}
		cout<<"The value array of : ";
		for(int i=0;i<size;i++){
			cout<<arr[i]<<" ";
		}
		delete arr;
		arr=NULL;
		for(int i=0;i<size;i++){
			cout<<arr[i]<<" ";
		}
}
