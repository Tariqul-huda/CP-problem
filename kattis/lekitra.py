str = input()
n = len(str)
arr = str
for x in range(0,n-2):
    for y in range(x+1,n-1):
        first = str[0:x+1]
        second = str[y:n-1]
        third = str[x:y]
        first = first[::-1]
        second = second[::-1]
        third = third[::-1]
        temp = first + second + third
        if temp <arr:
            arr = temp

print(arr)
        
