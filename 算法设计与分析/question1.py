# 算法1.1

n = 12
m = 9
while m > 0:
    r = n % m
    n = m
    m = r
print(n)
