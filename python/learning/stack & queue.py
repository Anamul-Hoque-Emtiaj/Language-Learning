#stack
book=[]
book.append("c")
book.append("c++")
print(book)
book.append("java")
print(book)
book.pop()
print(book)
if not book :
    print("No book left")

#queue
from collections import deque
bank = deque(["Anamul","Pori"])
print(bank)
bank.popleft()
print(bank)
bank.popleft()
if not bank :
    print("No person left")