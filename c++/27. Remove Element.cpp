class Solution {
public:
    int removeElement(vector<int>& nums, int val) {        
        int i=0, j=nums.size()-1;
        if(j<0) return 0;
        
        while(i<j) {
            if(nums[i] != val) i++;
            else if(nums[j] == val) j--;
            else {
                nums[i] = nums[j];
                nums[j] = val;
                i++; j--;
            }
        }
        
        if(nums[i] == val) return i;
        return i+1;
    }
};
