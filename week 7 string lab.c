#include <stdio.h>
#include <string.h>

void removeNewline(char *str) {
    str[strcspn(str, "\n")] = '\0';
}

int main(void)
{
    char supplierName[100];
    char email[100];
    char phone[30];
    char town[50];

    char backupName[100];
    char description[200];

    printf("--- STRING EXERCISES ---\n");

    printf("Enter supplier name: ");
    fgets(supplierName, sizeof(supplierName), stdin);
    removeNewline(supplierName);

    printf("Enter email: ");
    fgets(email, sizeof(email), stdin);
    removeNewline(email);

    printf("Enter phone: ");
    fgets(phone, sizeof(phone), stdin);
    removeNewline(phone);

    printf("Enter town: ");
    fgets(town, sizeof(town), stdin);
    removeNewline(town);

    printf("\nSUPPLIER DETAILS\n");
    printf("Name : %s\n", supplierName);
    printf("Email: %s\n", email);
    printf("Phone: %s\n", phone);
    printf("Town : %s\n", town);

    /* String Length */
    printf("\n--- STRING LENGTHS ---\n");
    printf("Supplier name length: %zu\n", strlen(supplierName));
    printf("Email length: %zu\n", strlen(email));
    printf("Town length: %zu\n", strlen(town));

    /* Supplier Search */
    printf("\n--- SUPPLIER SEARCH ---\n");
    char searchName[100];
    printf("Enter supplier name to search (exact match): ");
    fgets(searchName, sizeof(searchName), stdin);
    removeNewline(searchName);

    if (strcmp(supplierName, searchName) == 0) {
        printf("Supplier found.\n");
    } else {
        printf("Supplier not found.\n");
    }

    /* Copying Supplier Information */
    strcpy(backupName, supplierName);
    printf("\n--- BACKUP COPY ---\n");
    printf("Original Name: %s\n", supplierName);
    printf("Backup Name  : %s\n", backupName);

    /*Construct a Supplier Description */
    strcpy(description, supplierName);
    strcat(description, " operates in ");
    strcat(description, town);
    strcat(description, ".");
    
    printf("\n--- SUPPLIER DESCRIPTION ---\n");
    printf("%s\n", description);

    return 0;
}