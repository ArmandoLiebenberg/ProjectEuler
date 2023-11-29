
i = 0
j = 1
sum = 0 # start at 1 to account for first fib number

while j < 4000000:
    tmp = j
    j = i + j
    i = tmp
    
    if j % 2 == 0:
        print(j)
        sum += j
        
print(f"total is: {sum}")