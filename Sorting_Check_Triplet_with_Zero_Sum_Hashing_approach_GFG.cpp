#include<bits/stdc++.h>
using namespace std;
void Solve(vector<int>&array,int a,int b){
    int left=0,mid=0,right=array.size()-1;
        while(mid<=right){
            if(array[mid]<a){
                swap(array[mid],array[left]);
                left++;mid++;
            }
            else if(array[mid]>=a && array[mid]<=b){
                mid++;
            }
            else if(array[mid]>b){
                swap(array[mid],array[right]);
                right--;
            }
        }
}
int main()
{
    int n,i,a,b;
    cin>>n;
    vector<int>array(n);
    unordered_map<int,int> ump;
        
        for(int i=0;i<n;i++){
            cin>>array[i];
            ump[array[i]]++;
        }
        
    cin>>a>>b;
    
        vector<int> original = array;

        int k1=0,k2=0,k3=0;
        int kk1=0;int kk2=0;int kk3=0;
        
        for(int i=0; i<n; i++)
        {
            if(original[i]>b)
                k3++;
            else if(original[i]<=b and original[i]>=a)
                k2++;
            else if(original[i]<b)
                k1++;
        }
        
    Solve(array,a,b);
    
        for(int i=0;i<k1;i++)
        {
            if(array[i]<b)
            kk1++;
        }
        
        for(int i=k1;i<k1+k2;i++)
        {
            if(array[i]<=b and array[i]>=a)
            kk2++;
            
        }
        
        for(int i=k1+k2;i<k1+k2+k3;i++)
        {
            if(array[i]>b)
            kk3++;
        }
        bool ok = 0;
        if(k1==kk1 and k2 ==kk2 and k3 == kk3)
            ok = 1;
        
        for(int i=0;i<array.size();i++)
            ump[array[i]]--;
        
        for(int i=0;i<array.size();i++)
            if(ump[array[i]]!=0)
                ok=0;
        
        if(ok)
            cout<<1<<endl;
        else
            cout<<0<<endl;

        for(auto i : array){
            cout<<i<<" ";
        }
    return 0;
}