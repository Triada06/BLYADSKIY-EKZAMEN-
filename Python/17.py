myList = []
counter = 0

numElements = int(input("How many elements would you like to add? "))

for i in range(numElements):
    element = int(input("Enter an element: "))
    myList.append(element)


myTouple = tuple(myList)

for i in myTouple:
    if i > 7:
        counter += 1

print("Number of elements smaller than 7:", counter)
