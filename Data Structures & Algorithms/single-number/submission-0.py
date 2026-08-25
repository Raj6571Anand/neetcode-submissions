class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        mp={}
        ans=0
        for i in range(len(nums)):
            mp[nums[i]] = mp.get(nums[i], 0) + 1
        for key in mp:
            if mp[key]<2:
                ans=key
        return ans
                
                


        

        