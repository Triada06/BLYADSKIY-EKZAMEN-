
number = int(input("Enter a number: "))
sumOfDigits = 0


while number > 0:
    sumOfDigits += (number%10) * (number % 10)
    number //= 10

print(sumOfDigits)
