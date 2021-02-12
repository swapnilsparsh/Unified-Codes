class Student:

    def __init__(self,m1,m2):
        self.m1 = m1
        self.m2 = m2

    def sum(self, a = None, b = None, c = None):

        addition = 0

        if a!=None and b!=None and c!=None:
            addition = a + b + c

        elif a!=None and b!= None:
            addition = a + b
        
        else: 
            addition = a

        return addition

s1 = Student(10,20)

print(s1.sum(2,4))