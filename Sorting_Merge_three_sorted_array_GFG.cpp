#include<bits/stdc++.h>
using namespace std;
vector<int> Solve(vector<int>N,vector<int>M,vector<int>P){
    int i=0,j=0,k=0;
    vector<int>res;
    while(i<N.size() && j<M.size() && k<P.size()){
        if(N[i]<=M[j]){
            if(N[i]<=P[k]){
                res.push_back(N[i]);
                i++;
            }
            else{
                res.push_back(P[k]);
                k++;
            }
        }
        else{
            if(M[j]<=P[k]){
                res.push_back(M[j]);
                j++;
            }
            else{
                res.push_back(P[k]);
                k++;
            }
        }
    }
    if(i==N.size()){
        while(j<M.size() && k<P.size()){
            if(M[j]<=P[k]){
                res.push_back(M[j]);
                ++j;
            }
            else{
                res.push_back(P[k]);
                k++;
            }
        }
         while(j<M.size()){
        res.push_back(M[j]);
        j++;
    }
    while(k<P.size()){
        res.push_back(P[k]);
        k++;
    }
    }
    else if(j==M.size()){
        while(i<N.size() && k<P.size()){
            if(N[i]<=P[k]){
                res.push_back(N[i]);
                ++i;
            }
            else{
                res.push_back(P[k]);
                k++;
            }
        }
        while(i<N.size()){
        res.push_back(N[i]);
        i++;
    }
    while(k<P.size()){
        res.push_back(P[k]);
        k++;
    }
    }
    else{
        while(i<N.size() && j<M.size()){
            if(N[i]<=M[j]){
                res.push_back(N[i]);
                ++i;
            }
            else{
                res.push_back(M[j]);
                ++j;
            }
        }
        while(i<N.size()){
        res.push_back(N[i]);
        i++;
    }
    while(j<M.size()){
        res.push_back(M[j]);
        j++;
    }
    }
    return res;
}
int main()
{
    int n,m,p,i;
    cin>>n>>m>>p;
    vector<int>N(n),M(m),P(p);
    for(i=0;i<n;i++){
        cin>>N[i];
    }
    for(i=0;i<m;i++){
        cin>>M[i];
    }
    for(i=0;i<p;i++){
        cin>>P[i];
    }
    vector<int>res=Solve(N,M,P);
    for(auto i : res){
        cout<<i<<" ";
    }
    return 0;
}
/*

*/