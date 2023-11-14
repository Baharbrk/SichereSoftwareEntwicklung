#include<stdio.h>
#include<string.h>

struct user {
    char username[50];
    char password[50];
};

void getInput(char *ch) {
    if (fgets(ch, 49, stdin) != NULL) {
        ch[strcspn(ch, "\n")] = 0;
    }
}

int main()
{
    char correctUsername[] = "admin";
    char correctPassword[] = "1234";
    char inputUsername[50];
    char inputPassword[50];
    
    printf("\n\t\t\t\t ------- Welcome Please login -------");
    printf("\n Please enter your username: ");
    getInput(inputUsername);

    // Check if username is empty
    if (inputUsername[0] == '\0') {
        printf("\nUsername cannot be empty.");
        return 1;
    }

    printf("\n Please enter your password: ");
    getInput(inputPassword);

    // Check if password is empty
    if (inputPassword[0] == '\0') {
        printf("\nPassword cannot be empty.");
        return 1;
    }

    if(strcmp(inputUsername, correctUsername) == 0){
        if (strcmp(inputPassword, correctPassword) == 0){
            printf("\nUser successfully logged in...");
        } else {
            printf("\n Password is invalid");
        }
    } else {
        printf("\n Username is invalid");
    }

    return 0;
}