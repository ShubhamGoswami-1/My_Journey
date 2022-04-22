#include<bits/stdc++.h>
using namespace std;
/*
Recursive aaproach takes Time : O(n+m) and Space : O(n+m) for storing  
rucursive call stacks 
*/
bool Solve(string &s1,string &s2,int sz1,int sz2){
    if(sz2==0){
        return true;
    }
    if(sz1==0){
        return false;
    }
    if(s1[sz1-1]==s2[sz2-1]){
        return Solve(s1,s2,sz1-1,sz2-1);
    }
    else{
        return Solve(s1,s2,sz1-1,sz2);
    }
}

/*
Iterative approach Time : O(n+m) This will only if we give s2 larger tha s1 to check for subsequence
So we can modify here this case to bring it in Time :  O(n)
By adding a condition of if (s2.length()>s1.length()){return false;}
*/

bool Solve(string &s1,string &s2){
    int j=0,i=0;
    for(i=0;i<s1.length() && j<s2.length();i++){
        if(s1[i]==s2[j]){
            j++;
        }
    }
    return (j==s2.length());
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    //cout<<Solve(s1,s2);//For iterative call
    cout<<Solve(s1,s2,s1.length(),s2.length());//Recursive call
    return 0;
}
/*
geeksforgeeks
skfg
0

geeksforgeeks
fgks
1
*/