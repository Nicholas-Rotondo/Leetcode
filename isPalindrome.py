class Solution:
    def isPalindrome(self, s: str) -> bool:

        stripped_string = ''.join(char for char in s if char.isalnum()).lower()
 
        start = 0
        end = len(stripped_string) - 1

        while start < end:
            if stripped_string[start] != stripped_string[end]:
                return False
            start += 1
            end -= 1

        return True
