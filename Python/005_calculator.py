a = float(input("Enter the first number: "))
operator = input("Enter an operator (+, -, *, /): ")
b = float(input("Enter the second number: "))

if operator == "+":
    print(f"Result: {a + b}")
elif operator == "-":
    print(f"Result: {a - b}")
elif operator == "*":
    print(f"Result: {a * b}")
elif operator == "/":
    if b == 0:
        print("Error: cannot divide by zero.")
    else:
        print(f"Result: {a / b}")
else:
    print("Error: unknown operator.")
