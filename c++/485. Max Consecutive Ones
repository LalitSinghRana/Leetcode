class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0, cnt=0;
        for(int i=0; i<nums.size(); i++) {
            if(!nums[i]) {
                if(cnt > ans) ans = cnt;
                cnt = 0;
            }
            else cnt++;
        }
        if(cnt > ans) ans = cnt;
        return ans;
    }
};
