#include<stdio.h>
int main(){
FILE *fp;
char ch;
int i = 0;
char words[20];
fp = fopen("words.txt","r");

while(1){
    ch = fgetc(fp);
    words[i] = ch;
    if(ch == EOF || ch == '\n')
    break;
    i++;
}
puts(words);
fclose(fp);
return 0;
}