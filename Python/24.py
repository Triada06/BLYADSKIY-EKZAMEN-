def find_divisors(number):

    divisors = []
    for i in range(1, number + 1):
        if number % i == 0:
            divisors.append(i)
    return divisors


user_input = input("ВЫСРИ число: ")

if user_input.isdigit():
    number = int(user_input)
    divisors = find_divisors(number)
    print(f"Делители числа {number}: {divisors}")
else:
    print("ЕБЛАН Введи целое число.")
