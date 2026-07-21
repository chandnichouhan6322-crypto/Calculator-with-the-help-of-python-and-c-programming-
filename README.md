#python_calculator
a = float(input("enter number of a \n"))
b = float(input("enter number of b \n"))
c = input("enter operator")
if c == "+":
    print("added", a + b)
elif c == "-":
    print("substract", a - b)
elif c == "/":
    print("divided", a / b)
elif c == "%":
    print("di", a % b)
else:
    print("something wrong")
