#include <iostream>
#define LIMITS 1000
#define ii pair<int,int>
using namespace std;
int l,c,color=0;
char M[LIMITS][LIMITS];
ii dir[4]={ {1,0},{0,1},{-1,0},{0,-1} };

void compute(int i,int j)
{
    if(M[i][j]=='.'){
       M[i][j]='m';
    }
    for(int x=0;x<4;x++){
        int t1=i+dir[x].first;
        int t2=j+dir[x].second;
        if((M[t1][t2]== '.') ){
            compute(t1,t2);
        }
    }


}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin>>l>>c;
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            cin>>M[i][j];
        }
    }
      for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            if(M[i][j]=='.')
            {
                compute(i,j);
                color++;
            }
        }
    }
    cout<<color<<"\n";
    return 0;
}
