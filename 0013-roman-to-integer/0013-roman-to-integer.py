class Solution:
    def romanToInt(self, s: str) -> int:
        myMap = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000,
                }
        
        # last symbol
        sol = 0
        sol += myMap[s[-1]]

        last_char = s[-1]
        i = len(s) - 2
        while i >= 0:
            cur_char = myMap[s[i]]
            if myMap[last_char] > cur_char:
                sol -= cur_char
            else:
                sol += cur_char
            last_char = s[i]
            i -= 1

        return sol