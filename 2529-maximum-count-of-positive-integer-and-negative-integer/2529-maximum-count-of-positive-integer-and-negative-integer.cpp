class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int firstpos = lower_bound(nums.begin(),nums.end(),1)-nums.begin();
        int firstzero= lower_bound(nums.begin(),nums.end(),0)-nums.begin();
        return max(n-firstpos,firstzero);
    }
};