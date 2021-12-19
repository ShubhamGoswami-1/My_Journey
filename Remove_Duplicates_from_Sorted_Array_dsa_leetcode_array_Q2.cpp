/*
https://leetcode.com/problems/remove-duplicates-from-sorted-array/
dsa array question 2 
Remove Duplicates from Sorted Array
*/

#include<bits/stdc++.h>
using namespace std;
/*
* First approach is to use map by updating the frequencies of the unique eleents 
  and then just traversing the map keys (i.e unique elements).

* second approach is to use vector erase function (stl) . 
  its also take cares about the size (i.e resisizing).

* Third approach is using O(n^2) 

*/

/*
 *************************************************************
 *                                                           *
 *     This solution works with removing all the duplicate   *
 *     values from a Sorted  array                           *  
 *                                                           *
 *************************************************************
 */

int removeDuplicates(vector<int>& nums) {
    int count1 = 0;
    for(int i = 1; i < nums.size(); i++){
        if(nums[i] == nums[i-1]) count1++;
        else nums[i-count1] = nums[i];
    }
    return nums.size()-count1;
}
int main()
{
    int n,i,temp;
    vector<int>nums;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>temp;
        nums.push_back(temp);
    }
    int res = removeDuplicates(nums);
    for(int j=0;j<nums.size();j++){
        cout<<nums[j]<<" ";
    }
    cout<<"\n"<<res;
    return 0;
}