a = 5 // 2      #use double slash if you dont want to print float  number.
print(a)
print("-------")

b = 2 ** 3      #use ** to use power of. 
print(b)
print("-------")

c = 3 ** 2
print(c)
print("-------")

print("Lenovo\'s Lappy")     #use \ to include 's 
print("-------")

print(r"Lenovo/n Laptop")     #use (r) to print same as it is in " ".
print("-------")

myname = ("Jatin Yadav")
print(len(myname))          # use length to calculate no.
print("-------")

#list

num = [2,4,7,9]
print(num[1])       #output will be 4.

num.insert(2,44)
print(num)          #(2,44) 2 is the place where you want to add any no, in this case its 44.

del num[2:]         #use del to delete numbers in list.
print(num)
print("-------")

#tuple

tup = (2,4,6)           #in tuple value cannot be changed
print(tup)
print("-------")

#set

s = {2,3,4,5}           # in set value can be changed
print(s)

#dictionary

data = (2,4,6,7)
values = ('jat','dkd','dhd')
jat = dict(zip(data,values))
print(jat)  