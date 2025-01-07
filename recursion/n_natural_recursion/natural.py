def naturalRecursion(n):
    if n < 0:
        return 0
    return naturalRecursion(n - 1) + n


sum = naturalRecursion(5)
print(sum)