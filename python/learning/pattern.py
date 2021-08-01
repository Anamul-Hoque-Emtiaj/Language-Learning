n=int(input("enter number of row : "))
print("Pattern 1 :")
for x in range(1,n+1):
    print("*" * x)
print("Pattern 2 :")
for x in range(1,n+1):
    print("*" * (2*x-1))

print("Pattern 3 :")
for x in range(1,n+1):
    print(" " * (n-x))
    print("*" * x)

#randint(1,10) random number between 1 - 10