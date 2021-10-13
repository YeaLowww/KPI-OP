def A(n,m):
    if n == 0:
        return m + 1
    if ((n != 0) and (m == 0)):
        return A(n - 1, 1)
    if ((n > 0) and (m > 0)):
        return A(n - 1, A(n, m - 1))
n = int(input())
m = int(input())
print(A(n,m))



