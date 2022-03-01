#include<bits/stdc++.h>
using namespace std;
double Solve(vector<int>v1,vector<int>v2){
    int min1,max1,min2,max2,low=0,high=v1.size(),i1,i2;
    while(low<=high){
        i1=(low+high)/2;
        i2=(v1.size()+v2.size()+1)/2;
        i2-=i1;
        min1=(i1==v1.size())? INT_MAX : v1[i1];//i1 can't be n1 ever
        max1=(i1==0)? INT_MIN : v1[i1-1];
        min2=(i2==v2.size())? INT_MAX : v2[i2];//if n1=n2=1 then i2=1(impossible)
        max2=(i2==0)? INT_MIN : v2[i2-1];  
        if((max1<=min2) && (max2<=min1)){
            if((v1.size()+v2.size())%2==0){
                return (double)(max(max1,max2)+min(min1,min2))/2;
            }
            else{
                return (double)max(max1,max2);
            }
        }
        else if(max1>min2){
            high=i1-1;
        }
        else{
            low=i1+1;
        }
    }
    return -1;
}
int main()
{
    int n1,n2,i;
    cin>>n1;
    vector<int>v1(n1);
    for(i=0;i<n1;i++){
        cin>>v1[i];
    }
    cin>>n2;
    vector<int>v2(n2);
    for(i=0;i<n2;i++){
        cin>>v2[i];
    }
    if(n1<=n2){
        cout<<Solve(v1,v2);
    }
    else{
        cout<<Solve(v2,v1);
    }
    return 0;
}
/*
I/P:-
5
10 20 30 40 50 
9
5 15 25 27 28 55 65 75 85
O/P:-29
I/P:-
5
10 20 30 40 50 
5
5 15 25 35 45
O/P:-
27.5
I/P:-
6
1 2 3 4 5 6
5
10 20 30 40 50 
O/P:-
6.0
I/P:-
6
10 20 30 40 50 60 
5
1 2 3 4 5 
O/P:-
10.0
*/