# https://codeforces.com/contest/1395/problem/0

NO_OF_CHARS = 256


def canFormPalindrome(st) : 
  
    # Create a count array and initialize   
    # all values as 0 
    count = [0] * (NO_OF_CHARS) 
  
    # For each character in input strings, 
    # increment count in the corresponding 
    # count array 
    for i in range( 0, len(st)) : 
        count[ord(st[i])] = count[ord(st[i])] + 1
  
    # Count odd occurring characters 
    odd = 0
      
    for i in range(0, NO_OF_CHARS ) : 
        if (count[i] & 1) : 
            odd = odd + 1
  
        if (odd > 1) : 
            return False
              
    # Return true if odd count is 0 or 1,  
    return True


t = int(input())

while t:
    balls = list(map(int, input().split()))   
    r, g, b, w = balls[0], balls[1], balls[2], balls[3]

    colors = ""

    while True:
        if r == b == g == w:
            print("Yes")
            break
        
        tot = r + g + b

        if r > 0 and g > 0 and b > 0:
            r -= 1
            w += 1
         
            g -= 1
            w += 1        
            
            b -= 1
            w += 1  

        colors = 'r' * r # addColors('r', r)
        colors += 'g' * g #addColors('g', g)
        colors += 'b' * b # addColors('b', b)
        colors += 'w' * w # addColors('w', w)

        

        if tot == 0 or canFormPalindrome(colors):
            print("Yes")
            break
        
        if r == 0 or g == 0 or b == 0 and w != 0:
            break

    if not canFormPalindrome(colors):
        print("No")


    t -= 1