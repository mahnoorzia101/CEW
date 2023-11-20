#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Stucture to store contact information
struct Contact {
    char name[50];
    char email[30];
    char phoneNumber[15];
};

int main(){

    struct Contact* addressbook = NULL;
    int numContacts = 0;

    while(1)
    {
        printf("\nAddress Book Menu\n");
        printf("1. Add Contact\n");
        printf("2. Delete Contact\n");
        printf("3. View Contact\n");
        printf("Enter Your Choice: ");

        int choice;
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                // Add a new contact
                numContacts ++;

                if(numContacts == 1){
                    addressbook = (struct Contact*)malloc(1*sizeof(struct Contact));
                }else{
                    addressbook = (struct Contact*)realloc(addressbook, numContacts*sizeof(struct Contact));
                }

                if(addressbook == NULL){
                    printf("Memory not allocated.\n");
                    return 0;
                }
                else{
                    printf("Enter Contact Details:\n");
                    printf("Name: ");
                    scanf("%s", addressbook[numContacts - 1].name);
                    printf("Email: ");
                    scanf("%s", addressbook[numContacts - 1].email);
                    printf("Phone Number: ");
                    scanf("%s", addressbook[numContacts - 1].phoneNumber);
                }
                break;
            case 2:
                // Delete Contact
                if(numContacts > 0)
                {
                    int contactIndex;
                    printf("Enter Index of contact to be deleted (0 - %d): ", numContacts - 1);
                    scanf("%d", &contactIndex);

                    if(contactIndex > 0 && contactIndex < numContacts){
                        for(int i= contactIndex; i < numContacts; i++){
                            addressbook[i] = addressbook[i+1];
                        }
                    }
                    numContacts --;
                    addressbook = (struct Contact*)realloc(addressbook, numContacts* sizeof(struct Contact));

                }else{
                    printf("Aderss Book is empty!\n");
                }
                break;

            case 3:
            // View Contact
            if(numContacts>0){
                printf("Adress Book.\n");
                for(int i = 0; i< numContacts; i++){
                    printf("Contact no.%d\n", i+1);
                    printf("Name: %s\n", addressbook[i].name);
                    printf("Email: %s\n", addressbook[i].email);
                    printf("Phone Number: %s\n", addressbook[i].phoneNumber);
                    printf("\n");
                }

            }else{
                printf("Aaress Book is empty!\n");
            }

            case 4:
            // To Exit
            free(addressbook);
            return 0;

            default:
            printf("Invalid Choice!\n");
            break;
        }
    }

    return 0;

}