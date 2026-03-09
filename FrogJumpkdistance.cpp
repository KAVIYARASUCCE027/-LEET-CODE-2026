#include<bits/stdc++.h>
using namespace std;

int frogJumpk(vector<int> &arr,int k){
    int n=arr.size();
    vector<int> dp(n+1,INT_MAX);
    dp[0]=0;
    for(int i=1;i<n;i++){
        for(int j=1;j<=k;j++){
        if(i-j>=0){
            int jump=dp[i-j]+abs(arr[i]-arr[i-j]);
            dp[i]=min(dp[i],jump);
        }

        }
    }
    return dp[n-1];
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<frogJumpk(arr,k);
}