import random
print("Welcome to the Rock, Paper and Scissors game!")

user=input("Enter your name:").title()
def game():
 choice=["Rock","Paper","Scissors"]
 l=input(("Enter your choice:Rock,Paper or Scissor")).title()
 comp=random.choice(choice)

 if( l==comp):
  print("Its a tie")
 elif(l=="Rock"):
    if(comp=="Paper"):
      print("You won")
    else:
      print("You Lost")
 elif(l=="Paper"):
   if(comp=="Rock"):
     print("You Lost")
   else:
     print("You Won")
 elif(l=="Scissors"):
     if(comp=="Rock"):
       print("You Won")
     else:
       print("You Lost")
 else:
   print("Invalid input")
game()