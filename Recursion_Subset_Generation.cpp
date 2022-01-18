#include<bits/stdc++.h>
using namespace std;
void Subset_Gen(string s,string ns,int levels){
    if(levels==s.length()){
        cout<<ns<<"\n";
        return ;// A strange point to be noted 
        // if i just comment the return; statement here ...the code doesnt gives output
        //but why ??? -> afterall , the function is void :-
        // if the if condition doesn't match it should immediately returns the function to its caller
        //??????????????????????????????????????????
    }
    Subset_Gen(s,ns,levels+1);
    Subset_Gen(s,ns+s[levels],levels+1);
}
int main()
{
    string s,ns;
    cin>>s;
    Subset_Gen(s,ns,0);
    return 0;
}