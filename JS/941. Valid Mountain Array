/**
 * @param {number[]} arr
 * @return {boolean}
 */
var validMountainArray = function(arr) {
    let n=arr.length, i=1;
    if(n<3 || arr[0]>arr[1]) return false;
    
    for(i; i<n; i++) {
        if(arr[i-1]==arr[i]) return false;
        else if(arr[i-1]>arr[i]) break;
    }
    
    if(i==n) return false;
    
    for(i; i<n; i++) {
        if(arr[i-1]==arr[i] || arr[i-1]<arr[i]) return false;
    }
    return true;
};
