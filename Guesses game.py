import random
n=random.randint(0,100)
a=-1
guesses=0
while(a!=n):
    guesses+=1
    a=int(input("enter your number:"))
    if(a>n):
        print("lower number please")
    else:
        print("higher number please")

print(f"guesses correctly in {guesses}guesses")