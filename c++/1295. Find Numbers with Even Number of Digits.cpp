class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i=0; i<nums.size(); i++) {
            int l=0, n=nums[i];
            // while(n) {
            //     l++;
            //     n /= 10;
            // }
            // if(l%2==0) ans++;
            if((n>=10 && n<100) || (n>=1000 && n<10000) || n==100000) ans++;
        }
        return ans;
    }
};
