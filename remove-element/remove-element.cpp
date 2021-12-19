class Solution {
public:
    /*
    // its an O(nlogn) solution ....m looking for O(n)... Is it Possible ?
    int removeElement(vector<int>& nums, int val) {
        /*
        this approach will only work when relative order doesnt matter 
        because i will first sort the array and then its easy to count the 
        occurences and also to shift all the other elements in the place
        of all vals ,coz after sorting i will get all the vals in one group
        This means i will return the array in sorted manner .
        */
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
    }   
    */
    // its an O(n) solution ....its Possible ! :)
    int removeElement(vector<int>& nums, int val) {
        int count1=0,i;
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
};
