myList = []
sumOfElements = 0
counter = 0

numElements = int(input("How many elements would you like to add? "))

for i in range(numElements):
    element = int(input("Enter an element: "))
    myList.append(element)



for i in range(numElements):
    sumOfElements += myList[i]
    counter += 1

print("Arithmetic mean of the elements of the list: ", sumOfElements / counter)
