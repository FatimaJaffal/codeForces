/*
 link ==> https://codeforces.com/contest/1335/problem/A
  time complexity O(n)
  space complexity O(1)
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--) {
        int c;
        cin>>c;
        cout<<(c-1)/2<<endl;
    }
    return 0;
}
