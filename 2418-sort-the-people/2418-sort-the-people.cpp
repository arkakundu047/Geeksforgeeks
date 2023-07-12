class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        map<int,string> m;
        for (int i=0 ; i<n; i++){
            m[heights[i]]=names[i];
        }
        vector<string> s;
        for(auto i=m.rbegin(); i!=m.rend();++i){
            s.push_back(i->second);
        }
        return s;
    }
};