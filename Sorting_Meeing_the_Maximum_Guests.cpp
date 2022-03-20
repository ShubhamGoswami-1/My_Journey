#include<bits/stdc++.h>
using namespace std;
int Solve(vector<pair<int,int> >v){
    sort(v.begin(),v.end());
    pair<int,int>temp;
    temp=make_pair(v[0].first,v[0].second);
    int res_temp=1,max_temp=1;
    for(int i=1;i<v.size();i++){
        if(temp.second>=v[i].first){
            temp=make_pair(temp.first,max(temp.second,v[i].second));
            res_temp++;
            //cout<<temp.first<<" "<<temp.second<<"\n";
        }
        else{
            max_temp=max(max_temp,res_temp);
            res_temp=1;
            temp=make_pair(v[i].first,v[i].second);
        }
    }
    max_temp=max(max_temp,res_temp);
    return max_temp;
}
int main()
{
    int n,i;
    cin>>n;
    vector<pair<int,int> >v(n);
    for(i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    cout<<Solve(v);
    return 0;
}
/*
2
900 1000
940 1030
2

4
800 840 
700 820 
600 830 
500 530 
3

6
900 910 
940 1200
950 1120
1100 1130
1500 1900
1800 2000
3

3
900 1000
600 800
700 730
*/