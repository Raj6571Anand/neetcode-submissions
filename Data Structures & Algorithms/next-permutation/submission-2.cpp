class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot=-1;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                pivot=i-1;
                break;
            }
        }
        if(pivot==-1){
                reverse(nums.begin(), nums.end());
                
            }
            else{
            int swa=pivot;
            int diff=INT_MAX;
            for(int i=pivot+1;i<nums.size();i++){
                if(nums[i]>nums[pivot]){
                    if(diff>nums[i]-nums[pivot]){
                    diff=nums[i]-nums[pivot];
                    swa=i;
                    }
                    
                    }
                    
                                    
            }
            swap(nums[pivot], nums[swa]);
            reverse(nums.begin() + pivot+1, nums.end());
            }

            


            
        
        
    }
};