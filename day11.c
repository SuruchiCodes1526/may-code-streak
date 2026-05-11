#include <stdio.h>

int main() {
    int choice, qty;
    float total = 0;

    while (1) {
        printf("
--- Menu ---
");
        printf("1. Tea - Rs 10
");
        printf("2. Coffee - Rs 20
");
        printf("3. Burger - Rs 50
");
        printf("4. Exit
");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 4) {
            break;
        }

        printf("Enter quantity: ");
        scanf("%d", &qty);

        switch (choice) {
            case 1: total += qty * 10; break;
            case 2: total += qty * 20; break;
            case 3: total += qty * 50; break;
            default: printf("Invalid choice!
");
        }
    }

    printf("Total bill = Rs %.2f
", total);
    return 0;
}
