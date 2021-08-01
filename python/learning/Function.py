def add(a,b) :
    print(a+b)

add(10,20)
add(15,20)

#return

def sub(x,y) :
    s=x-y
    return s
result= sub(20,10)
print(result)

#lamda function single line expression & nam nai
a=(lambda a,b : a*a+2*a*b+b*b)(2,3)
print(a)
