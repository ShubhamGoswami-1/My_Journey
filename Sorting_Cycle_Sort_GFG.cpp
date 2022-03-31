#include<bits/stdc++.h>
using namespace std;
void Cycle_Sort(vector<int> &v,int &swaps){
    for(int cs=0;cs<v.size()-1;cs++){
        int item=v[cs],pos=cs;
        for(int j=cs+1;j<v.size();j++){
            if(v[j]<item){
                pos++;
            }
        }
        
        if(pos==cs){
            continue;
        }
        while(item==v[pos]){
            pos++;
        }
        swap(item,v[pos]);
        swaps++;
        while(pos!=cs){
            pos=cs;
            for(int j=pos+1;j<v.size();j++){
                if(item>v[j]){
                    ++pos;
                }
            }  
            while(v[pos]==item){
                ++pos;
            }
            swap(v[pos],item);
            swaps++;
        }
    }
}
int main()
{
    int n,i,swaps=0;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    Cycle_Sort(v,swaps);
    for(auto i : v){
        cout<<i<<" ";
    }
    return 0;
}
/*
8
1 8 3 9 10 10 2 4
10
1 8 3 9 8 1 10 4 2 10
*/