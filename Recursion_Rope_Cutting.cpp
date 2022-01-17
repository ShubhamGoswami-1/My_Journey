//Rope Cutting Problem using REcursion
#include<bits/stdc++.h>
using namespace std;
int Rope_Cutting(int N,int a,int b,int c){
    if(N==0){return 0;}
    if(N<0){return -1;}
    int res=max(Rope_Cutting(N-a,a,b,c),max(Rope_Cutting(N-b,a,b,c),Rope_Cutting(N-c,a,b,c)));
    if(res==-1){
        return -1;
    }
    return res+1;
}
int main()
{
    int N,a,b,c;
    cin>>N>>a>>b>>c;
    cout<<Rope_Cutting(N,a,b,c);
    return 0;
}