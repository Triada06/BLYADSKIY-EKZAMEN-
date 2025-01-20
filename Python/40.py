def GetUniqueElements(input_list):
    unique_elements = []
    for item in input_list:
        if item not in unique_elements:
            unique_elements.append(item)
    return unique_elements


original_list = [1, 2, 2, 3, 4, 4, 5, 1]
print(original_list)
result_list = GetUniqueElements(original_list)
print(result_list)
