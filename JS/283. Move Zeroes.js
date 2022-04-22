/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function(nums) {
    let j=0, n=nums.length;
    
    for(j; j<n; j++) if(!nums[j]) break;
    
    for(let i=j+1; i<n; i++) {
        if(nums[i]) {
            nums[j++] = nums[i];
            nums[i] = 0;
        }
    }
};
