#include <stdio.h>
#include <stdbool.h>

void menu_P();
void check_winner(char board[9]);
void board_P(char board[9]);
void player_O(char *p, char player);
void player_X(char *p, char player);

int main(){
    char board[9] = {'0','1','2',
                     '3','4','5',
                     '6','7','8'};

    char *board_p = board;

    while (true)
    {
        int user = 0;
        menu_P();
          
        printf("What's your choice: ");
        scanf("%d", &user);
        while ((getchar()) != '\n'); 
        
        if (user == 1){
            char player ;
            printf("\t\nplayer X: \n");

            board_P(board);

            printf("\nWhats's your Move: ");
            scanf("%c", &player);
            while ((getchar()) != '\n'); 
            
            player_X(board_p, player);

            for (int i = 0; i < 9 ; i = i + 1){
                printf("%c",board[i]);
            }
            
        }else if (user == 2){
            // ### To Do later ###
        }else if (user == 3){
            printf("Good Bye!\n");
            break;
        }else{
            printf("invalid value!\n");
        }
        
    }


    return 0;
}

void player_X(char *p, char player){
    int index = player - '0';

    if (index >= 0 && index < 9) {
        *(p + index) = 'X';
    }else {
        printf("Invalid move!\n");
    }
}

void player_O(char *p, char player){
    int index = player - '0';

    if (index >= 0 && index < 9) {
        *(p + index) = 'O';
    }else {
        printf("Invalid move!\n");
    }
}


void menu_P(){
    printf("\t----- MENU -----\n\n");
    printf("\t1- play with human\n");
    printf("\t2- play with computer\n");
    printf("\t3- exit\n\n");
}

void board_P(char board[9]){
    printf("\t  %c  |  %c  |  %c  \n", board[0],board[1],board[2]);
            printf("\t-----------------\n");
            printf("\t  %c  |  %c  |  %c  \n", board[3],board[4],board[5]);
            printf("\t-----------------\n");
            printf("\t  %c  |  %c  |  %c  \n\n", board[6],board[7],board[8]);
}

void check_winner(char board[9]) {
    if (
        (board[0] == 'X' && board[1] == 'X' && board[2] == 'X') ||
        (board[3] == 'X' && board[4] == 'X' && board[5] == 'X') ||
        (board[6] == 'X' && board[7] == 'X' && board[8] == 'X') ||
        (board[0] == 'X' && board[3] == 'X' && board[6] == 'X') ||
        (board[1] == 'X' && board[4] == 'X' && board[7] == 'X') ||
        (board[2] == 'X' && board[5] == 'X' && board[8] == 'X') ||
        (board[2] == 'X' && board[4] == 'X' && board[6] == 'X') ||
        (board[0] == 'X' && board[4] == 'X' && board[8] == 'X')
    ) {
        printf("\n\nPlayer X wins!\n\n");
    }
    else if (
        (board[0] == 'O' && board[1] == 'O' && board[2] == 'O') ||
        (board[3] == 'O' && board[4] == 'O' && board[5] == 'O') ||
        (board[6] == 'O' && board[7] == 'O' && board[8] == 'O') ||
        (board[0] == 'O' && board[3] == 'O' && board[6] == 'O') ||
        (board[1] == 'O' && board[4] == 'O' && board[7] == 'O') ||
        (board[2] == 'O' && board[5] == 'O' && board[8] == 'O') ||
        (board[2] == 'O' && board[4] == 'O' && board[6] == 'O') ||
        (board[0] == 'O' && board[4] == 'O' && board[8] == 'O')
    ) {
        printf("\n\nPlayer O wins!\n\n");
    }
}
