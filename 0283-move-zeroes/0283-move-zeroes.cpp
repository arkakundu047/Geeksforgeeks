class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       if(nums.size()<=1){
           return;
       }
       int j=INT_MIN;
        for(int i=0 ; i<nums.size();i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        for(int i=j+1;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
        
    }
};