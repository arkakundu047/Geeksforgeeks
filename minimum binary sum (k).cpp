#include <iostream> 
#include <vector> 
#include<bits/stdc++.h> 
using namespace std; 
 
int findMinimumK(string sequence) { 
    int n = sequence.length(); 
    int sum = 0; 
    int remainingSum = 0; 
 
     
    for (int i = 0; i < n; i++) { 
        if (sequence[i] == '0') 
            remainingSum--; 
        else 
            remainingSum++; 
    } 
 
     
    for (int i = 0; i < n; i++) { 
        if (sequence[i] == '0') 
            sum--; 
        else 
            sum++; 
 
        if(sequence[i] == '1') { 
            remainingSum--; 
        } else { 
            remainingSum++; 
        } 
 
        if (sum > remainingSum) 
            return i+1; 
    } 
    return 0;  
} 
int main() { 
    string s; 
    cin >> s; 
 
    int minimumK = findMinimumK(s); 
    cout << "The minimum value of 'k' is: " << minimumK << endl; 
 
    return 0; 
}
