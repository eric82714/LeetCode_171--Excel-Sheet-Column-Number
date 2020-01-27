class Solution:
    def titleToNumber(self, s: str) -> int:
        num = 0
        
        for i in range(len(s)):
            num = num + (ord(s[i]) - ord('A') + 1) * pow(26, len(s)-i-1) 
            
        return num
