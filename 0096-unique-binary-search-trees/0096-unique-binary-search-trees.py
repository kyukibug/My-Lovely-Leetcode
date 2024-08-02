class Solution:
    def numTrees(self, n: int) -> int:
        memo = {}
        return self.numTreesFromLowToHigh(1, n, memo)

    def numTreesFromLowToHigh(self, low, high, memo):
        if low >= high:
            return 1
        if (low, high) in memo:
            return memo[(low, high)]

        count = 0
        for i in range (low, high + 1):
            left_subtrees = self.numTreesFromLowToHigh(low, i - 1, memo)
            right_subtrees = self.numTreesFromLowToHigh(i + 1, high, memo)
            count += left_subtrees * right_subtrees
        
        memo[(low, high)] = count

        return count

