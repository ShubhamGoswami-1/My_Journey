#include<bits/stdc++.h>
using namespace std;
void Cycle_Distinct(vector<int> &v,int &swaps){
    for(int i=0;i<v.size();i++){
        int item=v[i],pos=i;
        for(int j=i+1;j<v.size();j++){
            if(v[j]<item){
                pos++;
            }
        }
        /*
        if(pos==i){
            continue;
        }
        while(item==v[pos]){
            pos++;
        }*/
        swap(item,v[pos]);
        swaps++;
        while(pos!=i){
            pos=i;
            for(int j=pos;j<v.size();j++){
                if(item>v[j]){
                    ++pos;
                }
            }
            /*
            if(pos==i){
                continue;
            }
            
            while(v[pos]==item){
                ++pos;
            }
            */
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
    Cycle_Distinct(v,swaps);
    for(auto i : v){
        cout<<i<<" ";
    }
    return 0;
}
/*
8
1 8 3 9 10 10 2 4
*/