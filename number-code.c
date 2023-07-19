#include<stdio.h>
#include<stdlib.h>


int main()
{
    double firstInput;
    int option, count = 0;
    char choice;

    printf("Welcome! \n");

    do{

    printf("Options for number types.");
    printf("options: \n");

    printf("1. Positive  or Negative or Neutral. \n");
    printf("2. Odd  or Even. \n");
    printf("3. Prime  or Composite. \n");
    printf("4. Exit \n");

    printf("Choose an option see your number's type. : ");
    scanf("%d",&option);
    
    switch(option)
    {
        case 1: 
        printf("Enter your Number: ");
        scanf("%lf",&firstInput);

        if (firstInput > 0 )
        {
            printf("%lf is a positive number.\n",firstInput);
        }
        else if (firstInput < 0)
        {
            printf("%lf is negative number.\n",firstInput);
        }
        else
        {
            printf("%lf is neutral number.\n",firstInput);
        }

        break;
        
        case 2: 

        printf("Enter your Number: ");
        scanf("%lf", &firstInput);
        if ( (int)firstInput %2 == 0)
        {
            printf("%lf is an even number.\n",firstInput);
        }
        else 
        {
            printf("%lf is odd number.\n",firstInput);
        }

        break;

        case 3:
            
            printf("Enter your Number: ");
            scanf("%lf", &firstInput);

            if (firstInput == 0 || firstInput == 1)
            {
                printf("%lf is prime number.\n",firstInput);
            }

        for ( int i = 1; i <= firstInput; i++)
        {
            if ((int)firstInput % i == 0)
            {
             count++;
            }
        }
        if (count == 2)
        {
            printf("%lf is prime number.\n",firstInput);

        }
        else
        {
            printf("%lf is a composite number.\n",firstInput);
        }
        
        break;

        case 4:
        exit(0);
        
    }
    
    printf("Do you want to continue again?\n");
    printf("If yes press y or press any key to terminate the program. : ");
    scanf(" %c", &choice);
    }while(choice == 'y' || choice == 'Y');
    return 0;
}