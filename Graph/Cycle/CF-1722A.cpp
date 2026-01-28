#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;
        string s;
        cin>>s;

        if (n != 5) {
            cout<<"NO"<<endl;
            continue;
        }

        sort(s.begin(), s.end());
        cout << (s == "Timru" ? "YES" : "NO")<<endl;

    }
}