class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        int j=n-1;
        int index = n-1;
        vector<int> ans(n,0);
        while(i<=j && index>=0){
            if(abs(nums[i])>abs(nums[j])){
                ans[index]= nums[i]*nums[i];
                i++;
                index--;
            }
            else{
                ans[index]= nums[j]*nums[j];
                j--;
                index--;
            }
            
        }
        return ans;
    }
};