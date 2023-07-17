class Solution {
public:
    string removeDuplicates(string s) {
        int i=0; int n = s.size();
        string res="";
        while(i<n){
           if(res.empty()||s[i]!=res.back()){
               res.push_back(s[i]);
           }
            else{
                res.pop_back();
            }
            i++;
        }
        return res;
    }
};