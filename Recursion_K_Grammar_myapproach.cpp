#include<bits/stdc++.h>
using namespace std;
int Grammar(int n,int k){
    if(n<=1){ //Base Condition
        //cout<<"Return  n = "<<n<<" ; k = "<<k<<" R = 0 \n";
        return 0;
    }
    //cout<<"calling n = "<<n-1<<" ; k = "<<k<<"\n";
    int val;
    if(k%2==0){
        val = Grammar(n-1,k/2);
    }
    else{
        val = Grammar(n-1,(k+1)/2);
    }
    if(k%2==0){
        if(val==1){
           //cout<<"Return  n = "<<n<<" ; k = "<<k<<" R = 0 \n";
           return 0;
        } 
        else{
            //cout<<"Return  n = "<<n<<" ; k = "<<k<<" R = 1 \n";
            return 1;
        }
    }
    else{
        if(val==1){
            //cout<<"Return  n = "<<n<<" ; k = "<<k<<" R = 1 \n";
            return 1;
        } 
        else{
            //cout<<"Return  n = "<<n<<" ; k = "<<k<<" R = 0 \n";
            return 0;
        }
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    //cout<<"calling n = "<<n<<" ; k = "<<k<<"\n";
    cout<<Grammar(n,k);
    return 0;
}