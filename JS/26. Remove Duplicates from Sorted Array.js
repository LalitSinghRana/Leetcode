/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(a) {
    let j=0;
    for(let i=1; i<a.length; i++) {
        if(a[i] != a[j]) a[++j] = a[i];
    }
    return j+1;
};
