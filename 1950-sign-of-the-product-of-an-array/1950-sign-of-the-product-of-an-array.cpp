class Solution {
public:
    int arraySign(vector<int>& nums) {
        int product;
        int sign=1;
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]==0){
                return 0;
            }
            else if(nums[i]<0){
                sign=sign*-1;
            }
            
        
        
        }
        return sign;
    }
};