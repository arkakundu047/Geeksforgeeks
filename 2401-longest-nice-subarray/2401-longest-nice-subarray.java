class Solution {
    public int longestNiceSubarray(int[] nums) {
        int bit = 0;
        int res = 0, idx = 0;
        for (int i = 0; i < nums.length; i++) {
            while ((bit & nums[i]) != 0) {
                bit ^= nums[idx++];
            }

            bit |= nums[i];
            res = Math.max(res, i - idx + 1);
        }
        return res;
    }
}