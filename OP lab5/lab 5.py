for i in range(1000):
    a = i
    i = i+1
    temp = a
    b = 0
    while temp > 0 and temp < 1000:
        b = b * 10 + temp % 10
        temp = temp // 10
    if a == b:
        print(b)
