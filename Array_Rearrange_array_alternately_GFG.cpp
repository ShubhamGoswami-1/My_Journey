#include<bits/stdc++.h>
using namespace std;
void Solve(vector<int> &v){
    int max1=v[v.size()-1]+1,j=0,k=v.size()-1;
    for(int i=0;i<v.size();i++){
        int min_val=v[j],max_val=v[k];
        if(i%2==0){
            v[i]=v[i]+(max_val%max1)*max1;
            k--;
        }
        else{
            v[i]=v[i]+(min_val%max1)*max1;
            j++;
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]/max1<<" ";
    }
    cout<<"\n";
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
    return 0;
}