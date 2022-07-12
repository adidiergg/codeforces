
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,e,q,v,a,b;
    int count;
    bool flag=false,flagA=false,flagB=false;
    vector<int> station;
    vector<pair<int,int>> route;
    vector<int>::iterator p,p1;
    cin>>n;
    for(int i=0;i<n;i++){
        //cin>>v;
        cin>>e>>q;
        for(int j=0;j<e;j++){
            cin>>v;
            station.push_back(v);
        }

        for(int k=0;k<q;k++){
            cin>>a>>b;
            route.push_back(make_pair(a,b));
        }

        for(auto it:route){


            for(auto x=station.begin();x != station.end(); ++x){

                if(flagA){

                    if(*x==it.second){
                        flagB=true;
                        break;
                    }

                    continue;
                }


                if(*x==it.first){
                    flagA=true;
                    continue;
                }
            }

            if(flagA && flagB){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }

            flagA=false;
            flagB=false;
            /*
            p = find(station.begin(), station.end(), it.first);
            for(auto x=p;x != station.end(); ++x){
                if(*x==it.second){
                    flag=true;
                    break;
                }
            }

            if(flag){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
            */
            
            /*

            flag=false;
            p = find(station.begin(), station.end(), it.first);
            p1 = find(station.rbegin(), station.rend(), it.second);
            

            if(p!=station.end() && p1!=station.rend()){
                //cout << p - station.begin() << " " << p1 - station.begin() << endl;
                if( (p - station.begin()) < ( p1 - station.begin()) ){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }else{
                cout<<"NO"<<endl;
            }
            */
            
            
        }

       

        route.clear();
        station.clear();
        
    
    }

    return 0;
}

/*
YES  y
NO   n
NO   n
NO   y
YES  y
NO  n
NO  n
YES  y
YES  y
NO  n
NO  y

*/