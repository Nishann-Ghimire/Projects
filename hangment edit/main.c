#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include "functions.h"
#include "graphic.h"
#include "start_menu.h"
// #include "manipulator.cpp"



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

loadmenu();

if(levels == 1){

    fp = fopen("words.txt", "r");
 
    //  printf("counting ...1\n");
    //  getch();
}
 else if(levels == 2){

 fp = fopen("voc.txt", "r");
    //  printf("counting ...2\n");
    //  getch();
 }

else{

    fp = fopen("words.txt", "r");
    //  printf("counting ...4\n");
    //  getch();
}
//  printf("counting ...out\n");
    //  getch();

    
    while (fscanf(fp, "%s", name) != EOF)
    {
    system("cls");
        //  printf("counting ...");
        // getch();
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
                    header();
                hangmen(life);
                gotoxy(46,14);
                    for (j = 0; j < n; j++) // Printing blank spaces
                    {
                        printf("%c ", words[j]);
                    }

                    fflush(stdin);
                    gotoxy(40,16);
                    printf("Enter your choice letter : ");
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
                        if(life == 0){
                            system("cls");
                            life = 6;
                            header();
                            gotoxy(40,13);
                            printf("Game Over\n");
                            gotoxy(30,14);
                            printf("The Answer is : %s\n",ori_word);
                            gotoxy(30,15);
                            printf("Want to Continue with next word ? : ");
                            getch();
                            fflush(stdin);
                            scanf("%c", &exitqun);
                            system("cls");
                            if (exitqun == 'n' || exitqun == 'N')
                            {
                                getch();
                                fclose(fp);
                                exit(0);
                            }
                            // break;
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
                            fflush(stdin);
                            printf("Would you want to try next one ? (y for yes and n for no) :");
                            scanf("%c",&exitqun);
                            if(exitqun == 'n' || exitqun == 'N')
                            {
                            printf("I am here");
                            getch();
                            fclose(fp);
                            exit(0);    
                            }
                            break;
                        }else{
                            system("cls");
                            printf("Game over \n");
                            printf("Please come back when we update our list..\n");
                            printf("Press any key to exit...\n");
                            getch();
                            fclose(fp);
                            exit(0);
                        }
                    }
                   
                    
                }

        count++;
    }
    printf("\nhi");
    getch();
    return 0;
}