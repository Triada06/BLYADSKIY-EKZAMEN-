text = input("Введите строку: ")
cleaned_text = text.replace(" ", "").lower()

if cleaned_text == cleaned_text[::-1]:
    print("+")
else:
    print("-")
