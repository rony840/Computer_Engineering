class calculator:
    def __init__ (self,a,b):
        self.a=a
        self.b=b
    def add(self):
        print(self.a+self.b)
    def sub(self):
        print(self.a-self.b)
    def multiply(self):
        print(self.a*self.b)
    def divide(self):
        print(self.a/self.b)

c='abc'
while c=='abc':
    try:
        c=int(input("Enter an integer: "))
    except:
        print("Error characters are not accepted!!")
        c='abc'

i=0
while(i!=1):
    a=int(input("Enter first number: "))
    b=int(input("Enter second number: "))
    if(a=="abc" or b=="abc"):
         print("Err... String is not accepted.")
         i=0
    else:
        i+=1
j=0
while(j!=1):
    obj1=calculator(a,b)
    print()
    print()
    print("*****Menu*****")
    print()
    print("1.Add")
    print("2.Sub")
    print("3.Multiply")
    print("4.Divide")
    print("5.Exit")
    print()
    c=int(input("Enter your choice(1-4): "))
    if(c==1):
        print("Addition:",end=' ')
        obj1.add()
    elif(c==2):
        print("Subtraction:",end=' ')
        obj1.sub()
    elif(c==3):
        print("Multiplication:",end=' ')
        obj1.multiply()
    elif(c==4):
        print("Division:",end=' ')
        obj1.divide()
    elif(c==5):
        print("Exiting...")
        j+=1
    else:
        print("Invalid input!!")
        j=0
    print()
    while(k!=1):
        print("Do you want to do again?")
        print("1.Yes")
        print("2.No")
        print()
        c=input("Enter your choice(1 or 2): ")
        if(c==1):
            j=0
            k=1
        elif(c==2):
            j=1
            k=1
        else:
            print("invalid input!!")
            k=0

