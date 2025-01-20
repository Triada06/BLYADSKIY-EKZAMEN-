myList = []
counter = 0
sum = 0

numElements = int(input("How many elements would you like to add? "))

for i in range(numElements):
    element = int(input("Enter an element: "))
    myList.append(element)

for i in myList:
    if i % 2 == 0:
        sum += i
        counter += 1

print("Sum of the even elements: ",sum)
print("Number of the even elements: ",counter)