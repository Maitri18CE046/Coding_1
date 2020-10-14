1.
import re
ip = "Eric Adam Alisha Andy Cristina Ken Ship"

op = re.findall("[A]\w+",ip)
print(op)


2.
ip = ["Eric","Adam","Alisha","Andy","Cristina","Ken","Ship"]

for i in ip:
    if i.startswith("A"):
        print(True)
    else:
        print(False)

