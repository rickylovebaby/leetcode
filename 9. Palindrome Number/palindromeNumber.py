class Solution(object):
    def isPalindrome(self, x):
        if x < 0:
            return False
        if x == 0:
            return True
        m = 0
        t = x
        while x:
            m = m*10 + x%10
            x = x/10
        if t == m:
            return True
        else:
            return False