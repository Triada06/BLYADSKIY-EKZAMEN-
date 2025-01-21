elements = input("Введите элементы списка через пробел: ").split()
if elements == elements[::-1]:
    print("+")
else:
    print("-")
