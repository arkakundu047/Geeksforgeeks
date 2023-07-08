class Solution {
public:
    string removeTrailingZeros(string num) {
        int j = num.length()-1;
        for(j=num.length()-1 ; j>=0;j--){
            if(num[j]!='0'){
              break  ;
            }
        }
        if(j<0){
            return "";
        }
        else{
            return num.substr(0,j+1);
        }
    }
};