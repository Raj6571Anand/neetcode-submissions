class Solution:
    def isPalindrome(self, s: str) -> bool:
        s=s.lower()
        str1=''.join(c for c in s if c.isalnum())
        srev=str1[::-1]
        if(str1==srev):
            return True
        else:
            return False

    
        