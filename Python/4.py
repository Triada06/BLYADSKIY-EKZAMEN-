
number = int(input("Enter a number: "))
countOfDigits = 0

if number == 0:
    print("Number of digits is 1")
else:
    while number != 0:
        countOfDigits += 1
        number = number // 10

print(countOfDigits)
