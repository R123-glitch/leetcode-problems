class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int no=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1]){
               no=nums[i];
               break;
            }
        }
        return no;
    }
};