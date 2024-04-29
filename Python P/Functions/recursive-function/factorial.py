num = int(input('Enter a Number'))
def factorial(n):
    if n == 0:
        return 1
    return n * factorial(n-1)
result = factorial(num)
print('The Factorial of Entered Number is : ',result)