import sys #imported sys library in Python found from Google

#argv array is a reversed array so I have to minus intergers from the length to access the correct elements that I need 
numL = sys.argv[len(sys.argv) - 4] #number of lines in directory variable from argv list 
numW = sys.argv[len(sys.argv) - 3] #number of words in directory variable from argv list 
numC = sys.argv[len(sys.argv) - 2] #number of characters in directory variable from argv list 

print (sys.argv) #whole list printed to show each piece of data about directory

print ("Number of lines in directory:")
print (numL) #prints number of lines in directory 
print ("Number of words in directory:")
print (numW) #prints number of words in directory 
print ("Number of characters in directory:")
print (numC) #prints number of charcters in directory 


