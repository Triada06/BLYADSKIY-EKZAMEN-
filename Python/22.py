def count_even_and_odd_digits(number):
    number = abs(number)  
    even_count = 0
    odd_count = 0

    while number > 0:
        digit = number % 10
        if digit % 2 == 0:
            even_count += 1
        else:
            odd_count += 1
        number //= 10 

    return even_count, odd_count


number = int(input("Введите число: "))
even_count, odd_count = count_even_and_odd_digits(number)
print(f"Количество чётных цифр: {even_count}")
print(f"Количество нечётных цифр: {odd_count}")
