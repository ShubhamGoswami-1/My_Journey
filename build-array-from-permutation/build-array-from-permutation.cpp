class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>v;
        int i=0;
        for(i=0;i<nums.size();i++){
            v.push_back(nums[nums[i]]);
        }
        return v;
    }
};