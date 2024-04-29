# Data Frame is a two dimensional data structure with labeled axis(rows and columns)

import pandas as pd
#calling data frame constructor
df = pd.DataFrame()
print(df)

#list of strings
lst = ['P','Y','T','H','O','N']
#calling data frame constructor on list
df = pd.DataFrame(lst)
print(df)