class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagrams = defaultdict(list)
        for string in strs:
            anagrams[''.join(sorted(string))].append(string)
        
        sol = []
        for _, value in anagrams.items():
            sol.append(value)
        
        return sol