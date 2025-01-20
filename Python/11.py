def IsTriangleValid(a, b, c):
    if a + b > c and b + c > a and a + c > b:
        return True
    return False

print("Enter the sides of the triangle: ")
a = int(input())
b = int(input())
c = int(input())

if(IsTriangleValid(a, b, c)):
    print("YES")
else:
    print("NO")