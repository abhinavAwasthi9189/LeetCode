class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        s.strip()
        s = s.split()
        s.reverse()
        x = " ".join(s)
        return x
        