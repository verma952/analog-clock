num = int(input('Enter a number'))
def isPrime(a):
    flag = 0
    for i in range(2,a):
        if a%i == 0:
            flag = 1
            break
        else:
            flag = 0
    if flag == 0:
        print('Number is Prime')
    else:
        print('Number is not Prime')

isPrime(num)