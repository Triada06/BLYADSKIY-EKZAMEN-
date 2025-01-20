
number = int(input("Enter a number: "))
maxDigit = 0

while number != 0:
    if(number % 10 > maxDigit):
        maxDigit = number % 10
    number = number // 10

print(maxDigit)