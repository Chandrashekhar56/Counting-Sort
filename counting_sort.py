def counting_sort_function(Arr1):
    total_size_of_Arr1 = len(Arr1)
    temp1 = [0] * total_size_of_Arr1

    temp2 = [0] * 10
    
    for x in range(0, total_size_of_Arr1):
        temp2[Arr1[x]] += 1
        
    for x in range(1, 10):
        temp2[x] += temp2[x - 1]

    x = total_size_of_Arr1 - 1
    while x >= 0:
        temp1[temp2[Arr1[x]] - 1] = Arr1[x]
        temp2[Arr1[x]] -= 1
        x -= 1

    for x in range(0, total_size_of_Arr1):
        Arr1[x] = temp1[x]


Arr1 = [5,4, 7,2,5 , 9, 0, 3, 1,7,3]
counting_sort_function(Arr1)
print("Sorted Elements: ")
print(Arr1)
