#include<bits/stdc++.h>
using namespace std;
void Heapify(vector<int> &v,int sz,int i){
    int left=i*2+1,right=i*2+2,largest=i;
    if(left<sz && v[largest]<v[left]){
        largest=left;
    }
    if(right<sz && v[largest]<v[right]){
        largest=right;
    }
    if(largest != i){
        swap(v[largest],v[i]);
        Heapify(v,sz,largest);
    }
}
void BuildHeap(vector<int> &v){
    for(int i=(v.size()-2)/2;i>=0;i--){
        Heapify(v,v.size(),i);
    }
}
void HeapSort(vector<int> &v){
    BuildHeap(v);
    for(int i=v.size()-1;i>=1;i--){
        swap(v[0],v[i]);
        Heapify(v,i,0);
    }
}
int main()
{
    int n,i;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    HeapSort(v);
    for(auto i : v){
        cout<<i<<" ";
    }
    return 0;
}