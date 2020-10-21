# Calculator
print("Select operation you want to do")
print("1. Add")
print("2. Subtract")
print("3. Multiply")
print("4. Divide")
choice = int(input("Enter choice 1_2_3_4:  "))

def add(x, y):
    return x + y

def subtract(x, y):
    return x - y

def multiply(x, y):
    return x * y

def divide(x, y):
    return x / y

if(choice <= 4):
    One = float(input("Enter 1st Number "))
    Two = float(input("Enter 2nd Number "))
    if choice == 1:
        z = add(One,Two) 
        print(z)
    elif choice == 2:
        z = subtract(One,Two)
        print(z)
    elif choice == 3:
        z = multiply(One, Two)
        print(z)
    elif choice == 4:
        z = divide(One, Two)
        print(z)
else:
    print("Please Enter Valid Choice")