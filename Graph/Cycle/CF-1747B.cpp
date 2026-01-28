#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        cout<< (n&1 ? (n+1)/2 : n/2)<<endl;

        if(n&1){

            cout<<"0 4"<<endl;
            int range = n+1-2;
            for(int i = 3; i<n+1-2; i++){

                if(i%3 == 0)
                cout<<2*i<<" "<<2*i+4<<endl;
            }
        }
        else{
            cout<<"0 4"<<endl;
            int range = n+1-2;
            for(int i = 3; i<n+1-2; i++){

                if(i%3 == 0)
                cout<<2*i<<" "<<2*i+4<<endl;
            }
        }
    }
}