class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int i=0;
        int j=nums.size()-1;
        int k=j;
        vector<int> ans(k+1,0);
        while(i<=j && k>=0)
        {
            if(i==j)
            {
                ans[k--]=nums[i]*nums[i];
                i++;
                j--;
            }
            
            else if(nums[i]<0)
            {
                if((-1*nums[i])<nums[j])
                {
                    ans[k--]=nums[j]*nums[j];
                    j--;
                }
                else
                {
                    ans[k--]=nums[i]*nums[i];
                    i++;
                }
            }
            else 
            {
                ans[k--]=nums[j]*nums[j];
                j--;
            }
        }
        return ans;
    }
};
