#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int longincrsubseq(vector<int> &arr){
	int n=arr.size();
	vector<int> dp(n,1);
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(arr[i]>arr[j]){
				dp[i]=max(dp[i],dp[j]+1);
			}
		}
	}
	return *max_element(dp.begin(),dp.end());
}
int main(){
	int n;
	cout<<"Enter size of array";
	cin>>n;
	vector<int> arr(n);
	cout<<"Enter array elements";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<longincrsubseq(arr);
	return 0;
}
