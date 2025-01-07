# Method 1
def powerOfNumber1(m, n):
    if n <= 0:
        return 1
    return powerOfNumber1(m, n - 1) * m


# Method 2
def powerOfNumber2(m, n):
    if n <= 0:
        return 1
    elif n % 2 == 0:
        return powerOfNumber2(m * m, n / 2)
    else:
        return m * powerOfNumber2(m * m, (n - 1) / 2)


power1 = powerOfNumber1(5, 3)
power2 = powerOfNumber2(5, 5)

print(power1, power2)
