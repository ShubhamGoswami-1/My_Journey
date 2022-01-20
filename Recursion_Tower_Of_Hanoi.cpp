#include<bits/stdc++.h>
using namespace std;
void Tower_of_BRAHMA(int n,char A, char B,char C){
    if(n==1){
        cout<<"Move 1 from "<<A<<" to "<<C<<"\n";
        return;
    }
    else{
        Tower_of_BRAHMA(n-1,A,C,B);
        cout<<"Move "<<n<<" from "<<A<<" to "<<C<<"\n";
        Tower_of_BRAHMA(n-1,B,A,C);
    }
}
int main()
{
    int n;
    char a='A',b='B',c='C';
    cin>>n;
    Tower_of_BRAHMA(n,a,b,c);
    return 0;
}