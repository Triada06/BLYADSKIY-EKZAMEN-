def linear_equation(a, b):

    if a == 0:
        if b == 0:
            return "Бесконечно много решений"
        else:
            return "Нет решений"
    else:
        return b / a

a = float(input("a: "))
b = float(input("b: "))
solution = linear_equation(a, b)
print(f"Решение уравнения {a}x = {b}: {solution}")
