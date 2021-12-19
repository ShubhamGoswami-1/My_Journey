class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count1=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                ++count1;
                //counting the duplicate elements 
            }
            else{
                nums[i-count1]=nums[i];
                // and whenever we get a unique element we go back to the current index - no. of duplicate elements till now .
            }
        }
        return nums.size()-count1;// size - total number of duplicate elements .
    }
};
