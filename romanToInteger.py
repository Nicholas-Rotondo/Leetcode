class Solution:
    def romanToInt(self, s: str) -> int:
        output = 0
        vals = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000,
        }
        for char in range(len(s)):
            if char < len(s)-1 and vals[s[char]] < vals[s[char+1]]:
                output -= vals[s[char]]
            else:
                output += vals[s[char]]
        return output
