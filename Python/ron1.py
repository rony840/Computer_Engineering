print()
#basic Datatypes
print("\t********<BASIC DATATYPES>********")
a=int(input("\tEnter int: "))
print("\tdatatype of ",a," : ",type(a))
a=1.5
print("\tdatatype of 1.5: ",type(a))
a="Rony"
print("\tdatatype of 'Rony': ",type(a))
a=[12,3,4,5,6]
print("\tdatatype of a=",a," : ",type(a))
a=(1,2,3,4,5)
print("\tdatatype of a=",a," : ",type(a))
a={1,2,2,4,3,5}
print("\tdatatype of a=",a," : ",type(a))
c={1: 'Ice-cream', 2: 'Cupcakes', 3: 'Chocolates'}
print("\tdatatype of a=",c," : ",type(c))
print()
print("\t********<STRING OPERATIONS>********")
#string operations using library functions
a = "    MAlYalam language    "
print ("\tActual string: ",a)
print ("\tprinting index 0 to 6: ",a[0:6])
print ("\tprinting string excluding last 2 char :",a[:-2])
print ("\tPrinting number of char 'a': ",a.count('a'))
print ("\tFinds 'Y' : ",a.find('Y'))
print ("\tConverts in lower case: ",a.lower())
print ("\tConverts in upper case: ",a.upper())
print ("\tReplace 'a' with 'o': ",a.replace('a','o'))
print ("\tRemoves white spaces at front and end: ",a.strip())
print()

print("\t********<DICTIONARY OPERATIONS>********")
#dictionary operations using library functions
print("\tActual Dictionary: ",c)
print("\t",c.keys())
print("\t",c.values())
print("\t",c.items())
c.pop(2)
print("\tpoped second value on key 2: ",c)
c.popitem()
print("\tpoped the last item in the dictonary: ",c)
c.clear()
print("\tDictionary has been cleared printing blank dictionary: ",c)
