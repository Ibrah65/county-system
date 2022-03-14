/*County Library System
by Ibrahim
Feb 2022
MIT License
C99 Compiler
*/
#include <stdio.h>
#include <stdlib.h>

struct Patron{
char name[100];
char email[50];
char password[30];
int is_staff;
};
struct Book{
char name[100];
char Author[50];
char password[30];
int is_novel;
};
void add_patron(){
struct Patron patron;
printf("Enter name:");
getchar();
gets(patron.name);
printf("Enter Email:");
gets(patron.email);
printf("Enter initial Password:");
gets(patron.password);
printf("Enter 1 if staff 0 otherwise:");
scanf("%d",&patron.is_staff);
printf("Patron %s successfully added\n",patron.name);
}
void add_book(){
struct Book book;
printf("Enter name:");
getchar();
gets(book.name);
printf("Enter Email:");
gets(book.Author);
printf("Enter initial Password:");
gets(book.password);
printf("Enter 1 if staff 0 otherwise:");
scanf("%d",&book.is_novel);
printf("Book %s successfully added\n",book.name);
}

void execute_action(int action);
int menu(){
    int action;
        printf("Select An Action Below...\n");
        printf("1. Add New Patron\n");
        printf("2. View All Patrons\n");
        printf("3. Add New Resources\n");
        printf("4. View All Resources\n\n");
        printf("Your Selection: \n");
        scanf("%d", &action);
        if (action < 1 || action > 4){
            printf("Invalid Action. Try Again!\n\n");
        }
        return action;
}


void execute_action(int action);
int action(){
        int action;
        printf("Select An Action Below...\n");
        printf("1. Add New Book\n");
        printf("2. View All Books\n");
        printf("3. Add New Resources\n");
        printf("4. View All Resources\n\n");
        printf("Your Selection: \n");
        scanf("%d", &action);
        if (action < 1 || action > 4){
            printf("Invalid Action. Try Again!\n\n");
        }
        return action;
}
void execute_action(int action) {
    switch (action) {
    case 1:
        add_patron();
        break;
    case 2:
        printf("Here is the list of Patron\n");
        break;
    case 3:
        printf("Adding New Resources\n");
        break;
    case 4:
        printf("Here Is the list of Resources\n");
        break;
    default:
        printf("Wrong Entry\n");

    }

}

void execute_action(int action);
{
    switch (action) {
    case 1:
        add_book();
        break;
    case 2:
        printf("Here is the list of Books\n");
        break;
    case 3:
        printf("Adding New Resources\n");
        break;
    case 4:
        printf("Here Is the list of Resources\n");
        break;
    default:
        printf("Wrong Entry\n");

    }

}
int main(){
    int action;
    char title[100] = "COUNTY LIBRARY SYSTEM";
    char status[100] = "Welcome Ibrah";
    printf("\n\n\n\t\t\t   *********************\n\t\t\t%s\n \t\t\t    %s\n\t\t\t   ********************\n\n", title, status);
    execute_action(menu());
    return 0;
}
