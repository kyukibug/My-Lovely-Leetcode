class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        strs = sorted(strs)
        count = 0
        lcp = ""
        while count < min(len(strs[0]), len(strs[-1])) and strs[0][count] == strs[-1][count]:
            lcp += strs[0][count]
            count += 1
        
        return lcp
        