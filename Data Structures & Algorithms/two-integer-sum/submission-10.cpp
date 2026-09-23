class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> r;
        int needed;
        for(int i=0;i<nums.size();i++){
            needed=target-nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]==needed){
                    r.push_back(i);
                    r.push_back(j);
                    return r;
                }
                

            }
        }
        return r;
        
    }
};
