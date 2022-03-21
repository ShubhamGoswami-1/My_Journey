#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>arrival,vector<int>departure){
    int res=1,i=1,j=0,curr=1;
    sort(arrival.begin(),arrival.end());
    sort(departure.begin(),departure.end());
    while(i<arrival.size() && j<departure.size()){
        if(arrival[i]<=departure[j]){
            curr++;i++;
        }
        else{
            curr--;j++;
        }
        res=max(res,curr);
    }
    return res;
}
int main()
{
    int n,i;
    cin>>n;
    vector<int>arrival(n);
    vector<int>departure(n);
    for(int i=0;i<n;i++){
        cin>>arrival[i];
    }
    for(int i=0;i<n;i++){
        cin>>departure[i];
    }
    cout<<Solve(arrival,departure);   
    return 0;
}