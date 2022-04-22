/**
 * @param {number[]} arr
 * @return {number[]}
 */
var replaceElements = function(arr) {
    let n = arr.length;
    let num = arr[n-1];
    arr[n-1] = -1;
    
    for(let i=n-2; i>=0; i--) {
        let temp = arr[i];
        arr[i] = num;
        if(temp > num) num = temp;
    }
    
    return arr;
};
