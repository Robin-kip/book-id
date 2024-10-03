#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate, daysOverdue;
    float fineRate, fineAmount;

    // Taking input from the user
    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date (as an integer): ");
    scanf("%d", &dueDate);
    printf("Enter Return Date (as an integer): ");
    scanf("%d", &returnDate);

    // Calculate the days overdue
    daysOverdue = returnDate - dueDate;

    // Determine the fine rate based on the overdue days
    if (daysOverdue > 0 && daysOverdue <= 7) {
        fineRate = 20.0; // Fine for 1 to 7 days overdue
    } else if (daysOverdue > 7 && daysOverdue <= 14) {
        fineRate = 50.0; // Fine for 8 to 14 days overdue
    } else if (daysOverdue > 14) {
        fineRate = 100.0; // Fine for more than 14 days overdue
    } else {
        daysOverdue = 0; // No overdue if returned on or before due date
        fineRate = 0;    // No fine
    }

    // Calculate the fine amount
    fineAmount = fineRate * daysOverdue;

    // Display the results
    printf("\nBook ID: %d", bookID);
    printf("\nDue Date: %d", dueDate);
    printf("\nReturn Date: %d", returnDate);
    printf("\nDays Overdue: %d", daysOverdue);
    printf("\nFine Rate: Ksh %.2f per day", fineRate);
    printf("\nTotal Fine Amount: Ksh %.2f\n", fineAmount);

    return 0;
}
