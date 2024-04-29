class x:
    i = 1000 #static variable
    def m1(self):
        print(x.i)
x1 = x() #object creation statement
x1.m1() #1000
print(x.i)

#here the m1 method prints 1000 because it is printing the value of i defined inside the class 'x'. And we can also call the static variable outside the of the class by using class name "x".

