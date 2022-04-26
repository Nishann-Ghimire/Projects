#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>
//function to find random number
int random(int small,int great){
int rem;
int ranNum;
time_t seconds;
seconds = time(NULL);
rem = seconds%100;
if(rem%2==0)
rem+=25;
else if(rem > 35 )
rem-=25;
else if(rem < 26)
rem+=25;
else
rem-=25;
ranNum = ((rem)*(great - small))/100;

return ranNum;
}
int main(){
printf("______ \n");
printf("|     |\n");
printf("|     0\n");
printf("|\n");
printf("|\n");
printf("|\n");
return 0;
}