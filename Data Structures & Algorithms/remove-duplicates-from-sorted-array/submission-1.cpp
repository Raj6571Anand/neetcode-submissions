class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set <int> uni;
        for(auto it:nums){
            uni.insert(it);
        }
        nums.clear();
        for(auto it:uni){
            nums.push_back(it);
        }
        
        return nums.size();
        
    }
};