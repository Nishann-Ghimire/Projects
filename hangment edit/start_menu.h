int levels = 1;

void loadmenu()
{
    int menu_option;
    int level_option;
    int theme_option;
    int back = 0;
    int gameload = 0;

    while (1)
    {
        system("cls");
        header();
        menuScreen();
        scanf("%d", &menu_option);
        switch (menu_option)
        {
            case 1:
                    gameload = 1;
                    break;
            case 2:

                    while (1)
                    {
                        system("cls");
                        header();
                        level_menu();
                        scanf("%d", &level_option);
                        switch (level_option)
                        {
                        case 1:
                            levels = 1;
                            break;
                        case 2:
                            levels = 2;
                            break;
                        case 3:
                           back = 1;
                            break;
                        }
                        if (back == 1)
                            break;
                    }

                    break;
            case 3:
                    while (1)
                    {
                        system("cls");
                        header();
                        theme_menu();
                        scanf("%d", &theme_option);
                        switch (theme_option)
                        {
                        case 1:
                            system("color");
                            break;
                        case 2:
                            system("color f0");
                            break;
                        case 3:
                            system("color 2f");
                            break;
                        case 4:
                            back = 1;
                            break;
                        default:
                            printf("Please enter valid choice!!");
                            break;
                        }

                        if (back == 1)
                            break;
                    }
                    break;
            case 4:
                    system("cls");
                    header();
                    printf("Press any key to exit...");
                    getch();
                    system("cls");
                    exit(0);
                    break;

            
        }
        if (gameload == 1){
                break;
        }
    

    }
    
}