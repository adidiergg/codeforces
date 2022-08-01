
#include <bits/stdc++.h>
using namespace std;

int main(){

    int c,n,m,h,h0,m0,h1,m1,rm,rh;
    
    cin>>c;

    for(int i=0;i<c;i++){
        cin>>n>>h0>>m0;
        set<pair<int,int>, greater<pair<int,int>> > alarm;
        for(int x=0;x<n;x++){
            cin>>h1>>m1;
            
            if(h0>h1){
                h = (h1-h0+23);
            }else{
                h = (h1-(h0+1));
            }

            if(m0>m1){
                m = ((m1+60)-m0);
            }else{
                m = (m1-(m0));
            }
            alarm.insert(make_pair(h,m));
            
        }
        /*
        for(auto it = alarm.begin(); it != alarm.end(); ++it){
            rh = *it.first;
            rm = *it.second;
        }
        */
        for(auto it:alarm){
            rh = it.first;
            rm = it.second;
        }
        if(rh==-1 && rm==0){
            cout<<0<<" "<<0<<endl;
        }else{
            cout<<rh<<" "<<rm<<endl;
        }
        
        //auto it = alarm.end();
        /*
        
        */
        
        
        
    }

    /*
    for(int i=0;i<n;i++){
        cin>>s;
        transform(s.begin(),s.end(),s.begin(),::toupper);
        
        
        
    }
    */

    return 0;
}