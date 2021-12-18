#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> buildArray(vector<int>& nums) {
        int i,n=nums.size();
        for(i=0;i<nums.size();i++){
            nums[i]=nums[i]+(n*(nums[nums[i]]%n));
        }
        for(i=0;i<nums.size();i++){
            nums[i]/=n;
        }
        return nums;
    }
    /*
for(int i=0;i<n;i++){
     nums[i]=nums[i]+(n*(nums[nums[i]]%n));
}
for(int i=0;i<n;i++){
     nums[i]/=n;
}

 why to do (nums[nums[i]%n]) ?
 nums[nums[i]]% n gives nums[nums[i]] 
*/
    return 0;
}