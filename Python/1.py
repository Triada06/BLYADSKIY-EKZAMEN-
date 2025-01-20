
number = int(input("Enter a number: "))
sumOfNumbers = 0

while number != 0:
    sumOfNumbers  = sumOfNumbers + number % 10
    number = number // 10

print(sumOfNumbers)