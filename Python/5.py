
number = int(input("Enter a number: "))
counter = 0
penultimateDigit = 0


while number > 0:
    if(counter == 1):
        penultimateDigit = number % 10
        break
    counter += 1
    number //= 10

print(penultimateDigit)
