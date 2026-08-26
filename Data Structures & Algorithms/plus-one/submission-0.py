class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        n=0
        o=[]
        for i in range(len(digits)):
            n=n*10+digits[i]
        ans=n+1
        dig=[int(c) for c in str(ans)]
        return dig
    

    