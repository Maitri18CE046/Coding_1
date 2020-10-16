ip=[('Tom','12/04/1999','65kg'), ('Ab de','17/02/1990','63kg'), ('Kholi','16/02/1985','62kg'), ('Chahal','25/09/1985','61kg')]

op_name=[]
op_birthday=[]
op_weight=[]

for i in ip:
    op_name.append(i[0])
    op_birthday.append(i[1])
    ip=len(i[2])-2
    op_weight.append(int(i[2][0:ip]))

print('Student name: ',op_name)
print('Student birthday: ',op_birthday)
print('Student weight: ',op_weight)