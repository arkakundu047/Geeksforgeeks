class Solution {
public:
    int totalMoney(int n) {
          int mon = 1;
      int ans = 0;
      int cnt = 0;
      while(n--)
      {
         ans+= (mon+cnt);
         cnt++;
         if(cnt==7)
         {
           cnt = 0;
           mon++;
         }
      }
      return ans;
    }
};