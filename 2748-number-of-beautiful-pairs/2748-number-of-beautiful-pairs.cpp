class Solution {
public:
    
        int first_digit(int num){
            while(num>=10){
                num/=10;
            }
            return num;
        }
        
        int last_digit(int m){
            return m%10;
        }
        bool iscoprime(int n1 , int n2){
            int a =first_digit(n1);
            int b=last_digit(n2);
            if(__gcd(a,b)==1){
                return true;
            }
            return false;
        }
    
    int countBeautifulPairs(vector<int>& nums) {
        int count=0;
        for(int i=0 ; i<nums.size();i++){
            for(int j=i+1 ; j<nums.size() ; j++){
                if(iscoprime(nums[i],nums[j])){
                    count++;
                }
            }
        }
        return count;
        
        
    }
};