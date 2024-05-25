class Solution {
    public int minFlipsMonoIncr(String s) {
        int count=0;
        int count1=0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='0'){
               count++;
            }
            else{
                count1++;
            }
            count=Math.min(count,count1);
        }
        return count;
    }
}