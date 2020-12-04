#include<bits/stdc++.h>

using namespace std;

bool checkYear(int year) {
    int a[4];
    int i =0;
    while(year) {
      a[i++]= year%10;
      year/=10;
    }
    i = 0;
    while(i < 4) {
        for(int j=0;j<4;j++) {
            if(i != j && a[i] == a[j]) {
                return false;
            }
        }
        i++;
    }
    return true;
}

int main() {
    int year;
    cin>>year;
    while(true) {
        year++;
        if(checkYear(year)) {
            cout<<year;
            return 0;
        }
    }
    return 0;
}
