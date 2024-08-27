#include <stdio.h>

int main()
{
    printf("1-Addition\n");
    printf("2-Subtraction\n");
    printf("3-Multiplication\n");
    printf("4-Division\n");
    printf("5-Square Root\n");
    printf("6-Power\n");

    int choice;
    int mn1, mn2; //should move the vars into the cases
    double n1, n2, res;

    printf("Choose Calculator \n");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
        printf("You have chosen addition\n");
        printf("First number: \n");
        scanf("%d", &n1);
        printf("Second number: \n");
        scanf("%d", &n2);

        printf("Result: %d", n1 + n2);
        break;
    case 2:
        printf("You have chosen subtraction\n");
        printf("First number: \n");
        scanf("%d", &n1);
        printf("Second number: \n");
        scanf("%d", &n2);

        printf("Result: %d", n1 - n2);
        break;
    case 3:
        printf("You have chosen multiplication\n");
        printf("First number: \n");
        scanf("%d", &mn1);
        printf("Second number: \n");
        scanf("%d", &mn2);

        printf("Result: %d", mn1 * mn1);
        break;
    case 4:
        printf("You have chosen division\n");
        printf("First number: \n");
        scanf("%d", &n1);
        printf("Second number: \n");
        scanf("%d", &n2);

        printf("Result: %d", n1 / n2);
        break;
    case 5:
        printf("You have chosen square root\n");
        printf("Find root of: \n");
        scanf("%d", &n1);

        printf("Result: %lf",sqrt(n1));
        break;
    case 6:
        printf("You have chosen power\n");
        printf("First number: \n");
        scanf("%d", &n1);
        printf("To the power of: \n");
        scanf("%d", &n2);

        printf("Result: %lf", pow(n1, n2)); //always gives 1, datatype issue
        break;
    default:
        printf("Please enter a valid number");
    }

    return 0;
}
