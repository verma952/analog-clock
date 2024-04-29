dict = {'Name':'Vasudev','Age':22}
print(dict)
# Accessing the dictionary items
Country_Capitals = {'United States':'Washington DC','Italy':'Rome','England':'London'}
print(Country_Capitals['United States']) #Output = Washington DC
print(Country_Capitals['Italy']) # Output = Rome
print(Country_Capitals['England']) # Output = London
# Adding Items to a Dictionary Item
Country_Capitals['Germany'] = 'Berlin'
print(Country_Capitals)
# Remove Dictionary Items
del Country_Capitals['United States']
print(Country_Capitals)