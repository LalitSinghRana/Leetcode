/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxConsecutiveOnes = function(nums) {
    let ans = 0, cnt=0;
    for(let i=0; i<nums.length; i++) {
        if(nums[i] === 0) {
            if(cnt > ans) ans = cnt;
            cnt=0;
        } else cnt++;
    }
    if(cnt > ans) ans = cnt;
    return ans;
};
