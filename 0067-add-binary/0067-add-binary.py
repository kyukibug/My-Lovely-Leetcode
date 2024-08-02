class Solution:
    def addBinary(self, a: str, b: str) -> str:
        numA = int(a, 2)
        numB = int(b, 2)
        return format(numA + numB, 'b')