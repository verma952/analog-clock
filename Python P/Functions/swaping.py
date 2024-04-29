# a = 6
# b = 8
# a,b=b,a
# print(a,b)

# swaping via a functions
a = int(input('Enter the value of a '))
b = int(input('Enter the value of b '))
def swap(a,b):
     a,b = b,a 
     print('The value of a is : ',a,'and b is : ',b)
swap(b,a)