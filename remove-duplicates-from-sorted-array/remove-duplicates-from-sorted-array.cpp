class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count1=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                ++count1;
            }
            else{
                nums[i-count1]=nums[i];
            }
        }
        return nums.size()-count1;
    }
};