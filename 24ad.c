    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    int playercard[10]; 
    int playertotal = 0;
    
    int playerindex = 0;

    void welcome()                           //no parameter no return (function 1)
    {
        printf("=== Welcome to BLACKJACK ===\n");
    }

    void display_card(int card)              //with parameter but no return (Funtion 2)
    {
        switch (card)
        {
            case 1 : printf ("Ace\n");
            break;
            
            case 11 : printf ("Jack\n");
            break;
            
            case 12 : printf ("Queen\n");
            break;
            
            case 13 : printf ("King\n");
            break;
            
            default:
            printf("%d\n", card);
            
        }
    }

    int draw_card()                             //with return value (Funtion 3)
    {
        return rand() % 13 + 1;
    }

    int card_values(int card)                  //function 4
    {
        switch (card)
        {
            case 1:
            return 1;

            case 11:
            return 10;

            case 12:
            return 10;

            case 13:
            return 10;

            default:
            return card;
        }
    }

    void deal_card()
    {
        playercard[playerindex] = draw_card();
        display_card(playercard[playerindex]);
        playertotal += card_values(playercard[playerindex]);
        playerindex++;
    }

//-----------------------------------------------------------------------------------------
    int main ()
    {
        int c=1;
        srand(time(0));
        welcome();

        printf("The player cards are\n");
        deal_card();
        deal_card();
        printf("\n Total value = %d\n", playertotal);

        while (c == 1)
        {
            printf("\n1. Hit\n2. Stand\n");
            printf("\nEnter your Choice: ");
            scanf("%d", &c);
            if (c==1)
            {
                deal_card();
            }
            printf("\nTotal value = %d\n", playertotal);
            if (playertotal > 21)
            {
                printf("\nBusted\nYou Lost");
                break;
            }
        }
    }