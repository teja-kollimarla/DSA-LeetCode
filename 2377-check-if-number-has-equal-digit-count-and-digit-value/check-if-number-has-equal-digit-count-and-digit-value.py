class Solution:
    def digitCount(self, num):
        mp = {}
        for ch in num:
            mp[int(ch)] = mp.get(int(ch), 0) + 1
        for i in range(len(num)):
            if mp.get(i, 0) != int(num[i]):
                return False
        return True

# Example
print(Solution().digitCount("1210"))  # Output: True