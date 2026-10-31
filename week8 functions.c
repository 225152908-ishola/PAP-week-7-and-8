#include <stdio.h>

/* Function Prototypes */
void displayWelcome();
float calculateVAT(float amount);
float calculateSalary(float basic, float housing, float transport);
float calculateBudget(float revenue, float expenses);
int searchEmployee(int id, int ids[], int size);

int main(void)
{
    displayWelcome();

    /* Task 2: VAT */
    float amount = 1000.0;
    printf("\nEnter amount for VAT: ");
    scanf("%f", &amount);
    printf("VAT (15%%): %.2f\n", calculateVAT(amount));

    /* Task 3: Salary */
    float basic, housing, transport;
    printf("\nEnter Basic, Housing, and Transport allowances: ");
    scanf("%f %f %f", &basic, &housing, &transport);
    printf("Gross salary: %.2f\n", calculateSalary(basic, housing, transport));

    /* Task 4: Budget */
    float revenue, expenses;
    printf("\nEnter Revenue and Expenses: ");
    scanf("%f %f", &revenue, &expenses);
    float budgetResult = calculateBudget(revenue, expenses);
    
    printf("Budget balance: %.2f\n", budgetResult);
    if (budgetResult > 0) {
        printf("SURPLUS\n");
    } else if (budgetResult < 0) {
        printf("DEFICIT\n");
    } else {
        printf("BALANCED\n");
    }

    /* Task 6: Search Employee */
    int employeeIDs[] = {101, 102, 103, 104, 105};
    int searchID;
    printf("\nEnter employee ID to search: ");
    scanf("%d", &searchID);
    
    int position = searchEmployee(searchID, employeeIDs, 5);
    if (position != -1) {
        printf("Employee found at position %d.\n", position);
    } else {
        printf("Employee not found.\n");
    }

    return 0;
}

/* Function Definitions */
void displayWelcome() {
    printf("Welcome to the Municipal Financial Management System\n");
    printf("-----------------------------------------------------\n");
}

float calculateVAT(float amount) {
    return amount * 0.15;
}

float calculateSalary(float basic, float housing, float transport) {
    return basic + housing + transport;
}

float calculateBudget(float revenue, float expenses) {
    return revenue - expenses;
}

int searchEmployee(int id, int ids[], int size) {
    for (int i = 0; i < size; i++) {
        if (ids[i] == id) {
            return i;
        }
    }
    return -1;
}