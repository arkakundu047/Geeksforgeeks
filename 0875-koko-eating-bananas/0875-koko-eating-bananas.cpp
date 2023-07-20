class Solution {
public:
      int eating(vector<int>& piles, int k){
        int sum=0;
        for(int p: piles)
            sum+=(p+(k-1))/k;  
        return sum;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long left=h-1; // Initialize the left pointer as h-1
        left=accumulate(piles.begin(), piles.end(), left)/h; // Calculate the average eating speed required, rounding up using the ceiling function
        int right=*max_element(piles.begin(),piles.end()); // Initialize the right pointer as the maximum element in the piles vector
        
        while(left<right) // Perform binary search until left and right pointers meet
        {
            int&& mid=(left+right)/2; // Calculate the middle pointer
            
            if (eating(piles, mid)<=h) // If eating at the middle speed allows us to finish within h hours
                right=mid; // Update the right pointer to mid
            else
                left=mid+1; // Update the left pointer to mid+1
        }
        
        return right; 
    }
};