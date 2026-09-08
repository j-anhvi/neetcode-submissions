class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>>mp;
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            vector<int>freq(26,0);

            for(auto c:s){
                freq[c-'a']++;
            }
            mp[freq].push_back(s);
          
        }
        vector<vector<string>>ans;
        for(auto &p:mp){
            ans.push_back(p.second);
        }
        return ans;
    }
};
