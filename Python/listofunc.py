# pass list in a function

def count(lst):
    even = 0
    odd = 0
    for i in lst:
        if i % 2 == 0:
            even += 1
        else: 
            odd += 1
    return even,odd
lst = []

for i in range(1,6):
    app = int(input("Enter the "+ str(i)+ " no. "))
    lst.append(app)
even, odd = count(lst)
print("There are  " + str(even) + " even no ")
print("There are " + str(odd) + " odd no ")
