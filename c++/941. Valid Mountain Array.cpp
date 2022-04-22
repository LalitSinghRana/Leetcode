class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size(), i=1;
        if(n<3 || arr[1]<=arr[0]) return false;
        
        for(i; i<n; i++) {
            if(arr[i-1] == arr[i]) return false;
            else if (arr[i-1]>arr[i]) break;
        }
        
        if(i>=n) return false;
        
        for(i; i<n; i++) {
            if(arr[i-1]==arr[i] || arr[i-1]<arr[i]) return false;
        }
        return true;
    }
};
