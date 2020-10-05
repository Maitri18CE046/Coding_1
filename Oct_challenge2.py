import re
dictionary = dict()
def Findunique(Word):
    if Word in dictionary:
        dictionary[words] += 1
    else:
        dictionary.update({words: 1})

test1 = open("test1.txt",'w')
with open ('test.txt') as f:
    for i in f:
        word1=re.split("[\W]+",i)

for words in word1:
    Findunique(words)
for elements in dictionary:
    if dictionary[elements] == 1:
        test1.write(str(elements))
        print(elements)
