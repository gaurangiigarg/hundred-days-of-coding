#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contact {
    char name[50];
    char phone_number[20];
    char email[50];
    char address[100];
};

void addContact();
void viewContacts();
void searchContact();
void deleteContact();
void editContact();

void clearInputBuffer() {
    while (getchar() != '\n');
}

int main() {
    int choice;

    while (1) {
        printf("\n\n------ CONTACT MANAGEMENT SYSTEM ------\n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Edit Contact\n");
        printf("5. Delete Contact\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        clearInputBuffer();

        switch (choice) {
            case 1: addContact(); break;
            case 2: viewContacts(); break;
            case 3: searchContact(); break;
            case 4: editContact(); break;
            case 5: deleteContact(); break;
            case 6: exit(0);
            default: printf("Invalid choice!\n");
        }
    }

    return 0;
}

void addContact() {
    struct contact c;
    FILE *fp = fopen("contacts.txt", "a");

    if (!fp) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter Name: ");
    fgets(c.name, sizeof(c.name), stdin);
    c.name[strcspn(c.name, "\n")] = '\0';

    printf("Enter Phone Number: ");
    fgets(c.phone_number, sizeof(c.phone_number), stdin);
    c.phone_number[strcspn(c.phone_number, "\n")] = '\0';

    printf("Enter Email: ");
    fgets(c.email, sizeof(c.email), stdin);
    c.email[strcspn(c.email, "\n")] = '\0';

    printf("Enter Address: ");
    fgets(c.address, sizeof(c.address), stdin);
    c.address[strcspn(c.address, "\n")] = '\0';

    fprintf(fp, "%s|%s|%s|%s\n", c.name, c.phone_number, c.email, c.address);

    fclose(fp);
    printf("Contact Added Successfully!\n");
}

void viewContacts() {
    struct contact c;
    FILE *fp = fopen("contacts.txt", "r");

    if (!fp) {
        printf("No contacts found!\n");
        return;
    }

    printf("\n----- Contact List -----\n");

    while (fscanf(fp, "%[^|]|%[^|]|%[^|]|%[^\n]\n",
                  c.name, c.phone_number, c.email, c.address) == 4) {

        printf("\nName        : %s\n", c.name);
        printf("Phone No.   : %s\n", c.phone_number);
        printf("Email       : %s\n", c.email);
        printf("Address     : %s\n", c.address);
    }

    fclose(fp);
}

void searchContact() {
    struct contact c;
    char name[50];
    int found = 0;

    FILE *fp = fopen("contacts.txt", "r");

    if (!fp) {
        printf("No contacts found!\n");
        return;
    }

    printf("Enter name to search: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    while (fscanf(fp, "%[^|]|%[^|]|%[^|]|%[^\n]\n",
                  c.name, c.phone_number, c.email, c.address) == 4) {

        if (strcmp(c.name, name) == 0) {
            printf("\nContact Found:\n");
            printf("Name        : %s\n", c.name);
            printf("Phone No.   : %s\n", c.phone_number);
            printf("Email       : %s\n", c.email);
            printf("Address     : %s\n", c.address);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Contact Not Found!\n");

    fclose(fp);
}

void deleteContact() {
    struct contact c;
    char name[50];
    int found = 0;

    FILE *fp = fopen("contacts.txt", "r");
    FILE *temp = fopen("temp.txt", "w");

    if (!fp) {
        printf("No contacts found!\n");
        return;
    }

    printf("Enter name to delete: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    while (fscanf(fp, "%[^|]|%[^|]|%[^|]|%[^\n]\n",
                  c.name, c.phone_number, c.email, c.address) == 4) {

        if (strcmp(c.name, name) != 0) {
            fprintf(temp, "%s|%s|%s|%s\n",
                    c.name, c.phone_number, c.email, c.address);
        } else {
            found = 1;
        }
    }

    fclose(fp);
    fclose(temp);

    remove("contacts.txt");
    rename("temp.txt", "contacts.txt");

    if (found)
        printf("Contact Deleted Successfully!\n");
    else
        printf("Contact Not Found!\n");
}

void editContact() {
    struct contact c;
    char name[50];
    int found = 0;

    FILE *fp = fopen("contacts.txt", "r");
    FILE *temp = fopen("temp.txt", "w");

    if (!fp) {
        printf("No contacts found!\n");
        return;
    }

    printf("Enter name to edit: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    while (fscanf(fp, "%[^|]|%[^|]|%[^|]|%[^\n]\n",
                  c.name, c.phone_number, c.email, c.address) == 4) {

        if (strcmp(c.name, name) == 0) {

            printf("Enter new name: ");
            fgets(c.name, sizeof(c.name), stdin);
            c.name[strcspn(c.name, "\n")] = '\0';

            printf("Enter new phone number: ");
            fgets(c.phone_number, sizeof(c.phone_number), stdin);
            c.phone_number[strcspn(c.phone_number, "\n")] = '\0';

            printf("Enter new email: ");
            fgets(c.email, sizeof(c.email), stdin);
            c.email[strcspn(c.email, "\n")] = '\0';

            printf("Enter new address: ");
            fgets(c.address, sizeof(c.address), stdin);
            c.address[strcspn(c.address, "\n")] = '\0';

            found = 1;
        }

        fprintf(temp, "%s|%s|%s|%s\n",
                c.name, c.phone_number, c.email, c.address);
    }

    fclose(fp);
    fclose(temp);

    remove("contacts.txt");
    rename("temp.txt", "contacts.txt");

    if (found)
        printf("Contact Updated Successfully!\n");
    else
        printf("Contact Not Found!\n");
}