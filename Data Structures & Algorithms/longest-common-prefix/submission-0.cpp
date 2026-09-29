class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res=strs[0];
        for(string s:strs){
            while(s.find(res)!=0){
                res.pop_back();
            }
        }





        return res;
        
    }
};