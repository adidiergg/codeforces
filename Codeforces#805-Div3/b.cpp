
#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    _
    int n;
    string v,aux;
    int count=0;
    set<char> m;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v;
        
        while(v.size()!=0){

        for(auto it:v){
            if(m.size()<3){
                m.insert(it);
            }else{
                break;
            }
            
        }
        
        for(auto it:v){
            if(m.count(it)!=0){
                continue;
            }else{
                m.clear();
                aux+=it;
            }
            
        }
        
        //cout<<m.size();
        m.clear();

        
        
        v=aux;
        aux="";
        count++;
        
        }
        cout<<count<<endl;
        count=0;

    }

    return 0;
}