class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        sort(in.begin(), in.end());
    
     vector<vector<int>> res;
        vector<int> current = in[0];

        for (int i = 1; i < in.size(); i++) {
            if (current[1] >= in[i][0]) {
                current[1] = max(current[1], in[i][1]);
            } else {
                res.push_back(current);
                current = in[i];
            }
        }

        res.push_back(current);

        return res;
        


        
    }
};
