import math as m


def AreaOfTriangle(a, b, c):
    s = (a + b + c) / 2
    area = m.sqrt(s * (s - a) * (s - b) * (s - c))
    return area


print("Enter the sides of the triangle: ")
a = int(input())
b = int(input())
c = int(input())

if (AreaOfTriangle(a, b, c) == 0):
    print("The triangle doesnt exist")
else:
    print("The area of the triangle is:", AreaOfTriangle(a, b, c))
