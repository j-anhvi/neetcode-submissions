class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>arr(128,-1);
       
        int count=0;
        int l=0;
        for(int r=0;r<s.size();r++){
            char c=s[r];
            if(arr[c]>=l){
                l=arr[c]+1;
            }
            arr[c]=r;
            count=max(count,r-l+1);
        }
        return count;
    }
};