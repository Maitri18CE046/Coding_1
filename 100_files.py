import string
file = open('text_file_1.txt', 'r')
content = file.read()

def remove_punc(s):
    for p in set(s).intersection(string.punctuation):
        s = s.replace(p, ' ')
    return ' '.join(s.split())
file.close()
file = open('text_file_1.txt', 'w')

def print_unique(s):
    unique_words = []
    for word in s.split():
        if word not in unique_words:
            unique_words.append(word)
            file.write(word + '\n')

print_unique(remove_punc(content))