from re import M


def isIsomorphic(s: str, t: str) -> bool:
    mapST, mapTS = {}, {}
    
    for i in range(len(s)):
        c1, c2 = s[i], t[i]
        
        if((c1 in mapST and mapST[c1] != c2) or (c2 in mapTS and mapTS[c2] != c1)):
            return False
        mapST[c1] = c2
        mapTS[c2] = c1
    
    return True

s, t = "egg", "add"
print(isIsomorphic(s,t))