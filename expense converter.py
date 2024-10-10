print("Expense converter:")
n=int(input("Enter the number of expenses you have:"))

sum=0
i=1
while(i<=n):
 i+=1
 expenses=int(input("Enter your expenses in Dhs:"))
 sum+=expenses

def converter():
   newsum=sum*20
   print("your expenses in rs is",newsum)
converter()

