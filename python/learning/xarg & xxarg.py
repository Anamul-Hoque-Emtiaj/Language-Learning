#xarg
def student(*details):
    print(details[0])
    print(details)
student(101,"Anamul",3.75)
student(102,"pori")

def add(*numbers) :
    sum=0
    for num in numbers :
        sum=sum+num
    print(sum)

add(10,20)
add(10,20,30,40)

#xxarg
def student(**detail) :
    print(detail)
    print(detail["name"])
student(id=101,name="Anamul")