#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> > Solve(vector<pair<int,int> >v){
    sort(v.begin(),v.end());
    vector<pair<int,int> >res;
    pair<int,int>temp;
    temp=make_pair(v[0].first,v[0].second);
    for(int i=1;i<v.size();i++){
        if(temp.second>=v[i].first){
            temp=make_pair(temp.first,max(temp.second,v[i].second));
            //cout<<temp.first<<" "<<temp.second<<"\n";
        }
        else{
            res.push_back(temp);
            temp=make_pair(v[i].first,v[i].second);
        }
    }
    res.push_back(temp);
    return res;
}
int main()
{
    int n,i;
    cin>>n;
    vector<pair<int,int> >v(n);
    for(i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    vector<pair<int,int> >res=Solve(v);
    for(auto i : res){
        cout<<i.first<<" "<<i.second<<"\n";
    }
    return 0;
}
/*
5
7 9
6 10
4 5
1 3
2 4

4
1 3 
2 4 
5 7
6 8

5
1 3 
2 10 
4 6
10 13
13 15
*/