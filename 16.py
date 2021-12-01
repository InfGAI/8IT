def f(n):
    if n<=1:
        return 0
    elif n%2!=0:
        return 3*n+f(n-1)
    else:
        return 3*f(n//2)+2
print(f(107))