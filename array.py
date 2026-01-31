import random

# Create an array (list) of 20 integers between 1 and 100
numbers = [random.randint(1, 100) for _ in range(20)]

# Arrays for even and odd numbers
even = []
odd = []

# Separate even and odd values
for num in numbers:
    if num % 2 == 0:
        even.append(num)
    else:
        odd.append(num)

# Display results
print("Original array:")
print(numbers)

print("\nEven numbers:")
print(even)

print("\nOdd numbers:")
print(odd)
