class Solution {
public:
    bool isVowel(char ch){
        return (ch=='E'|| ch=='I'|| ch=='O'|| ch=='U'|| ch=='A'|| ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u');
    }
    string sortVowels(string s) {
         vector<int> vowel;
        for(int i=0;i<s.length();i++){
            if(isVowel(s[i])) vowel.push_back(s[i]);
        }
        if(vowel.size()==0) return s;
        sort(vowel.begin(), vowel.end());
        int j=0;
        for(int i=0;i<s.length();i++){
            if(isVowel(s[i]))
            {s[i]=vowel[j++];}
        }
        
        return s;
    }
};