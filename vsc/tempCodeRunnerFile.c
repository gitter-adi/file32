#include<stdio.h>
int main(){
    char grade;
    int age;
    printf("enter your grade ");
    scanf("%c",&grade);
    printf("enter your age  ");
    scanf("%d",&age);
    switch(grade){
        case 'o':
         printf("execllent\n ");
         switch (age)
         {
         case 18:
         printf("you will get p ");
         break;
         default:
         printf(" but nothing");
         }
         break;
        case 'b':
         printf("promoted");
         break;
        case 'c':
         printf("failed ");
         break;
        default:
        printf("1 karo dubara "); 

    
    }
    return 0;

    }