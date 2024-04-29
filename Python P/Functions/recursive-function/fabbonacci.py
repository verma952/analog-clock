num = int(input('Enter a Number to calculate Fabbonacci Series'))
def fabb(n):
    if n == 0:
        return 0
    if n == 1:
        return 1
    else:
        return fabb(n-1) + fabb(n-2)
print('The fabbonacci series for the entered number is :')
for i in range(num):
    print(fabb(i),"\t",end="")