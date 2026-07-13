#include<iostream>
using namespace std;
void maxmin(int a[],int i,int j,int &max,int &min){
	if(i==j){
		max=min=a[i];
	}else if(i==j-1){
		if(a[i]<a[j]){
			max=a[j];
			min=a[i];
		}else{
			max=a[i];
			min=a[j];
		}
	}else{
		int mid=(i+j)/2;
		int max1;
		int min1;
		maxmin(a,i,mid,max,min);
		maxmin(a,mid+1,j,max1,min1);
		if(max<max1){
			max=max1;
		}
		if(min>min1){
			min=min1;
		}
	}
}
int main(){
	int a[]={34,23,11,67,44,58};
	int i=0;
	int j=5;
	int max,min;
	maxmin(a,i,j,max,min);
	cout<<"max element is"<< max<<endl;
	cout<<"min element is"<< min;
}
