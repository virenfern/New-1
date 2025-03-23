import random 
print("Welcome to password storer!:")
name=input("Enter your name user:").title()
chat={
    "Hello":["Hi there!","Hello"],
    "hi":["hello","hi"]
}

def response():
    user=input("").title()
    for key in chat:
        if (user==key):
            print(random.choice(chat[key]))
        else:
            print("Invalid response:")

def password():
    print(f"What password do you want {name}:")
    print("Enter the number!")
    ch=int(input("1.computer,2.lab,3.pesuacademy"))
    passwords=[ "0000",0000,"LeBron"]
    if(ch==1):
       print(passwords[0])
    elif(ch=="2"):
       print(passwords[1])
    elif(ch=="3"):
        print(passwords[3])
    else:
        print("Invalid entry:")
response()
password()
