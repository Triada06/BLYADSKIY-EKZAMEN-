def second_num(number):

    number_str = str(abs(number))
    first_digit = int(number_str[1])  
    return first_digit


number = int(input("Введите число: "))
result = second_num(number)
print(result)
