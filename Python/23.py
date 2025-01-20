def is_prime(number):
    if number <= 1: 
        return False
    if number == 2: 
        return True
    if number % 2 == 0:
        return False

    for i in range(3, int(number + 1), 2):
        if number % i == 0:
            return False
    return True

num = int(input("Введите число: "))
if is_prime(num):
    print(f"Число {num} является простым.")
else:
    print(f"Число {num} составное.")
