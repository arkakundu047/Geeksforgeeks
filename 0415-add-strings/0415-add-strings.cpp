class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.size()-1;
        int j=num2.size()-1;
        int carry=0;
        string val = "";
        while(i>=0 || j>=0 || carry>0){
             int ival = (i>=0) ? (num1[i]-'0'):0;
             int jval = (j>=0) ? (num2[j]-'0'):0;
            i--;
            j--;
            int sum = ival+jval+carry;
             val+= (char)(sum%10+'0')  ;
            carry= sum/10;
        }
        string ans = string(val.rbegin(), val.rend());
        return ans;
        
    }
};