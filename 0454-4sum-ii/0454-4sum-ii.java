class Solution {
    public int fourSumCount(int[] nums1, int[] nums2, int[] nums3, int[] nums4) {
        int count=0;
        Map<Integer, Integer> map=new HashMap<>();

        for( int n3: nums3)
        {
            for( int n4:nums4)
            {
                map.put(n3+n4, map.getOrDefault(n3+n4, 0)+1);
            }
        }
        for(int num1: nums1)
        {
            for(int num2: nums2)
            {
                int sum=num1+num2;
                if(map.containsKey(-sum)) count+=map.get(-sum);
            }
        }
        return count;
    }
}