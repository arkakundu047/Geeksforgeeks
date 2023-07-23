class Solution {
public:
    bool isVowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='a'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
    }
    bool halvesAreAlike(string s) {
        int n = s.size()/2;
        int first=0;
        int last=0;
        for(int i=0 ;i<n;i++){
            if (isVowel(s[i]))
                first++;
        }
        for(int i=n ;i<s.length();i++){
            if (isVowel(s[i]))
                last++;
        }
        return first==last;
    }
};