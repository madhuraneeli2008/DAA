#include<iostream>
using namespace std;
void swap(int &a,int &b){
	int c=a;
	a=b;
	b=c;
}
int partition(int a[],int low,int high){
	int pivot=a[low];
	int i=1;
	int j=high+1;
	while(i<j){
		i++;
		while(a[i]<pivot){
			i++;
		}
		j--;
		while(a[j]>pivot){
			j--;
		}
		if(i<j){
			swap(a[i],a[j]);
		}
		
	}
	swap(a[low],a[j]);
	return j;
}
void quicksort(int a[],int low,int high){
	if(low<high){
		int j=partition(a,low,high);
		quicksort(a,low,j-1);
		quicksort(a,j+1,high);
	}
}
int main(){
	int a[]={34,12,55,43,76,10,67};
	quicksort(a,0,6);
	for(int i=0;i<7;i++){
		cout<<a[i]<<" ";
	}
}
