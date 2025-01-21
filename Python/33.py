tuple = []

penultimate = 0

size = int(input("Enter the number of elements: "))

for i in range(size):
    tuple.append(int(input("Enter the element: ")))

for i in range(size-2,-1,-1):
    penultimate = tuple[i]
    break


print(tuple[1] + penultimate)
print(tuple[1] - penultimate)
print(tuple[1] * penultimate)


