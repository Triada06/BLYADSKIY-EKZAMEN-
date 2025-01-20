
number = int(input("Enter a number: "))
minDigit = 9

while number != 0:
    if(number % 10 < minDigit):
        minDigit = number % 10
    number = number // 10

print(minDigit)