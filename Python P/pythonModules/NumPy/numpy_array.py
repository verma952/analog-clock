import numpy as np
#array using list
a = np.array([1,2,3,4,5,6,7])
print('Array with rank 1 is = ',a)

#array using tuple

b = np.array((3,4,5,6,7,8,9))
print('Array using tuple is = ',b)

#multidimensional array 

arr = np.array([[2,5,6,4],[5,6,3,2]])
print(arr)

#array operations

print('sum of arrays = ',a+b)
print('Add 2 in array a :',a+2)
print('Sum of all array elements is = ',b.sum())

#accessing the array index

#to print a range of an array, slicing is done. Slicing of an array is defining a range in a new array which is used to Print a range of elements from the original array.

arr = np.array([[2,5,6,4],[5,6,3,2],[10,3,15,12],[20,21,16,18]])
print('initial array : ',arr)

sliced_array = arr[ :2, ::2]
print("Array with first 2 rows and alternate columns (0 and 2):\n",sliced_array)

index_array = arr[[1,1,0,3],[3,2,1,0]]
print("Elements at the location (1,3), (1,2), (0,1), (3,0) is :",index_array)

# accessing array elements 

print(" The sum of b's 1st and 3rd element is : ",b[0]+b[2])
print(arr[0,1])

#sorting of arrays

arr = np.sort(arr)
print(arr)

print(np.sort(b))

#Joining or concatination of NumPy arrays
b = np.array([2,3,45,6,9])
c = np.concatenate((a,b),axis=0)
print('Concatinatin of array a and b is :',c)

#numpy array copy and view

arr = np.array([1,2,3,4,5,6])
x = arr.copy()
arr[0] = 23
print('Original array is :',arr)
print('Copy of array is : ',x)

x = arr.view()
arr[0] = 12
print('View of array is :',x)
print("original array is :",arr)