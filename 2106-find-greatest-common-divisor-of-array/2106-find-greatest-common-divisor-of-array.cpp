class Solution {
public:
    int findGCD(vector<int>& nums) {
        int gcd=1;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int mini=nums[0];
        int maxi=nums[n-1];
        while(mini!=0){
            int temp=maxi%mini;
            maxi=mini;
            mini=temp;
        }
       return maxi; 
    }
};