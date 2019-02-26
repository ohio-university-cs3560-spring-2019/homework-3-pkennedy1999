str = gets #input string from standard in
str = str.gsub(/sh\b/, "ti") #replaces "sh" at end of words with "ti"
str = str.gsub(/\bf/, "gh") #replaces "f" at beginnng of words with "gh"
str = str.gsub(/\Bi\B/, "o") #replaces "i"in  middle of words with "o"
puts str #prints the string with the replacements 
