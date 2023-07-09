class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n = words.size();
        unordered_map<char,int> mp;
        for(auto it : words){
            for(auto ch : it){
                mp[ch]++;
            }
        }
        for ( auto ele : mp){
            if(ele.second%n!=0){
                return false;
            }
        }
        return true;
    }
};