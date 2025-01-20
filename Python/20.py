def sum_first_and_last_digit(number):

    numberStr = str(abs(number))
    firstDigit = int(numberStr[0])  
    lastDigit = int(numberStr[-1]) 
    return firstDigit + lastDigit


number = int(input("Введите число: "))
result = sum_first_and_last_digit(number)
print(f"Сумма первой и последней цифры числа {number} = {result}")
