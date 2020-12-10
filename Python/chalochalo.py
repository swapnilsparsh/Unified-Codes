from array import*     #here * means to include all the functions of array

vals = array('i',[3,5,7,9])
vals.reverse()

for i in vals:
    print(i)

print("-------")

vals = array('i',[2,5,4])

for i in range(len(vals)):
    print(vals[i])
  
print("-------")

val = array('u',['e','s','j'])
val.reverse

for i in val:
    print(i)

print("-------")

val = array('i', [5,4,3,2])
newArr = array(val.typecode, (a*a for a in val))

for e in newArr:        
    print(e)

print("-------")