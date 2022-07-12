
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,v;
    int count;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v;
        cout<<fixed<<setprecision(0)<<v-pow(10,floor(log10(v)))<<endl;
        //cout<<v<<endl;
        //cout<<<<endl;

        
    }

    return 0;
}