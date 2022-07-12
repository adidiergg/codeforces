
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,s;
    string c;
    
    set<char> solve;
    int sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        cin>>c;
        vector<char> contest(c.begin(),c.end());
        for(auto it:contest){
            solve.insert(it);
        }

        
        for(auto it:solve){
            sum+=count(contest.begin(),contest.end(),it);
            sum++;
        }
        
        
        contest.clear();
        solve.clear();
        cout<<sum<<endl;
        sum=0;
        /*
        if(s=="YES"){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        */
        
    }

    return 0;
}