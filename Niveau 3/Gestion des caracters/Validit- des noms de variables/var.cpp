#include <bits/stdc++.h>
using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     int N;
     cin>>N;
     for(int i=0;i<N;i++){
        string var;
        cin>>var;
        bool y=true;
        if(isalpha(var[0]) || var[0]=='_'){
            for(int i=0;i<var.length();i++){
                if(isalpha(var[i])==false && isdigit(var[i])==false && var[i]!='_'){
                    cout<<"NO\n";
                    y=false;
                    break;
                }
            }
            if(y)
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
     }
}
