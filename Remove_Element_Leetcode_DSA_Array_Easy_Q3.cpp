#include<bits/stdc++.h>
using namespace std;
void Print_Array(vector<int>v){
    int i =0 ;
    for(i=0;i<v.size();i++){
        cout<<v[i]<<" "; 
    }
    cout<<"\n";
}
int removeElement(vector<int>& nums, int val) {
    /*
    this approach will only work when relative order doesnt matter 
    because i will first sort the array and then its easy to count the 
    occurences and also to shift all the other elements in the place
    of all vals ,coz after sorting i will get all the vals in one group
    This means i will return the array in sorted manner .
    
    ****  This is O(nlogn) solution ... My Bad :(  ****

    int count1=0,pos=0,i;
    for(i=0;i<nums.size();i++){
        if(nums[i]==val){
            ++count1;
        }
    }
    sort(nums.begin(),nums.end());
    for(i=0;i<nums.size();i++){
        if(nums[i]==val){
            pos=i;
            break;
        }
    }
    for(i=pos+count1;i<nums.size();i++){
        nums[pos++]=nums[i];
    }
    return nums.size()-count1;
    */

 //****  This is O(n) Solution  :)  ****  

/*
 *************************************************************
 *                                                           *
 *  This solution works with removing all the occurences of  *
 *    a particular value from a Sorted/Unsorted array        *  
 *                                                           *
 *************************************************************
 */
   int i,count1=0;
   for(i=0;i<nums.size();i++){
       if(nums[i]==val){
           ++count1;
       }
       else{
           nums[i-count1]=nums[i];
       }
   }
   return nums.size()-count1;
}
int main()
{
    int n,i,temp,val;
    cin>>n;
    vector<int>nums;
    for(i=0;i<n;i++){
        cin>>temp;
        nums.push_back(temp);
    }
    cin>>val;
    int res = removeElement(nums,val);
    cout<<res<<"\n";
    Print_Array(nums);
    return 0;
}