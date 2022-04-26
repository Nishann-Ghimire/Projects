// Write a program for tic tac toe game
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #if WIN32
// #include <conio.h>
// #elif __unix
// #include <ncurses.h>
// #endif
#include "functions.h"
#include "landing_page.h"

int arrayPos(int n, int j); // for tracking array position in single digit number
int checkWin(int *arr, int size);
int main()
{
    // initializating varibles and required array
    char value[3][3];
    int tracker;
    int row = 0, col = 0;
    int playerOne[] = {0, 0, 0, 0, 0};
    int playerTwo[] = {0, 0, 0, 0, 0};
    char playerOneName[] = "Player1";
    char playerTwoName[] = "Player2";
    int x1 = 0, x2 = 0;
    int win1 = 0;
    int win2 = 0;
    int checking_time = 0;
    int last = 0;
    int end = 0;
    int winner = 0;
    int size1 = 0;
    int size2 = 0;
    int case_num;
    int main_menu = 1;

    art_work();
    while (main_menu)
    {
        // initializating null value in array
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                value[i][j] = ' ';
            }
        }
        menu();
        printf("\t\t\t\t\t\t Enter your choice : ");
        scanf("%d", &case_num);

        switch (case_num)
        {

        case 1:
#if WIN32
            int winfun();
#elif __unix
            system("clear");
#endif
            printf("\n\n\n\n\n\n\n\n\n\n");
            fflush(stdin);
            printf("\t\t\t\t\t\t***************** Start Game ************\n");
            printf("\t\t\t\t\t\t\t\tEnter your name : \t\n");
            printf("\t\t\t\t\t\t\t\t1)if you choose X (cross)  Enter your name : ");
            scanf("%s", playerOneName);
            // scanf("%[^\n]s",playerOneName);
            fflush(stdin);
            printf("\t\t\t\t\t\t\t\t2)if you choose O (circle) Enter your name : ");
            scanf("%s", playerTwoName);
            // scanf("%[^\n]s",playerTwoName);
            fflush(stdin);

            // for making game box and updating value of array by asking user

            x1 = 0, x2 = 0;
            win1 = 0;
            win2 = 0;
            checking_time = 0;
            size1 = 0;
            size2 = 0;
            winner = 0;
            tracker = 10;
            end = 0;
            while (tracker)
            {

                row = 0;
                col = 0;
#if WIN32
                system("color 70");
                system("cls")
#elif __unix
                system("clear");
#endif
                    // Background
                    // clearing the screen
                    printf("\n\n\n\n\n\n\n\n\n\n");
                for (int a = 0; a < 3; a++)
                {
                    printf("\t\t\t\t\t\t\t\t");
                    for (int b = 0; b < 4; b++)
                    {
                        printf("|");
                        if (b != 3)
                        {
                            printf(" %c ", value[a][b]);
                        }
                    }
                    if (a < 2)
                    {

                        printf("\n\t\t\t\t\t\t\t\t______________");
                    }
                    printf("\n\n");
                }

                if (end == 1)
                {
                    break;
                }

                if (tracker != 1)
                {
                    // player distribution into player1 and player2
                    // for player 1
                    if (tracker % 2 == 0)
                    {
                        printf("\t\t\t\t\t\t\t\t%s's turn \n", playerOneName);
                        printf("\t\t\t\t\t\t\t\tEnter your position: \n");
                        printf("\t\t\t\t\t\t\t\tRow : ");
                        scanf("%d", &row);
                        fflush(stdin);
                        printf("\t\t\t\t\t\t\t\tColumn : ");
                        scanf("%d", &col);
                        printf("%d", col);
                        if (row != 1 && row != 2 && row != 3 && col != 1 && col != 2 && col != 3)
                        {
                            if (col > 3)
                            {
                                printf("\t\t\t\t\t\t\t\tPlease enter correct position\n");
                                fflush(stdin);
                                printf("\t\t\t\t\t\t\t\tPress any key to continue....");
#if WIN32
                                system("color 4F");
#endif
                                pauseprogram(); 
pauseprogram();
                                continue;
                            }
                        }

                        if (value[row - 1][col - 1] != ' ')
                        {
                            printf("\t\t\t\t\t\t\t\tThis position already occupied try empty position \n");

                            printf("\t\t\t\t\t\t\t\tPress any key to continue....");
#if WIN32
                            system("color 4F");
#endif
                            pauseprogram(); 
pauseprogram();
                            continue;
                        }

                        value[row - 1][col - 1] = 'X';
                        playerOne[x1] = arrayPos(row - 1, col - 1);
                        x1++;
                    }
                    else
                    {
                        // for player 2
                        printf("\t\t\t\t\t\t\t\t%s's turn \n", playerTwoName);
                        printf("\t\t\t\t\t\t\t\tEnter your position: \n");
                        printf("\t\t\t\t\t\t\t\tRow : ");
                        scanf("%d", &row);
                        fflush(stdin);
                        printf("\t\t\t\t\t\t\t\tColumn : ");
                        scanf("%d", &col);
                        if (row != 1 && row != 2 && row != 3 && col != 1 && col != 2 && col != 3)
                        {
                            if (col > 3)
                            {
                                printf("\t\t\t\t\t\t\t\tPlease enter correct position\n");
                                fflush(stdin);
                                printf("\t\t\t\t\t\t\t\tPress any key to continue....");
#if WIN32
                                system("color 4F");
#endif
                                pauseprogram(); 
pauseprogram();
                                continue;
                            }
                        }
                        if (value[row - 1][col - 1] != ' ')
                        {
                            printf("\t\t\t\t\t\t\t\tThis position already occupied try empty position \n");
                            printf("\t\t\t\t\t\t\t\tPress any key to continue....");
#if WIN32
                            system("color 4F");
#endif
                            pauseprogram(); 
pauseprogram();
                            continue;
                        }

                        value[row - 1][col - 1] = '0';
                        playerTwo[x2] = arrayPos(row - 1, col - 1);
                        x2++;
                    }
                }

                tracker--;

                checking_time++;
                if (checking_time >= 5)
                {
                    size1 = sizeof(playerOne) / sizeof(int);
                    size2 = sizeof(playerTwo) / sizeof(int);

                    // winning condition
                    win1 = checkWin(playerOne, size1);
                    win2 = checkWin(playerTwo, size2);

                    if (win1 == 1)
                    {
                        for (int z = 0; z < 5; z++)
                        {
                            printf("\n");
                            printf("%d", playerOne[z]);
                            printf("\n");
                        }
                        winner = 1;
                        end = 1;
                    }
                    else if (win2 == 1)
                    {
                        for (int y = 0; y < 5; y++)
                        {
                            printf("\n");
                            printf("%d", playerTwo[y]);
                            printf("\n");
                        }
                        winner = 2;
                        end = 1;
                    }
                    if (tracker == 1 && win1 != 1 && win2 != 2)
                        printf("DRAW :)\n");
                }
            }
            if (winner == 1)
                printf("\t\t\t\t\t\t\t\tCongratulation!! %s  you  Win \n", playerOneName);
            if (winner == 2)
                printf("\t\t\t\t\t\t\t\tCongratulation!! %s  you  Win \n", playerTwoName);
            if (winner == 1 || winner == 2)
                printf("\t\t\t\t\t\t\t\tPress any key to continue....");
            pauseprogram(); 
pauseprogram();
            break;

        case 2:
// #if WIN32
//             system("cls");
// #elif __unix
//             system("clear");
// #endif
            rules();
            // fflush(stdin);
            main_menu = 1;
            printf("hi");
            continue;

        case 3:

#if WIN32
            system("cls");
            system("color 0F");
#elif __unix
            system("clear");
#endif
            exit(0);
        }
    }
    return 0;
}
