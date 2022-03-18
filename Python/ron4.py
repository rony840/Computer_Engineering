file1=open("demo.txt","w")
file1.write("Welcome to OSTL")
file1.close()
file2=open("demo.txt","a")
a='\nGreetings, this text is appended to the file'
file2.write(a)
file2.close()
file3=open("Demo.txt","r")
print(file3.read())



fname = "demo.txt"

num_lines = 0
num_words = 0
num_chars = 0

with open(fname, 'r') as f:
    for line in f:
        words = line.split()

        num_lines += 1
        num_words += len(words)
        num_chars += len(line)
    
f.close()
print(num_lines)
print(num_words)
print(num_chars)
