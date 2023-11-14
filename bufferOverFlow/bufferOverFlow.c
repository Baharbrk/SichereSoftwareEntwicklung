#include <stdio.h>
#include <string.h>
#include "userProfile.h"

int main() {
    char firstname[20]; // size of the firstname allowed for user input is larger than that in the createProfile function
    char lastname[20]; // size of the lastname allowed for user input is larger than that in the createProfile function
    char age[5];
    char hobbies[MAX_HOBBIES][MAX_HOBBY_LENGTH];

    printf("\nPlease enter your first name: ");
    fgets(firstname, 20, stdin);
    firstname[strcspn(firstname, "\n")] = 0;

    printf("\nPlease enter your last name: ");
    fgets(lastname, 20, stdin);
    lastname[strcspn(lastname, "\n")] = 0;

    printf("\nPlease enter your age: ");
    fgets(age, 5, stdin);
    age[strcspn(age, "\n")] = 0;

    printf("\nEnter up to %d hobbies, one per line:\n", MAX_HOBBIES);
    for (int i = 0; i < MAX_HOBBIES; i++) {
         printf("Hobby %d: ", i + 1);
        fgets(hobbies[i], sizeof(hobbies[i]), stdin);
        hobbies[i][strcspn(hobbies[i], "\n")] = 0;
        // Clear the stdin buffer
        int c;
    }
    
    createProfile(firstname, lastname, age, hobbies);
    return 0;
}

