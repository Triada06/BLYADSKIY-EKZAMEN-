myList = []

numElements = int(input("How many elements would you like to add? "))

for i in range(numElements):
    element = int(input("Enter an element: "))
    myList.append(element)

maxElement = myList[0]

for i in range(numElements):
    if myList[i] > maxElement:
        maxElement = myList[i]
print(maxElement)
