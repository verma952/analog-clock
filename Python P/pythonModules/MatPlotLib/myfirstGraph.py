
# Matplotlib is a Python library that helps in visualizing and analyzing the data and helps in better understanding of the data with help of graphical, pictorial visualizations that can be simulated using matplotlib library. Matplotlib is a comprehensive library for static animated and interactive visualization.

import matplotlib.pyplot as plt

#Creating a simple plot 

#x-axis values.
x = [1,2,3]
#y-axis values.
y = [2,4,1]
#ploting the points 
plt.plot(x,y)

#naming the x-axis
plt.xlabel('x-axis')
#naming the y-axis 
plt.ylabel('y-axis')

#Giving a title to my Graph
plt.title('My first Graph')

#function to show the plot
plt.show()


#Types of matplotlib

