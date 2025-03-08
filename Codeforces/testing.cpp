#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            vector<int>pref(nums.size(),0), suff(nums.size(),0);
            pref[0]=nums[0];
            suff[nums.size()-1] = nums[nums.size()-1];
            for(int i =1;i<nums.size();i++){
                pref[i]  = pref[i-1]*nums[i];
                suff[nums.size()-1-i] = suff[nums.size()-i]*nums[nums.size()-i-1];
            }
            vector<int>ans(nums.size());
            for(int i =0;i<nums.size();i++){
                if(i==0)
                ans[i] = suff[i+1];
                else if(i==nums.size()-1)
                ans[i] = pref[i-1];
                else
                ans[i] = pref[i-1]*suff[i+1];
            }
            return ans;
    
        }
    };

    int main(){
        Solution sol;
        vector<int>input = {1,2,3,4,5};
        vector<int> result = sol.productExceptSelf(input);
        for(int i:result){
            cout<<i<<" ";
        }

        return 0;
    }