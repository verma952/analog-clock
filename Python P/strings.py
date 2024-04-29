# strings are immutable
a = "Vasudev !"
print(len(a))
print(a)
print(a.upper())
print(a.lower())
print(a.rstrip("!"))
print(a.replace("Vasudev","Radhe krishna"))
print(a.split(" "))
blogHeading = "introduction to js"
print(blogHeading.capitalize())
str1 = "Welcome to the console !"
print(str1.endswith("!"))
str2 = "His name is Dane. He is an honest man."
print(str2.endswith("to",4,10))
print(str2.find("is"))
str3 = str1+str2 #join of two strings
print(str3)
print((str1+str2)==str3)  #comparision of strings.
for i in str2 : #iteration through a string
    print(i,end="")
print("\n",max(str3))  #max() returns the greatest ascii value character
print(str3[2:20]) #string slicing
