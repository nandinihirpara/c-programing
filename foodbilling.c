// write program of food billing system.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int menu, item, quantity, amount1 = 0, amount2 = 0, amount3 = 0, amount4 = 0, total_amount = 0;
    char choice;
    printf("||----------------------------------------WELCOM OUR HOTEL--------------------------------------||\n");
    printf("\nEnter your choice:--\n");
    printf("[1] item menu for order.\n[2]Exit\n\nchioce is your:  ");
    scanf("%d", &menu);
    // system("cls");
    switch (menu)
    {
    case 1:
    menu:
        printf("||--------------------------------WELCOM TO MAIN MENU----------------------------------------||\n\n");
        printf("ITEM 1.= PONGAL       price = 150rs\n");
        printf("ITEM 2.= PURAN POLI   price = 200rs/pcs\n");
        printf("ITEM 3.= DAL BATI     price = 350rs\n");
        printf("ITEM 4.= MISHTI DOI   price = 100rs\n");
        printf("chooze item up to 4......:");
        scanf("%d", &item);
        switch (item)
        {
        case 1:
            printf("\n you have selected PONDAL\n");
            printf("Enter the quantity");
            scanf("%d", &quantity);
            amount1 = quantity * 150;
            printf("\n amount = %d.rs", amount1);
            printf("\n total bill =%d.rs\n\n", total_amount);
            printf("\n-------------------------------------------------------------------------------------------------------");
            break;
        case 2:
            printf("\n you have selected PURAN POLI \n");
            printf("Enter the quntitiy");
            scanf("%d", &quantity);
            amount2 = quantity * 200;
            printf("\n amount = %d.rs", amount2);
            printf("\ntotal bill = %d.rs\n\n", total_amount);
            printf("\n------------------------------------------------------------------------------------------------------------");
            break;
        case 3:
            printf("\n you have selected PURAN POLI \n");
            printf("Enter the quntitiy");
            scanf("%d", &quantity);
            amount3 = quantity * 350;
            printf("\n amount = %d.rs", amount3);
            printf("\ntotal bill = %d.rs\n\n", total_amount);
            printf("\n------------------------------------------------------------------------------------------------------------");
            break;
        case 4:
            printf("\n you have selected PURAN POLI \n");
            printf("Enter the quntitiy");
            scanf("%d", &quantity);
            amount4 = quantity * 100;
            printf("\n amount = %d.rs", amount4);
            printf("\ntotal bill = %d.rs\n\n", total_amount);
            printf("\n------------------------------------------------------------------------------------------------------------");
            break;
        default:
            printf("Error.....please select up to 4.\a");
        }
        printf("\n\ndo you want to place more order ?\n(pless 'y'for YES)\n(pless'n'for NO)\n");
        scanf("%s", &choice);
        printf("\n-------------------------------------------------------------------------------------------------------------\n\n");
        // system("cls");
        if (choice == 'y')
        {
            goto menu;
        }
        else if (choice == 'n')
            goto bill;
    case 2:
    bill:
        printf("\n''''''''''''''''''''''''''bill''''''''''''''''''''\n\n");
        total_amount = amount1 + amount2 + amount3 + amount4;
        printf("\n total bill =%d.rs\n\n", total_amount);
        printf("\n----------------------------------------------------------------------------------------------\n");
        printf("/////////////////////////////////////THANKS FOR VISITING//////////////////////////////////////////\n");
        printf("\n------------------------------------------------------------------------------------------------\n");
        break;
    }
    return 0;
}
