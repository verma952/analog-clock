n = int(input('Enter the number of rows : '))
for i in range(n+1):
   for j in range(i):
      print("*  ",end="")
   print("")
   
 
for i in range(n+1):
   for j in range(n+1,i,-1):
      print("*  ",end="")
   print("")

 
   
print("\n\n\n\n")

for i in range(n+1):
    for j in range(n+1,i,-1):
        print('* ',end='')
    print('')


for i in range(n+1):
    for j in range(n+1,i,-1):
        print('* ',end='')
    print('')