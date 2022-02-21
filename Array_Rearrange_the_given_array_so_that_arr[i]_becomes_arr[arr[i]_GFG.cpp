/*
Let's assume an element is a and another element is b, 
both the elements are less than n. 
So if an element a is incremented by b*n.
So the element becomes a + b*n
so when a + b*n is divided by n then the value is b 
and a + b*n % n is a.
*/
#include<bits/stdc++.h>
using namespace std;
void Solve(vector<int> &v){
    int i,max1=v.size();
    for(i=0;i<v.size();i++){
        v[i]=v[i]+(v[v[i]]%max1)*max1;
    }
    for(i=0;i<v.size();i++){
        v[i]/=max1;
    }
    return ;
}
int main()
{
    int n,i;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    Solve(v);
    for(auto i : v){
        cout<<i<<" ";
    }
    return 0;
}