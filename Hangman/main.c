#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include "functions.h"



int main()
{
    int life = 6; //life of a player
    int word_count = countWords(); //number of words present in the file
    int count = 0; // counts no of while loop iterated
    char words[20]; // store the playing words
    char ori_word[20]; // store the original word
    char inchar;
    int incharnum;
    char exitqun; // stores ans of exit question either y or n
    int n; //no of letters in a words
    int empty_spaces = 0;  //for verifying word is completed or not

  
    fp = fopen("words.txt", "r");

    while (fscanf(fp, "%s", name) != EOF)
    {
        strlwr(name);
        n = strlen(name);
       
        // Provides the no of spaces according to no of character present in word
        for (i = 0; i <= n - 1; i++)
        {
            words[i] = '_';
        }
       
        strcpy(ori_word, name);

        // User input

        for (i = 0; i <= n; i++)
        {
                    incharnum = 0;
                
                    for (j = 0; j < n; j++) // Printing blank spaces
                    {
                        printf("%c ", words[j]);
                    }

                    fflush(stdin);
                    printf("\nEnter your choice letter : ");
                    scanf("%c", &inchar);
                
                    for (int k = 0; k < n; k++)
                    {
                    
                        if (ori_word[k] == inchar)
                        {
                            
                            words[k] = inchar;
                            incharnum++;
                        }
                    }

                    
                    if (incharnum == 0)
                    {
                        life--;
                      
                        switch (life)
                        {
                        case 5:
                            printf("______ \n");
                            printf("|     |\n");
                            printf("|     0\n");
                            printf("|\n");
                            printf("|\n");
                            printf("|\n");
                            break;
                        case 4:
                            printf("______ \n");
                            printf("|     |\n");
                            printf("|     0\n");
                            printf("|     |\n");
                            printf("|\n");
                            printf("|\n");
                            break;
                        case 3:
                            printf("______ \n");
                            printf("|     |\n");
                            printf("|     0\n");
                            printf("|    /|\\\n");
                            printf("|\n");
                            printf("|\n");
                            break;
                        case 2:
                            printf("______ \n");
                            printf("|     |\n");
                            printf("|     0\n");
                            printf("|    /|\\\n");
                            printf("|\n");
                            printf("|\n");
                            break;
                        case 1:
                            printf("______ \n");
                            printf("|     |\n");
                            printf("|     0\n");
                            printf("|    /|\\\n");
                            printf("|    /\n");
                            printf("|\n");
                            break;
                        case 0:
                            printf("______ \n");
                            printf("|     |\n");
                            printf("|     0 \n");
                            printf("|    /|\\ \n");
                            printf("|    / \\ \n");
                            printf("|\n\n\n");

                            printf("Game Over");
                            printf("Want to Continue with next word ? : ");
                            fflush(stdin);
                            scanf("%c", &exitqun);
                            if (exitqun == 'n' || exitqun == 'N')
                            {
                                getch();
                                exit(0);
                            }
                            break;
                        }
                    }

                    //Loop for checking whether there is empty space or not
                    for (int k = 0; k < n; k++)
                    {
                        if (check_letter_in_words('_', &words[0]) == 0)
                        {
                            empty_spaces = 0;
                        }
                        else{
                            empty_spaces = 1;
                        }
                       
                    }
                   
                    //Checking wining condtion
                    if (empty_spaces == 0)
                    {
                        system("cls");
                        printf("Congratulation You are correct\n");
                        
                        if (count <= word_count)
                        {

                            printf("Would you want to try next one ? (y for yes and n for no) :\n");
                            scanf("%c",&exitqun);
                            if(exitqun != 'y' || exitqun != 'Y')
                            exit(0);    
                            
                            break;
                        }else{
                            printf("Game over ");
                            printf("Please come back when we update our list..");
                            printf("Press any key to exit...");
                            getch();
                            exit(0);
                        }
                    }
                   
                    
                }

        count++;
    }

    return 0;
}