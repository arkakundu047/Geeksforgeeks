//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        // code here
        int left_min[n];
        int right_max[n];
        int i,j;
        left_min[0]=arr[0];
        right_max[n-1]=arr[n-1];
        for( i=1 ; i<n; i++){
            left_min[i]=min(arr[i],left_min[i-1]);
        }
        for( j= n-2;j>=0 ;j--){
            right_max[j]=max(arr[j],right_max[j+1]);
        }
        i=0 ; j=0 ; int max_diff=-1;
        while(i<n && j<n){
            if(left_min[i]<=right_max[j]){
                max_diff=max(max_diff,j-i);
                j++;
            }
            else{
                i++;
            }
        }
        return max_diff;
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends