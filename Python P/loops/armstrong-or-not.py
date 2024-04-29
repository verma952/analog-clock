n = int(input('Enter a number'))
num = n
sum =0
while n>0:
     sum = sum + (n%10)**3
     n = int(n/10)
if sum == num:
     print('Armstrong Number')
else:
     print('Not Armstrong Number')