import tkinter
import tkinter.ttk
from tkinter import messagebox
MainWindow=tkinter.Tk()
#MainWindow.bg='red'
MainWindow.title("My GUI")
MainWindow.geometry("460x460")

frame1=tkinter.Frame(MainWindow)
frame1.pack()
frame2=tkinter.Frame(MainWindow)
frame2.pack(side='top',fill="x")


lb1=tkinter.Label(frame1,text="Welcome to TCET Portal",
                  bg="blue",fg='yellow',
                  font="Arial 20 bold")
lb1.pack()

#student's name
lb2=tkinter.Label(frame2,text="First Name: ",
                  font="10")
lb2.grid(row=1,sticky='e')

tb1=tkinter.Entry(frame2)
tb1.grid(row=1,column=1)


#surname
lb3=tkinter.Label(frame2,text="Last Name: ",
                  font="10")
lb3.grid(row=3,sticky='e')
tb2=tkinter.Entry(frame2)
tb2.grid(row=3,column=1)

#father's name
lb4=tkinter.Label(frame2,text="Father's Name: ",
                  font="10")
lb4.grid(row=4,sticky='e')
tb3=tkinter.Entry(frame2,textvariable="str")
tb3.grid(row=4,column=1)

#gender
lb5=tkinter.Label(frame2,text="Gender: ",
                  font="10")
lb5.grid(row=5)

rb1=tkinter.Radiobutton(frame2,text="Male",font='6',value=1)
rb1.grid(row=6)

rb2=tkinter.Radiobutton(frame2,text="Female",font='6',value=2)
rb2.grid(row=6,column=1)


#roll no
lb6=tkinter.Label(frame2,text="Roll No: ",
                  font="10")
lb6.grid(row=7)

a=[]
for i in range(0,100):
    a.append(i)

cb1=tkinter.ttk.Combobox(frame2)
cb1['values']=(a)
cb1.current(1)
cb1.grid(row=7,column=1)

#branch
lb7=tkinter.Label(frame2,text="Branch: ",
                  font="10")
lb7.grid(row=8)
Lb = tkinter.Listbox(frame2) 
Lb.insert(1, 'CMPN') 
Lb.insert(2, 'IT') 
Lb.insert(3, 'CIVIL') 
Lb.insert(4, 'MECH')
Lb.insert(5, 'EXTC')
Lb.insert(6, 'ETRX')
 
Lb.grid(row=8,column=1) 

#Interest
lb8=tkinter.Label(frame2,text="Interests: ",
                  font="10")
lb8.grid(row=9)
frame3=tkinter.Frame(MainWindow)
frame3.pack()
chb1 = tkinter.Checkbutton(frame3, text='Computer Science').grid(row=10,sticky='w') 
chb2 = tkinter.Checkbutton(frame3, text='Electronics').grid(row=11,sticky='w') 
chb3 = tkinter.Checkbutton(frame3, text='Arts').grid(row=11,column=1,sticky='w')
chb4 = tkinter.Checkbutton(frame3, text='Multimedia').grid(row=10,column=1,sticky='w')
chb5 = tkinter.Checkbutton(frame3, text='Business Management').grid(row=10,column=2,sticky='w')
chb6 = tkinter.Checkbutton(frame3, text='Others').grid(row=11,column=2,sticky='w')

def Save_data():
    print("clicked")
    t1=tb1.get()
    t2=tb2.get()
    t3=tb3.get()
    print(rb2.value())
    file=open("Data.txt","w")
    file.close()
    fname = "Data.txt"

    num_words = 0
    with open(fname, 'r') as f:
        for line in f:
            words = line.split()
            num_words += len(words)
    
    f.close()
    if(num_words==0):
        file=open("Data.txt","w")
        file.write("************<NEW STUDENT>***********")
        file.write("\nFirst Name: ")
        file.write(t1)
        file.write("\nMiddle Name: ")
        file.write(t2)
        file.write("\nLast Name: ")
        file.write(t3)
        file.close()
    else:
        file=open("Data.txt","a")
        file.write("\n************<NEW STUDENT>***********")
        file.write("\nFirst Name: ")
        file.write(t1)
        file.write("\nMiddle Name: ")
        file.write(t2)
        file.write("\nLast Name: ")
        file.write(t3)
        file.close()
    Msg()
    
#confirmation window to submit data
def Confirmation():
    ConWindow=tkinter.Tk()
    ConWindow.title("Alert!")
    ConWindow.geometry("260x100")
    frame1=tkinter.Frame(ConWindow)
    frame1.pack()
    frame2=tkinter.Frame(ConWindow)
    frame2.pack(side='top',fill="x")
    lb1=tkinter.Label(frame1,text="Are you sure you want to continue?",font="5")
    lb1.pack()
    b1= tkinter.Button(frame2, text='Yes', width=15, command=lambda: (Save_data(),ConWindow.destroy())) 
    b1.pack()
    b2= tkinter.Button(frame2, text='No', width=15, command=lambda: ConWindow.destroy()) 
    b2.pack()

#confirmation message that data has been submitted
def Msg():
    messagebox.showinfo("Confirmation","Your data has been Submitted!")

#Submit Button
frame3=tkinter.Frame(MainWindow)
frame3.pack()
b1= tkinter.Button(frame3, text='Submit',font="bold", width=25, command=lambda: Confirmation()) 
b1.pack()











