class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();

        vector<int>prefix(n,1);
        vector<int>suffix(n,1);
        int left=1,right=n-2;
        while(left<n && right>=0){
            prefix[left]=prefix[left-1]*nums[left-1];
            left++;
            suffix[right]=suffix[right+1]*nums[right+1];
            right--;
        }
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            ans[i]=prefix[i]*suffix[i];
        }
        return ans;
    }
};
