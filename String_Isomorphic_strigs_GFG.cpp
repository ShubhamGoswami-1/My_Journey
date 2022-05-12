#include<bits/stdc++.h>
using namespace std;

bool isIsomorphic(string &a,string &b){ // Time : O(n)
    bool marked[256]={false};
    int map[256];
    memset(map,-1,sizeof(map));
    for(int i=0;i<a.length();i++){
        if(map[a[i]]==-1){
            if(marked[b[i]]==true){
                return false;
            }
            marked[b[i]]=true;
            map[a[i]]=b[i];
        }
        else if(map[a[i]]!=b[i]){
            return false;
        }
    }
    return true;
}

bool isIsomorphic(string &a,string &b){ // Time : O(n)
    if(a.length()!=b.length()){
        return false;
    }
    int A[26]={0},B[26]={0};
    for(int i=0;i<a.length();i++){
        A[a[i] - 'a']++;
        B[b[i] - 'a']++;
    }
    for(int i=0;i<a.length();i++){
        if(A[a[i] - 'a'] != B[b[i] - 'a']){
            return false;
        }
    }
    return true;
}
int main()
{
    string a,b;
    cin>>a>>b;
    cout<<isIsomorphic(a,b);
    return 0;
}
/*

abca
xyzx
1

aab
xyx
0

*/