class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0, n=nums.size();
        for(j; j<n; j++) if(!nums[j]) break;
        
        for(int i=j+1; i<n; i++) {
            if(nums[i]) {
                nums[j++] = nums[i];
                nums[i]=0;
            }
        }
    }
};
