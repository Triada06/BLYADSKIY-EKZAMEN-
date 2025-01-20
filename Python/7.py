
number = int(input("Enter a number: "))
counter = 0


while number > 0:
    if(number % 10 == 7):
        counter += 1
    number //= 10

print("The number of digits that are equal to seven is: ", counter)
