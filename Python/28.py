import math

def solve_quadratic(a, b, c):
    discriminant = b**2 - 4*a*c 

    if discriminant > 0:
        x1 = (-b + math.sqrt(discriminant)) / (2 * a)
        x2 = (-b - math.sqrt(discriminant)) / (2 * a)
        return (x1, x2)
    elif discriminant == 0:
        x = -b / (2 * a)
        return (x,)
    else:
        return None

a = float(input("Введите a: "))
b = float(input("Введите b: "))
c = float(input("Введите c: "))


if a == 0:
    print("не квадратное уравнение, так как a = 0.")
else:
    roots = solve_quadratic(a, b, c)

    if roots is None:
        print("не имеет действительных решений.")
    elif len(roots) == 1:
        print(f"имеет один корень: {roots[0]}")
    else:
        print(f"имеет два корня: {roots[0]} и {roots[1]}")
