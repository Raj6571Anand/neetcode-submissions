class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        ans=[]
        map={}
        for it in range (len(nums)):
            map[nums[it]]=it
        for i in range (len(nums)):
            needed=target-nums[i]
            if needed in map:
                    if map[needed]!=i:
                        ans.append(i)
                        ans.append(map[needed])
                        return ans
            
     
        
        
        