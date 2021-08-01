num={1,2,3,5,5,4}
print(num)
# 2nd method
num2=set([4,5,6,6])
print(num2)

num2.add(7)
num2.remove(4)
print(num2)
print(4 in num2)
print(7 not in num2)

print(num | num2) #union
print(num & num2) #intersection
print(num - num2) # bad