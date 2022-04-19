class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> cnt;
        int c=0;
        for(int i=0; i<arr.size(); i++) {
            cnt.push_back(c);
            if(!arr[i]) c++;
        }
        
        vector<int> ans (arr.size(),0);
        for(int i=0; i<arr.size(); i++) {
            int j = i + cnt[i];
            if(j>= arr.size()) break;
            ans[j] = arr[i];
        }
        
        arr = ans;
    }
};
