class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size(); 
        int num=arr[n-1];
        arr[n-1]=-1;
        for(int i=n-2; i>=0; i--) {
            int temp = arr[i];
            arr[i] = num;
            if(temp>num) num = temp;
        }
        return arr;
    }
};
