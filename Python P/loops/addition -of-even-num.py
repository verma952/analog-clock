n = int(input('enter the number till you want to calculate the sum'))
sum = 0
for i in range(0,n+1,2):
    sum = sum + i
print('Sum of the even Numbers is :',sum)
avg = sum/n
print('Average of the first',n,'even Numbers is :',avg)