
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t,n,v,aux;
    string s;
    vector<int> code;
    
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        for(int x=0;x<n;x++){
            cin>>v;
            code.push_back(v);
        }

        for(auto it:code){
            cin>>v>>s;
            aux=it;
            for(auto m:s){
                if(m=='D'){
                    aux++;
                }else{
                    aux--;
                }

                if(aux==10){
                    aux=0;
                }

                if(aux==-1){
                    aux=9;
                }


            }
            cout<<aux<<" ";
            
        }
        cout<<endl;
        code.clear();
        
        
        
        
    }

    return 0;
}