class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int n = candies.size();
        long long sum =0;
        for(int i=0 ; i<n ;i++){
            sum+=candies[i];
        }
        int left = 0, right = sum/k;
        while (left < right) {
            long sum = 0, mid = (left + right+1 ) / 2;
            for (int& a : candies) {
                sum += a / mid;
            }
            if (k > sum)
                right = mid - 1;
            else
                left = mid;
        }
        return left;
    }
};