/*
Searching_and_Array_Count_Elements_more_than_N/K_times_GFG.cpp
Its an extended problem of Boyer Moore's Majority of N/2 , N/3 as N/K
Time - O(NK)
Space - O(k-1)
*/
#include<bits/stdc++.h>
using namespace std;
//vector<pair<int,int> > Solve(vector<int>v,int k){
int Solve(vector<int>v,int k){
    int i,j,z,l;
    vector<pair<int,int> >temp;
    for(i=0;i<k-1;i++){
        temp.push_back(make_pair(0,0));
    }
    for(i=0;i<v.size();i++){
        for(j=0;j<k-1;j++){
            if(temp[j].first==v[i]){
                ++temp[j].second;
                break;
            }
        }
        if(j==k-1){
            for(l=0;l<k-1;l++){
                if(temp[l].second==0){
                    temp[l].second=1;
                    temp[l].first=v[i];
                    break;
                }
            }
            if(l==k-1){
                for(z=0;z<k-1;z++){
                    temp[z].second--;
                }
            }
        }
    }
    int count1=0;
    for(i=0;i<temp.size();i++){
        int count2=0;
        for(j=0;j<v.size();j++){
            if(v[j]==temp[i].first){
                ++count2;
            }
        }
        if(count2>(v.size()/k)){
            ++count1;
        }
        count2=0;
    }
    return count1;
    //return temp;
}
int main()
{
    int n,i,k;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>k;
    cout<<Solve(v,k);
  /*
    vector<pair<int,int> >q=Solve(v,k);
    for(auto i : q){
        cout<<i.first<<" "<<i.second<<"\n";
    }
  */
    return 0;
}