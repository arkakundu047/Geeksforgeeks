//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int k) 
    { 
        // Complete the function
        unordered_map<int,int> mp;
        int sum =0 ;
        int count =0;
        int maxi =0;
        for (int i=0 ; i<N ; i++){
            sum+=A[i];
            if(sum==k){
                maxi = max(maxi,i+1);
            }
            if(mp.find(sum-k)!=mp.end()){
                 int len = i - mp[sum-k];
                 maxi = max(maxi, len);
        }

        //Finally, update the map checking the conditions:
        if (mp.find(sum) ==mp.end()) {
            mp[sum] = i;
        }
            
        }
        return maxi;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends