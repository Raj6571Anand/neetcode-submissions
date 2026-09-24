class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> presum;
        presum[0]=1;
        int count=0;
        int diff;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            diff=sum-k;
            if(presum.count(diff)){
                count+=presum[diff];
            }
            
            presum[sum]++;


        }
        return count;

        
    }
};