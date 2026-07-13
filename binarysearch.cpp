#include<iostream>
using namespace std;
int binarysearch(int arr[],int x,int low,int high){
	if(low>high){
		return -1;
	}else{
		int mid=(low+high)/2;
		if(x==arr[mid]){
			return mid;
		}else if(x>arr[mid]){
			return binarysearch(arr,x,mid+1,high);
		}else{
			return binarysearch(arr,x,low,mid-1);
		}
	}
}
int main(){
	int arr[]={2,3,4,5,6,7,8};
	int x=5;
	int low=0;
	int high=6;
	cout<<binarysearch(arr,x,low,high);
}
