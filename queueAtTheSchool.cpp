/*
 * time complexity O(tn), space complexity O(1).
 * link => https://codeforces.com/problemset/problem/266/B
 * */
#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    int n,t;
    cin>>n>>t>>s;
    while(t--) {
        for(int i=0; i < n-1; i++) {
            if(s[i] == 'B' && s[i+1] == 'G') {
                //swap i with i+1
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }
    cout<<s;
    return 0;
}
