str = gets #input string from standard in

str = str.gsub(/sh$/, 'ti')  #replaces 'sh' at end of words with 'ti'
str = str.gsub(/^[f]/, 'gh') #replaces 'f' at beginning of words with 'gh'
str = str.gsub(/(?!^)i(?!$)/, 'o') #replaces 'i' in middle of words with 'o'

puts str #prints the string with the replacemets
