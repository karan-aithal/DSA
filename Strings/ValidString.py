
# 
# 1. Frequency of each character in the 3rd string should be less than or equal to the sum of frequency of that character in first 2 strings.
# 2. If the character appears in both strings, use the highest position.


input_data = input()

# rkpes#@, mdn, rmde##@

s1 , s2, s3 = input_data.split(",")

print(is_valid(s1, s2, s3))

#valid 3rd string

def is_valid(s1, s2, s3):

    frequency_map = {}
    source_mapindex = {}

    #scan s1 and s2
    for s in [s1, s2]:
        for i in range(len(s)):
            
            ch = s[i]
            frequency_map[ch] += 1  # frequency_map.get(ch, 0) + 1
            source_mapindex[ch] = max(source_mapindex.get(ch, -1 ), i)

    #search s1 and s2 for ch in s3
    used_frequency = {}

    for i in range(len(s3)):    
        ch = s3[i]

        if ch not in frequency_map:
            return False

        if (frequency_map.get(ch) > used_frequency.get(ch,0)):
            return False

        used_frequency[ch] = used_frequency.get(ch,0) + 1
        
      #search s1 and s2 for ch index in s3
    prev_index = -1

    for i in range(len(s3)):
        ch = s3[i]

        current_index = source_mapindex.get(ch,-1)  
        
        if( current_index < prev_index):
            return False
        
        prev_index = current_index




        
            


   