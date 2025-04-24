#include <stdio.h>
#include <string.h>

// Function to display the food menu
void displayMenu() {
    printf("====== Welcome to the Food Billing System ======\n");
    printf("Code\tItem\t\tPrice\n");
    printf("1\tBurger\t\tRs. 50\n");
    printf("2\tPizza\t\tRs. 120\n");
    printf("3\tPasta\t\tRs. 100\n");
    printf("4\tFries\t\tRs. 60\n");
    printf("5\tCold Drink\tRs. 40\n");
    printf("===============================================\n");
}

int main() {
    int code, quantity, total = 0;
    char choice;

    do {
        displayMenu();

        // Taking user input for food item
        printf("Enter the code of the item you want to order: ");
        scanf("%d", &code);

        printf("Enter quantity: ");
        scanf("%d", &quantity);

        // Decision making based on item code
        switch (code) {
            case 1:
                total += 50 * quantity;
                printf("Burger added to your order.\n");
                break;
            case 2:
                total += 120 * quantity;
                printf("Pizza added to your order.\n");
                break;
            case 3:
                total += 100 * quantity;
                printf("Pasta added to your order.\n");
                break;
            case 4:
                total += 60 * quantity;
                printf("Fries added to your order.\n");
                break;
            case 5:
                total += 40 * quantity;
                printf("Cold Drink added to your order.\n");
                break;
            default:
                printf("Invalid code. Please select from the menu.\n");
        }

        // Ask user if they want to order more
        printf("Do you want to order more? (y/n): ");
        scanf(" %c", &choice); // Notice the space before %c to consume newline

    } while (choice == 'y' || choice == 'Y');

    // Final bill
    printf("\n====== Final Bill ======\n");
    printf("Total Amount: Rs. %d\n", total);
    printf("Thank you for ordering. Visit again!\n");

    return 0;
}
