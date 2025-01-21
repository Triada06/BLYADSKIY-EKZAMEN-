a = float(input("Введите 1 ое число: "))
b = float(input("Введите 2 ое число: "))
c = float(input("Введите 3 ье число: "))

max_value = max(a, b, c)
min_value = min(a, b, c)
average = (a + b + c) / 3

print(f"Максимальное: {max_value}")
print(f"Минимальное: {min_value}")
print(f"Среднее: {average:.2f}")
