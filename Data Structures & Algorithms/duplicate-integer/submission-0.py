class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        freq={}
        for it in nums:
            freq[it] = freq.get(it, 0) + 1
        for ot in freq:
            if freq[ot]>1:
                return True
        return False
        


        