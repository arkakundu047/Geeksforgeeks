#include<bits/stdc++.h>
using namespace std;
int findsubstring (string s , string x){
    int find = s.find(x);
    if(find != string :: npos){
        return find;
    }
    return -1;

}
int main(){
    string s,x;
    cout<<"enter the string and the substring"<<endl;
    getline(cin,s);
    getline(cin,x);
    int index = findsubstring(s,x);
    if(index!=-1){
        cout<<"the substring is found at the index "<<" "<<index<<endl;
    }
    else{
        cout<<"the substring is not found "<<endl;
    }
    return 0;

}