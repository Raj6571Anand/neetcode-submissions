class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> pool;

        for (int i = 0; i < strs.size(); i++) {
            string comps = strs[i];
            sort(comps.begin(), comps.end());

            pool[comps].push_back(strs[i]);
        }

        vector<vector<string>> res;

        for (auto it : pool) {
            res.push_back(it.second);
        }

        return res;
    }
};