myList = []

numElements = int(input("How many elements would you like to add? "))

for i in range(numElements):
    element = int(input("Enter an element: "))
    myList.append(element)

print("Sum of the elements of the list: ", myList[0] + myList[numElements - 1])
print("Difference of the elements of the list: ", myList[0] - myList[numElements - 1])
print("Product of the elements of the list: ", myList[0] * myList[numElements - 1])
