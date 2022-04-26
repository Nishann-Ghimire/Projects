
int menu_x_pos = 35;
int menu_y_pos = 16;

int dynamic_hm_pos_x = 46;
int dynamic_hm_pos_y = 20;
int header_pos_x = 40;
int header_pos_y = 3;

void hangmen(int player_life)
{
    // system("cls");
    switch (player_life)
    {

    case 6:
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y);
        printf(" ______ ");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 1);
        printf("|     |");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 2);
        printf("|     ");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 3);
        printf("|    ");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 4);
        printf("|   ");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 5);
        printf("| \n");

        break;
    case 5:
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y);
        printf(" ______ ");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 1);
        printf("|     |");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 2);
        printf("|     0 ");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 3);
        printf("|    ");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 4);
        printf("|    ");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 5);
        printf("| \n");
        break;
    case 4:
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y);
        printf(" ______ ");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 1);
        printf("|     |");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 2);
        printf("|     0 ");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 3);
        printf("|     | ");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 4);
        printf("|    ");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 5);
        printf("| \n");

        break;
    case 3:
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y);
        printf(" ______ ");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 1);
        printf("|     |");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 2);
        printf("|     0 ");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 3);
        printf("|    /| ");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 4);
        printf("|    ");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 5);
        printf("| \n");

        break;
    case 2:
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y);
        printf(" ______ ");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 1);
        printf("|     |");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 2);
        printf("|     0 ");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 3);
        printf("|    /|\\ ");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 4);
        printf("|     ");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 5);
        printf("| \n");

        break;
    case 1:
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y);
        printf(" ______ ");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 1);
        printf("|     |");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 2);
        printf("|     0 ");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 3);
        printf("|    /|\\ ");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 4);
        printf("|    /  ");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 5);
        printf("| \n");

        break;
    case 0:
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y);
        printf(" ______ ");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 1);
        printf("|     |");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 2);
        printf("|     0 ");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 3);
        printf("|    /|\\ ");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 4);
        printf("|    / \\ ");
        gotoxy(dynamic_hm_pos_x, dynamic_hm_pos_y + 5);
        printf("| \n");
    }
}

void header()
{
    gotoxy(header_pos_x, header_pos_y);
    printf("Welcome to the game");
    gotoxy(header_pos_x - 15, header_pos_y + 1);
    printf("***********************************************\n");
    gotoxy(header_pos_x + 6, header_pos_y + 3);
    printf(" ______ ");
    gotoxy(header_pos_x + 6, header_pos_y + 4);
    printf("|     |");
    gotoxy(header_pos_x + 6, header_pos_y + 5);
    printf("|     0 ");
    gotoxy(header_pos_x + 6, header_pos_y + 6);
    printf("|    /|\\ ");
    gotoxy(header_pos_x + 6, header_pos_y + 7);
    printf("|    / \\ ");
    gotoxy(header_pos_x + 6, header_pos_y + 8);
    printf("| \n");
    gotoxy(header_pos_x - 10, header_pos_y + 9);
    printf("Enter the correct answer and save him\n");
    gotoxy(header_pos_x - 10, header_pos_y + 10);
}

void menuScreen()
{
    gotoxy(menu_x_pos, menu_y_pos);
    printf("*********Main Menu*********");
    gotoxy(menu_x_pos, menu_y_pos + 1);
    printf("1. Start Game");
    gotoxy(menu_x_pos, menu_y_pos + 2);
    printf("2. Change level");
    gotoxy(menu_x_pos, menu_y_pos + 3);
    printf("3. Change theme");
    gotoxy(menu_x_pos, menu_y_pos + 4);
    printf("4. Quit");
    gotoxy(menu_x_pos, menu_y_pos + 5);
    printf("Enter your choice : ");
}

void level_menu()
{
    header();
    gotoxy(menu_x_pos, menu_y_pos);
    printf("*********Choose Level*********");
    gotoxy(menu_x_pos, menu_y_pos + 1);
    printf("1. Countries Name");
    gotoxy(menu_x_pos, menu_y_pos + 2);
    printf("3. Vocabulary");
    gotoxy(menu_x_pos, menu_y_pos + 3);
    printf("4. Back");
    gotoxy(menu_x_pos, menu_y_pos + 4);
    printf("Enter your choice : ");
    
  
}

void theme_menu(){
    header();
    gotoxy(menu_x_pos, menu_y_pos);
    printf("*********Choose Theme*********");
    gotoxy(menu_x_pos, menu_y_pos + 1);
    printf("1. Dark Theme");
    gotoxy(menu_x_pos, menu_y_pos + 2);
    printf("2. Light Theme");
    gotoxy(menu_x_pos, menu_y_pos + 3);
    printf("3. Green Theme");
    gotoxy(menu_x_pos, menu_y_pos + 4);
    printf("4. Back");
    gotoxy(menu_x_pos, menu_y_pos + 5);
    printf("Enter your choice : ");
}