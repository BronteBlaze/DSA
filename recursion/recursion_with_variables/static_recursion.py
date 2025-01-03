# Dynamic Recursion
def dynamic_recursion(x):
    if x > 0:
        return dynamic_recursion(x - 1) + x
    else:
        return 0


# Static Recursion
def static_recursion(x):
    a = 5
    if x > 0:
        return static_recursion(x - 1) + a
    else:
        return 0

# Exection Function
sum = dynamic_recursion(4)
print(sum) #sum=10
sum = static_recursion(4)
print(sum) #sum=20