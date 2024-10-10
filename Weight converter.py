print("Welcome to the weight converter:")
def lbs_kgs(weight):
    return weight *0.45
def kgs_lbs(weight):
    return weight/0.45
print("1.Convert lbs to kgs")
print("2.Convert kgs to lbs")
choice=int(input("if 1 or 2?"))
if(choice==1):
    weight=int(input("Enter the weight in lbs:"))
    kgs=lbs_kgs(weight)
    print(kgs)
else:
    weight=int(input("Enter the weight in kgs"))
    lbs=kgs_lbs(weight)
    print(lbs)