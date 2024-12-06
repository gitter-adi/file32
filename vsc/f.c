// vote eligble 
#include <stdio.h>

int main() {
    int age;
    printf("enter your age  ");
    scanf("%d",&age);
    printf("you have entered %d as your age \n",age);
    if (age>=18){
        printf("you can vote");
    }
    else{
        printf("not allowed for voting ");
    }

    return 0;
}