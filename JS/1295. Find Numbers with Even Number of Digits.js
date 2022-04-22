/**
 * @param {number[]} nums
 * @return {number}
 */
var findNumbers = function(nums) {
    let ans=0;
    nums.forEach(n => {
        if((n>=10 && n<100) || (n>=1000 && n<10000) || (n==100000)) ans++
    });
    return ans;
};
