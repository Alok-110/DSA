#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,d,m,f,ans = 0;
    cin>>n>>d;

    vector<pair<int,int>> v;

    while(n--){

        cin>>m>>f;
        v.push_back({m,f});
    }

    sort(v.begin(), v.end());
    int maxFac = v[v.size()-1].second;

    int lo = 0, hi = 1e9, mid;

    while(lo<=hi){

        mid = lo + (hi-lo)/2;

        int factor = v[0].second;
        for(int i = 0; i<v.size()-1; i++){

            if(v[i+1].first - v[i].first < d)
            factor =  max(factor, factor+v[i+1].second);

            else
            factor = 0;

        }

        if(factor>maxFac)
        hi = mid-1;

        else{
            ans = mid;
            lo = mid+1;
        }
    }
    cout<<ans;
}