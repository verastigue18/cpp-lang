#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USERNAME_LEN 32
#define MAX_PASSWORD_LEN 32

struct user {
    char username[MAX_USERNAME_LEN];
    char password[MAX_PASSWORD_LEN];
};

struct user users[1024];
int num_users = 0;

void register_user()
{
    printf("Enter a username: ");
    scanf("%s", users[num_users].username);

    printf("Enter a password: ");
    scanf("%s", users[num_users].password);

    num_users++;
}

int login()
{
    char username[MAX_USERNAME_LEN];
    char password[MAX_PASSWORD_LEN];

    printf("Enter a username: ");
    scanf("%s", username);

    printf("Enter a password: ");
    scanf("%s", password);

    for (int i = 0; i < num_users; i++) {
        if (strcmp(username, users[i].username) == 0 && strcmp(password, users[i].password) == 0) {
            return 1;
        }
    }

    return 0;
}

int main(int argc, char *argv[])
{
    while (1) {
        printf("1. Register\n");
        printf("2. Login\n");
        printf("3. Quit\n");

        int choice;
        scanf("%d", &choice);

        if (choice == 1) {
            register_user();
        } else if (choice == 2) {
            if (login()) {
                printf("Logged in successfully!\n");
            } else {
                printf("Invalid username or password.\n");
            }
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }

    return 0;
}
    
