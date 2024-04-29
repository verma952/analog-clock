n = int(input('Enter the number of rows:'))
a = int(n/2)
for i in range(n+1):
    for j in range(n+1,i,-1):
        print('  ', end="")
    for k in range(2*i+1):
        print('* ', end="")
    print('')

print("\n\n\n")


for i in range(n+1):
    for k in range(i+1):
        print('  ', end="")
    for j in range(2*n+1,2*i,-1):
        print('* ', end="")
    for k in range(i+1):
        print('  ', end="")
    print('')