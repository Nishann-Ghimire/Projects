
FILE *fp;
int i, j;
char name[50];
// function to count the words
int countWords()
{
    int i = 0;
    fp = fopen("words.txt", "r");
    while (fscanf(fp, "%s", name) != EOF)
    {
        i++;
    }
    fclose(fp);
    return i;
}


// Function to check whether given character is present in given string or not
// Returns 1 if present and returns 0 if not present
int check_letter_in_words(char c, char *fword)
{
    for (int i = 0; i < strlen(fword); i++)
    {
        if (fword[i] == c)
        {
            return 1;
        }
    }
    return 0;
}