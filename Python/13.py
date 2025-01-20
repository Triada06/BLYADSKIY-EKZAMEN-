myList = []
sumOfElements = 0

numElements = int(input("How many elements would you like to add? "))

for i in range(numElements):
    element = int(input("Enter an element: "))
    myList.append(element)

for element in myList:
    sumOfElements += element

print("The sum of elements is: ", sumOfElements)