class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
         int n= nums.size();
      vector<int>left_sum(n,0);
         
        left_sum[0]=nums[0];
       
        for(int i=1;i<n ;i++){
            left_sum[i]=left_sum[i-1]+nums[i];
        }
        vector<int> right_sum(n,0);
        
         right_sum[n-1]=nums[n-1];
        
         for(int i=n-2;i>=0 ;i--){
            right_sum[i]=right_sum[i+1]+nums[i];
        }
        vector<int>ans(n,0);
        
        for(int i=0;i<n;i++){
         ans[i]=abs(left_sum[i]-right_sum[i]);
        }
        return ans;
    }
};