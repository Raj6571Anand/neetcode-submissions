class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # s1=sorted(s)
        # s2=sorted(t)
        freq={}
        for it in s:
            freq[it]=freq.get(it,0)+1
        for ot in t:
            freq[ot]=freq.get(ot,0)-1
        for i in freq:
            if(freq[i] !=0):
                return False
        return True


        

        # if(s1==s2):
        #     return True
        # else:
        #     return False
        
        