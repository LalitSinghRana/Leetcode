/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortArrayByParity = function(nums) {
    let n = nums.length;
    let i=0, j=n-1;
    
    while(i<n) {
        if(nums[i]%2 === 0) i++;
        else if(nums[j]%2 === 1) j--;
        else {
            let temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++; j--;
        }
    }
    return nums;
};
