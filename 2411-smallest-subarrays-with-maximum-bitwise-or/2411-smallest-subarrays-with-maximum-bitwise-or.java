class Solution {
    public int[] smallestSubarrays(int[] nums) {
        int max[]=new int[33],i,j=-1,arr[]=new int[33],n=nums.length,x=0, res[]= new int[n];
        for(int num: nums){
            x=x|num;
        }
        or(max,x,1);
        for(i=0;i<n;i++){
            while(j<n && !isEqual(arr,max)){
                j++;
                if(j<n) or(arr,nums[j],1);
                if(j==n){
                    for(int lp=0;lp<33;lp++){
                        max[lp]=arr[lp];
                        arr[lp]=0;
                    }
                    j=i-1;
                }
            }
            res[i]=Math.max(j-i+1,1);
            if(j==n) res[i]--;
            or(arr,nums[i],-1);
        }
        return res;
    }
    boolean isEqual(int arr[], int max[]){
        for(int i=0;i<arr.length;i++){
            if(arr[i]*max[i]==0 && arr[i]+max[i]!=0)return false;
        }
        return true;
    }
    void or(int arr[], int num, int val){
        int i=0;
        while(num>0){
            if((num&1)==1){
                arr[i]+=val;
            }
            i++;
            num=num>>1;
        }
    }
}