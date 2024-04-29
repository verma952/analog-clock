# pandas generally provide two data structrures for manipulating data 1. series, 2. dataframes

import pandas as pd
import numpy as np
#creating empty series
ser = pd.Series()
print('pandas series is : ',ser)

#simple array
data = np.array(['P','Y','T','H','O','N'])
ser = pd.Series(data)
print("pandas series : \n",ser)

#series of the programming languages
data = np.array(['Java','Python','C','C++','Swift'])
ser = pd.Series(data)
print(ser)