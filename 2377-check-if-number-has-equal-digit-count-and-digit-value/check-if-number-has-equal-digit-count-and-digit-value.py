class Solution:
    def digitCount(self, num: str) -> bool:
        dect = {} 
        s = num
        for i in s:
            if i in dect:
                dect[i] += 1

            else:
                dect[i] = 1
        for i in range(len(s)):
            if str(i) not in dect.keys(): 
                if not int(s[i]) == 0 :
                    return False
                continue

            if not int(s[i]) == dect[str(i)]:
                return False
        return True
