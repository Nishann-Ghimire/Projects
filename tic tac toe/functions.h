// working properly
// function that changes matrix value in single digit value
int arrayPos(int n, int j)
{
    int pos = 0;
    switch (n)
    {
    case 0:
        pos = j + 1;
        break;
    case 1:
        pos = 3 + j + 1;
        break;
    case 2:
        pos = 6 + j + 1;
    }
    return pos;
}


int checkWin(int *arr, int size)
{

    int Arraylength = size;

    printf("Array length %d\n", Arraylength);

    int winPattern[8][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {1, 4, 7},
        {2, 5, 8},
        {3, 6, 9},
        {1, 5, 9},
        {3, 5, 7}};
    int flag;

    for (int i = 0; i < 8; i++)
    {
        flag = 0;
        for (int j = 0; j < Arraylength; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (winPattern[i][k] == arr[j])
                {
                    flag++;
                }
            }
            printf("\n\n");
        }
        if (flag >= 3)
            break;
    }

    if (flag >= 3)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int winfun()
{
    system("cls");
    system("title TIC TAC TOE");
    system("color 70");
}

// int pauseprogram()
// {
//     char *a;
//     a = (char*)malloc(sizeof(char));
//     scanf("%c",a);
//     free(a);
//     return 0;
// }

void
pauseprogram (void)
{    
  while ( getchar() != '\n' );
}