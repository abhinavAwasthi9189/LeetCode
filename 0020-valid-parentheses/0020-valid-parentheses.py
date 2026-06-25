class Solution:
    def isValid(self, s: str) -> bool:
        L=[]
        D={"(":")","[":"]","{":"}"}
        for i in s:
            if i in ["(","[","{"]:
                L.append(i)
            elif i in [")","]","}"]:
                if len(L)==0:
                    return False
                elif i==D[L[len(L)-1]]:
                    L.pop()
                else:
                    return False
        if len(L)==0:
            return True
        else:
            return False
        