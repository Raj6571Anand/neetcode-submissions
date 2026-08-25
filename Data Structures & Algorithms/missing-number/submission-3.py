class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        ans=0
        # nums=sorted(nums)
        # for i in range(1,len(nums)):
        #     if nums[i]-nums[i-1]!=1:
        #         ans=(nums[i]-1)
        # return ans

        n=len(nums)
        target=(n*(n+1))//2
        value=0
        for i in range(len(nums)):
            value=value+nums[i]
        return target-value

        