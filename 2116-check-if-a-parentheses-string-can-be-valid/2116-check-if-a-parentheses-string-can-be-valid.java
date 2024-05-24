class Solution {
    public boolean canBeValid(String s, String locked) {
        int n=s.length();
        if(n%2!=0)return false;
        int po=0;
        int fc=0;
        for(int i=0;i<n;i++){
            if(s.charAt(i)=='('||locked.charAt(i)=='0'){
                po++;
            }else{
                fc++;
            }
            if(fc>po)return false;
        }
        int fo=0;
        int pc=0;
        for(int i=n-1;i>=0;i--){
            if (s.charAt(i) == ')' || locked.charAt(i) == '0') {
                pc++;
            }else{
                fo++;
            }
            if(fo>pc)return false;
        }
        return true;
        }
        }