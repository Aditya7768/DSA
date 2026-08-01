class Solution(object):
    def secondHighest(self, s):
        largest = slargest = -1
        for i in range(len(s)):
            if s[i].isdigit():
                val = int(s[i])

                if val > largest:
                    slargest = largest 
                    largest = val
                elif val < largest and val > slargest:
                    slargest = val        

  
        return slargest            
