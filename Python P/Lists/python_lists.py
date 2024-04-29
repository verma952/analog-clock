age = [23,45,87,90,56,55,4,99]
for i in age:
    print(i)
print(len(age))
languages = ['Python','C++','Java','C','Java Script']
print(languages)
print(languages[2]) #Java
print(languages[-1]) #Java Script
print(languages[1:4]) #Slicing of Lists
languages.append('HTML') #adding an element to the list
print(languages)
languages.extend(age) #adding another list to a list
print(languages)
languages.insert(1,'My-SQL') #insert the value at given postion
print(languages)
# removing an element in list
del languages[-1]
print(languages)
languages.remove(23) # using remove() method
print(languages)