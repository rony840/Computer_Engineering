print()
print("\t********<GREATEST OF THREE>********")
a=int(input("\tEnter a number: "))
b=int(input("\tEnter second number: "))
c=int(input("\tEnter third number: "))
if(a>b):
    if(a>c):
        print("\t",a," is greatest of all.")
    elif(b>c):
        print("\t",b," is greatest of all.")
    else:
        print("\t",c," is greatest of all.")
elif(b>c):
    print("\t",b," is greatest of all.")
elif(c>a):
    print("\t",c," is greatest of all.")

print()
print("\t********<SUM OF 'n' NATURAL NUMBERS>********")
#sum of 'n' natural numbers
d=int(input("\tEnter a number: "))
c=0
for i in range(0,d+1):
    c=c+i
    i=i+1
print("\tSum of ",d," natural numbers is: ",end=' ')
print(c)

print()
print("\t********<SUM OF TWO NUMBERS>********")
i=0
while(i!=1):
    a=input("\tEnter first number: ")
    b=input("\tEnter second number: ")
    if(a=="abc" or b=="abc"):
        print("\n\tErr... String is not accepted.")
        i=0
    else:
        c=int(a)+int(b)
        print("\n\tSum of two numbers is: ",c)
        i+=1
