/*
Sorting the vector of pair by comparator function defined
by comparing second value of pair 
(decreasing order of second val of pair)
*/
#include<bits/stdc++.h>
using namespace std;
bool myComp(pair<int,int> p1,pair<int,int> p2){
    return (p1.second>p2.second);
}
int main()
{
    int n,i,temp,temp1;
    cin>>n;
    vector<pair<int,int> >vp;
    for(i=0;i<n;i++){
        cin>>temp>>temp1;
        vp.push_back(make_pair(temp,temp1));
    }
    for(auto i : vp){
        cout<<i.first<<" "<<i.second<<"\n";
    }
    sort(vp.begin(),vp.end(),myComp);
    for(auto i : vp){
        cout<<i.first<<" "<<i.second<<"\n";
    }
    return 0;
}
/*
5 
1 5 
2 1 
3 9 
4 7
6 3
*/