import math

def cylinder_volume(radius, height):
    return math.pi * radius**2 * height
radius = float(input("R: "))
height = float(input("h: "))
volume = cylinder_volume(radius, height)
print(f"V: {volume:.2f}")
