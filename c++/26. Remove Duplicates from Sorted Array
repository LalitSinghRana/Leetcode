class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int j=0;
        
        for(int i=0; i<a.size(); i++) {
            if(a[i] != a[j]) a[++j] = a[i];
        }
        return j+1;
    }
};
