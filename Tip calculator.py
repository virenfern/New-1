
user=input("Enter your name:")
k=user.title()
print(f"Welcome to your tip calculator {k}:")
def total():
 total=float(input(f"Enter the amount of your total bill Rs.:"))
 tip=float(0.1*(total))
 print(f"Your bill is {total}, hence {k} your tip must be Rs. {tip}")
total()

 