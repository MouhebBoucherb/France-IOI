#include <iostream>

using namespace std;
void draw(char matrix[100][100],int xi,int yi, int xf,int yf,char color)
{
    for(int i=yi;i<=yf;i++){
        for(int j=xi;j<=xf;j++)
            matrix[i][j]=color;
    }

}
void print(char matrix[100][100],int c,int r){
      for(int i=0;i<r;i++){
        for(int j=0;j<=c;j++)
            cout<<matrix[i][j];
            cout<<"\n";
    }
}
int main()
{
    char matrix[100][100];
    int c,r;
    cin>>r>>c;
    int l;
    cin>>l;
    for(int i=0;i<r;++i){
        for(int j=0;j<c;j++){
            matrix[i][j]='.';
        }
    }
    int y,x,w,h;
    char co;
     for(int i=0;i<l;i++){
        cin>>y>>x>>w>>h;
        cin>>co;
        draw(matrix,x,y,h,w,co);
     }
     print(matrix,c,r);

    return 0;
}
