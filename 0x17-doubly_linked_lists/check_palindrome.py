#!/usr/bin/python3
def is_palindrome(num):
    # check if a number is a palindrome
    return str(num) == str(num)[::-1]

largest = 0

for i in range(100, 1000):
    for j in range(100, 1000):
        prod = i * j
        if is_palindrome(prod) and prod > largest:
            largest = prod

with open('102-result', 'w') as file:
    file.write(str(largest))
