def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def lcm(a, b):
    return abs(a * b) // gcd(a, b)


num1 = int(input("Введите первое число: "))
num2 = int(input("Введите второе число: "))

print("Наименьшее общее кратное:", lcm(num1, num2))
