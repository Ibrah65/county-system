/*County Library System
by Ibrahim Haro
Feb 2022
MIT License
C99 compiler
*/

#include <stdio.h>
#include <stdlib.h>
int menu ()
{
    int action;
    printf("Select an action:\n");
    printf("1. Add new patron\n");
    printf("2. view all patrons\n");
    printf("3. view books\n");    printf("Select an action:\n");
    printf("1. Add new patron\n");
    printf("2. view all patrons\n");
    printf("3. view books\n");
    printf("4. Add new book\n");
    printf("4. Add new book\n");
    printf("Your action:");
    scanf("%d",&action);
    if(action<1||action>4){
        printf("Invalid action. Try again\n");
       }
    return action;
  }

  void execute_action(int action){
      switch(action) {
    case 1:
          printf("adding a new patron\n");
          break;
    case 2:
          printf("Here is a list of patrons \n");
          break;
    case 3:
          printf("Here is a list of all books\n");
          break;
    case 4:
          printf("adding a new book\n");
          break;
    default:
        printf("Invalid action.\n");
      }
  }



int main()
{
    int action;
    printf("COUNTY LIBRARY SYSTEM\n");
    printf("WELCOME Ibrah/n");
    execute_action(menu());
    return 0;
}
