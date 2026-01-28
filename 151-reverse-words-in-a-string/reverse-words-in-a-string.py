class Solution:
    def reverseWords(self, s: str) -> str:
        res = []
        idx = len(s) - 1

        while idx >= 0:
            while s[idx] == " " and idx >= 0:
                idx -= 1
            
            if idx < 0:
                break
            
            j = idx

            while j >= 0 and s[j] != " ":
                j -= 1
            
            res.append(s[j+1:idx + 1]) #check string
            idx = j

        

        return " ".join(res)