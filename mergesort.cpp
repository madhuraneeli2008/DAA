#include<iostream>
using namespace std;
void mergesort(int a[],int n,int low,int mid,int high){
	
	
	int i=low;
	int k=low;
	int j=mid+1;
	int b[n];
	while(i<=mid&&j<=high){
		if(a[i]<=a[j]){
			b[k]=a[i];
			i++;
		}else{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	if(i>mid){
		while(j<=high){
			b[k]=a[j];
			j++;
			k++;
		}
	}else{
		while(i<=mid){
			b[k]=a[i];
			i++;
			k++;
		}
	}
	for(int i=low;i<=high;i++){
		a[i]=b[i];
	}
}
void merge(int a[],int n,int low,int high){
	int mid;
	if(low<high){
		mid=(low+high)/2;
		merge(a,n,low,mid);
		merge(a,n,mid+1,high);
		mergesort(a,n,low,mid,high);
	}
}
int main(){
	int a[]={3,5,2,8,65,32,44,12,76};
	int low=0;
	int high=8;
	merge(a,9,0,8);
	for(int i=0;i<9;i++){
		cout<<a[i]<<" ";
	}
}
