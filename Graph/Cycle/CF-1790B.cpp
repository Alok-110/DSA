#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n,s,r;
        cin>>n>>s>>r;

        int maxDice = s-r;
        cout<<maxDice<<" ";

        int sum = r - (n - 1);

        vector<int> v(n-1, 1);

        for(int i = 0; i<n-1; i++){

            int x = min(6-v[i],min(maxDice-v[i],sum));
            v[i] += x;
            sum -= x;
        }
        
        for(int x: v){
            cout<<x<<" ";
        }
        cout<<endl;

    }
    //make s from 1,2,3,4,5,6 using them n times with one value being s-r;
}