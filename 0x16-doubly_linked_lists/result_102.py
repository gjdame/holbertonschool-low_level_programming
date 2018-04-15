#!/usr/bin/python3
max_pal = 0

for i in range(999, 99, -1):
    for j in range(999, 99, -1):
        result = i * j
        result = str(result)
        if (result == result[::-1]):
            result = int(result)
            if (result > max_pal):
                max_pal = result

print (max_pal)
