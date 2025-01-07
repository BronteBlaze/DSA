def taylorSeries(x, n):
    # Creating Static Variables p and f
    if not hasattr(taylorSeries, "p"):
        taylorSeries.p = 1
        taylorSeries.f = 1
    # Checking for n=0
    if n <= 0:
        return 1
    # Else part
    r = taylorSeries(x, n - 1)
    taylorSeries.p = taylorSeries.p * x
    taylorSeries.f = taylorSeries.f * n
    return r + (taylorSeries.p / taylorSeries.f)

# Calling function
series = taylorSeries(5, 10)
print(series)
