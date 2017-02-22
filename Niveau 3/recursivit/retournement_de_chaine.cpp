#include <iostream>

using namespace std;
void retourne(string stri,int d){
   if(d==0){
    cout<<stri[0]<<"\n";
   }else{
    cout<<stri[d];
    retourne(stri,d-1);
   }
}
int main()
{
    string str;
    getline(cin,str);
    int s=(str.size())-1;
    retourne(str,s);
    return 0;
}
