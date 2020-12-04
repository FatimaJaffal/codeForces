/*
 link ==> https://codeforces.com/problemset/problem/268/A
  time complexity O(n+m) n ==> teams, m ==> colors[100]
  space complexity O(n+m)
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<pair<int,int>>teams;
    for(int i=0; i <n; i++) {
        int a,b;
        cin>>a>>b;
        teams.push_back({a,b});
    }
    int count = 0;
    vector<int>home(101);
    vector<int>uniform(101);
    for(int i=0; i < n; i++) {
        home[teams[i].first]++;
        uniform[teams[i].second]++;
    }
    for(int i=1; i < 101; i++) {
       count+=(home[i]*uniform[i]); 
    }
    cout<<count;
    return 0;
}
