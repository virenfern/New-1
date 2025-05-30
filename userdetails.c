#include <stdio.h>
#include <string.h>
#include<Stdlib.h>


void user(char name[])
{
    printf("Welcome to Our Online Ordering System!\n");
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    name[strcspn(name, "\n")] = '\0';
}


void ordering() 
{
    
    int price_array[11] = {260, 270, 280, 225, 270,220,100,240,250,270};
    char *m[11] = {"Hummus & Bell Pepper Wrap(VEG)", "Devilled Egg & Sandwiched Wrap(NON-VEG)", "Peri-Peri Chicken Wrap(NON-VEG)", "Estelle Snadwich(VEG)", "Olive & Feta Cheese Wrap(VEG)","Salted Caramel Cream Cup(VEG)", "Gadbad Ice Cream (VEG)","Salted Fries(VEG)", "Cajun Spiced Fries(VEG)", "Hummus with Olives and Toasted Bread(VEG)"};
    int id = 1;
    int userorders[11] = {0};
    while (id) {
        printf("\nEnter your Order ID (1-10) or 0 to Exit:\n");
        scanf("%d", &id);
        int h;
        if (id >= 1 && id <= 10) {
            printf("%s chosen\n", m[id - 1]);
            printf("Number of %s: ", m[id - 1]);
            scanf("%d", &h);
            userorders[id - 1] = h;
        } 
        else if (id != 0)
        {
            printf("Invalid Order ID!\n");
        } 
        else 
        {
            printf("Exiting\n");
        }
    }
    printf("\nOrder Summary:\n");
    for (int i = 0; i < 10; i++) 
    {
        if (userorders[i] > 0) {
            printf(" %s --> Number of Items ordered: %d --> ID: %d\n", m[i], userorders[i], i + 1);
        }
    }
    printf("Confirm your Order: Press 1 for YES / Press 0 for EDIT ");
    int confirm;
    scanf("%d",&confirm);
    if(confirm!=1)
    {
     int orderchange=1;
     while (orderchange==1) 
     {
        printf("Your Current Orders:\n");
        for (int i = 0; i < 10; i++) 
        {
            if (userorders[i] > 0)
            {
                printf(" %s/ %d ordered/ID %d\n", m[i], userorders[i],i+1);
            }
        }
        int a, b;
        printf("Enter the Order ID you want to change (1-10): ");
        scanf("%d", &a);
        if (a < 1 || a > 10) 
        {
            printf("Invalid ID.\n");
        } 
        else
        {
            printf("Your Item: %s / Number of Items: %d / Total Price: Rs %d\n", m[a - 1], userorders[a - 1], price_array[a - 1] * userorders[a - 1]);
            printf("Enter new quantity: ");
            scanf("%d", &b);
            userorders[a - 1] = b;
            printf("Order Updated!\n");
        }

        printf("Edit another order? Enter 1 to continue / 0 to finish: ");
        scanf("%d", &orderchange);  
     }
    }
   
    
     printf("Final Bill\n");
     int bill=0;
     for (int i = 0; i < 10; i++) 
     {
        if (userorders[i] > 0) 
        {
            if(userorders[i]>2)
            {
             bill=bill+((price_array[i] * userorders[i])+8);
             printf("Item:%s / Number of Items:%d  / Amount:Rs.%d\n",m[i],userorders[i],(price_array[i] * userorders[i])+25);        
            }
            else if(userorders[i]>4)
            {
             bill=bill+ ((price_array[i] * userorders[i])+8);
             printf("Item:%s / Number of Items:%d  / Amount:Rs.%d\n",m[i],userorders[i],(price_array[i] * userorders[i])+50); 
            }
            else
            {
             bill=bill+((price_array[i] * userorders[i]));
             printf("Item:%s / Number of Items:%d  / Amount:Rs.%d\n",m[i],userorders[i],(price_array[i] * userorders[i])+10);
            }
        }
        
     }
    
    printf("Dear Customer your final bill is:Rs %d\n",bill);
    printf("Thank You For Ordering & Do Order Again!\n");
}


