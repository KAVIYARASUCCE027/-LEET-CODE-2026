#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int i:nums){
          freq[i]++;
        }
        int sum=0;
        for(auto &i:freq){
          if(i.second%k==0){
              sum=sum + (i.first*i.second);
          }
        }
        return sum;
    }
};