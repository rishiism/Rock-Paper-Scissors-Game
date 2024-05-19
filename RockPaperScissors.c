#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void printChoice(int choice){
    if (choice == 1){
        printf("Rock");
    }
    else if (choice == 2){
        printf("Paper");
    }
    else if (choice == 3){
        printf("Scissors");
    }
}

int main(){
    int user, comp;
    char playAgain;
    srand(time(NULL));

    do{
        // user input
        printf("Enter your choice:\n");
        printf("1. Rock\n2. Paper\n3. Scissors\n");
        printf("Your choice: ");
        scanf("%d", &user);

        // check for valid input
        if (user < 1 || user > 3){
            printf("Invalid choice, please try again.\n");
            continue;
        }

        // computer's random choice
        comp = rand()%3 + 1;

        // print choices
        printf("You chose: ");
        printChoice(user);
        printf("\nComputer chose: ");
        printChoice(comp);
        printf("\n");

        // determine the winner
        if (user == comp){
            printf("It's a draw!\n");
        }
        else if((user == 1 && comp == 3) || 
                (user == 2 && comp == 1) || 
                (user == 3 && comp == 2)) {
            printf("You win!\n");
        } else {
            printf("You lose!\n");
        }

        // Ask to play again
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);
    }while (playAgain == 'y' || playAgain == 'Y');
    return 0;
}