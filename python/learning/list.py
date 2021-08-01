sub=["c","c++","java","python","android","os"]
print(sub) #total
print(sub[3])
print(sub[2:])
print(sub[-1])
print("c++" in sub)
print("c++" not in sub)
print(sub + ["swift",2019])
print(sub * 2)

print(len(sub))
sub.append("toc")
print(sub)
sub.insert(2,"basic")
print(sub)
sub.remove("java")
print(sub)
sub.sort()
print(sub)
sub.reverse()
print(sub)
sub.pop()
print(sub)
sub2=sub.copy()
print(sub2)
sub.clear()
print(sub)
p=sub2.index("os")
print(p)
c=sub2.count("c")
print(c)

#range func
n=list(range(10))
print(n)
print(n[3])
n=list(range(2,100,2))
print(n)
n=list(range(5,15))
print(n)

#for loop
for x in n :
    print(x)
#while loop as usal
#n.lower()

