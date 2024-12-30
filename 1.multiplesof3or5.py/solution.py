numbers = []
for i in range(1000):
    if (i % 5 == 0) or (i % 3 == 0):
        numbers.append(i)
print(sum(numbers))

# list all numbers of 1000 that are a multiple of 3 or 5
