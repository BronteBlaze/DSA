def factorial(n):
    if n <= 0:
        return 1
    return factorial(n - 1) * n


fact = factorial(5)
print(fact)
