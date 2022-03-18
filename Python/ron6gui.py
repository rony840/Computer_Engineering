import tkinter

def donothing():
    print ('IT WORKED')

root=tkinter.Tk()
root.title(string='LOGIN PAGE')

frame1=tkinter.Frame(root)
frame1.pack(side='top',fill="x")

frame2=tkinter.Frame(root)
frame2.pack(side='top', fill='x')

m=tkinter.Menu(frame1)
root.config(menu=m)

submenu=tkinter.Menu(m)
m.add_cascade(label='File',menu=submenu)
submenu.add_command(label='New File', command=donothing)
submenu.add_command(label='Open', command=donothing)
submenu.add_separator()
submenu.add_command(label='Exit', command=frame1.quit)


editmenu=tkinter.Menu(m)
m.add_cascade(label='Edit', menu=editmenu)
editmenu.add_command(label='Cut',command=donothing)
editmenu.add_command(label='Copy',command=donothing)
editmenu.add_command(label='Paste',command=donothing)
editmenu.add_separator()
editmenu.add_command(label='Exit', command=frame1.quit)


# **** ToolBar *******

toolbar=tkinter.Frame(frame1,bg='grey')
toolbar.pack(side="top",fill='x')
btn1=tkinter.Button(toolbar, text='Print', command=donothing)
btn2=tkinter.Button(toolbar, text='Paste', command=donothing)
btn3=tkinter.Button(toolbar, text='Cut', command=donothing)
btn4=tkinter.Button(toolbar, text='Copy', command=donothing)
btn1.pack(side="left",padx=2)
btn2.pack(side="left",padx=2)
btn3.pack(side="left",padx=2)
btn4.pack(side="left",padx=2)

# ***** LOGIN CREDENTIALS ******
label=tkinter.Label(frame2,text='WELCOME TO MY PAGE',fg='red',bg='white')
label.grid(row=3,column=1)

label1=tkinter.Label(frame2,text='Name')
label2=tkinter.Label(frame2,text='Password')
label1.grid(row=4,column=0,sticky='e')
label2.grid(row=5,column=0,sticky='e')

entry1=tkinter.Entry(frame2)
entry2=tkinter.Entry(frame2)
entry1.grid(row=4,column=1)
entry2.grid(row=5,column=1)

chk=tkinter.Checkbutton(frame2,text='KEEP ME LOGGED IN')
chk.grid(row=6,column=1)

btn=tkinter.Button(frame2,text='SUBMIT')
btn.grid(row=7,column=1)




# **** StatusBar ******************

status=tkinter.Label(root,text='Loading',bd=1,relief="sunken",anchor='w')
status.pack(side='bottom', fill='x')

