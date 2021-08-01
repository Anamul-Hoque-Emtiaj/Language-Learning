def sqr(x):
    return  x*x
num=[1,2,3,4,5]
result=list(map(sqr,num))
print(result)
#filter func # f f &map : variable=list(ff/map(func,list name)) # func may be lambda
res=list(filter(lambda x  : x%2==0,num))
print(res)
#list comprehension
res1=[x*x for x in num]
print(res1)
res2=[x for x in num if x%2==0]
print(res2)