void art_work()
{
#if WIN32
    int winfun();
#elif __unix
    system("clear");
#endif
    printf(" _________________     _________________    ___________________              _________________    __________________    _________________      \n");
    printf("|______    _______|   |______    _______|  |                  |             |______    _______|  |                  |  |                 |     \n");
    printf("       |  |                  |  |          |   _______________|                    |  |          |   ____________   |  |   ______________|     \n");
    printf("       |  |                  |  |          |   |                                   |  |          |  |            |  |  |   |                   \n");
    printf("       |  |                  |  |          |   |                                   |  |          |  |            |  |  |   |                   \n");
    printf("       |  |                  |  |          |   |                                   |  |          |  |            |  |  |   |                   \n");
    printf("       |  |                  |  |          |   |                                   |  |          |  |____________|  |  |   |                   \n");
    printf("       |  |                  |  |          |   |                                   |  |          |  |____________|  |  |   |                   \n");
    printf("       |  |                  |  |          |   |                                   |  |          |  |            |  |  |   |                   \n");
    printf("       |  |                  |  |          |   |_______________                    |  |          |  |            |  |  |   |______________     \n");
    printf("       |  |            ______|  |_______   |                   |                   |  |          |  |            |  |  |                 |     \n");
    printf("       |__|           |_________________|  |___________________|                   |__|          |__|            |__|  |_________________|     \n\n\n\n");

    printf("                                           _________________    __________________    _________________       \n");
    printf("                                          |______    _______|  |   ____________   |  |                 |      \n");
    printf("                                                 |  |          |  |            |  |  |   ______________|      \n");
    printf("                                                 |  |          |  |            |  |  |   |                    \n");
    printf("                                                 |  |          |  |            |  |  |   |                    \n");
    printf("                                                 |  |          |  |            |  |  |   |_____________       \n");
    printf("                                                 |  |          |  |            |  |  |   |_____________|      \n");
    printf("                                                 |  |          |  |            |  |  |   |                    \n");
    printf("                                                 |  |          |  |            |  |  |   |                    \n");
    printf("                                                 |  |          |  |            |  |  |   |_____________       \n");
    printf("                                                 |  |          |  |____________|  |  |                 |      \n");
    printf("                                                 |__|          |__________________|  |_________________|      \n\n\n\n");

    printf("                                                          Press any key to continue.......");
    pauseprogram(); 

}

void menu()
{
#if WIN32
    int winfun();
#elif __unix
    system("clear");
#endif
    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t*****************Main Menu************\n");
    printf("\t\t\t\t\t\t*\t\tEnter your Choice : \t*\n");
    printf("\t\t\t\t\t\t*\t\t1) Start Game \t\t*\n ");
    printf("\t\t\t\t\t\t*\t\t2) Rules \t\t*\n");
    printf("\t\t\t\t\t\t*\t\t3) Exit \t\t*\n");
    printf("\t\t\t\t\t\t**************************************\n");
}
void rules()
{
#if WIN32
    int winfun();
#elif __unix
    system("clear");
#endif
    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t***************************************** Rules *********************************\n");
    printf("\t\t\t\t\t\t*\t\t# The game is played on a grid that's 3 squares by 3 squares. \t*\n");
    printf("\t\t\t\t\t\t*\t\t# You are X, your friend (or the computer in this case) is O.\t*\n\t\t\t\t\t\t*\t\t Players take turns putting their marks in empty squares \t*\n ");
    printf("\t\t\t\t\t\t*\t\t# The first player to get 3 of her marks in a row (up, down,\t*\n\t\t\t\t\t\t*\t\t across, or diagonally) is the winner. \t\t\t\t*\n");
    printf("\t\t\t\t\t\t*\t\t# When all 9 squares are full, the game is over.\t\t*\n");
    printf("\t\t\t\t\t\t********************************************************************************\n");
     printf("\t\t\t\t\t\t\t\tPress any key to go back...");
     pauseprogram(); 
pauseprogram();
}
