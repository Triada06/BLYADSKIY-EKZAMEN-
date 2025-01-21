import math

radius = float(input("Введите радиус шара: "))
volume = (4 / 3) * math.pi * radius**3
surface_area = 4 * math.pi * radius**2
print(f"Объем шара: {volume:.2f}")
print(f"Площадь поверхности шара: {surface_area:.2f}")
