#1Syntax Error
print("Hello World'
      
# Indentation Error
for i in range(5):
print(i)

# Variable Not Defined
x = 10
y = z + 5
print(y)

# Wrong Function Call
def greet(name):
    return "Hello " + name

print(greet())

# Type Error
num = 5
text = " apples"
print(num + text)

# Infinite Loop
i = 0
while i < 5:
    print(i)

# Wrong Operator
a = 10
b = 3
print(a // b)  # Expected 3.33

# List Index Error
fruits = ["apple", "banana"]
print(fruits[2])

# Wrong Import
import maths
print(maths.sqrt(16))

# Logic Error
def is_even(n):
    if n % 2 == 1:
        return True
    else:
        return False

