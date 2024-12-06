/*
code1 


#include<stdio.h>
simple switch
int main(){
    int a;
    printf("enter your num");
    scanf("%d",&a);
    switch(a){
        case 1:
         printf("you have entered 1 ");
         break;
        case 2:
         printf("you have entered 2 ");
         break;
        case 3:
         printf("you have entered 3 ");
         break;
        default:
        printf("nothing matched");  
    
    }
    return 0;

    }

    */
/*







#include<stdio.h>
double var
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
         printf("failed1 ");
         break;
        default:
        printf("1 karo dubara "); 

    
    }
    return 0;

    } 
    */

    
   // switch in switch
#include<stdio.h>
int main() {
    char grade;
    
    
    // Taking grade and age input
    printf("Enter your grade: ");
    scanf(" %c", &grade);  // Added space before %c to handle newline issue from previous input
    // Outer switch for grade
    switch (grade) {
        case 'a':{
            int age;
            printf("Enter your age: ");
            scanf("%d", &age);
            printf("Excellent\n");
            switch (age) {
                case 18:
                    printf("You will get P\n");
                    break;
                default:
                    printf("But nothing\n");
            }
        }
            break;

        // For grade 'b', just print "Promoted" without checking age
        case 'b':
            printf("Promoted\n");
            break;

        // For grade 'c', just print "Failed" without checking age
        case 'c':
            printf("Failed\n");
            break;

        // Default case for invalid grade input
        default:
            printf("Please enter again\n");
    }

    return 0;
}

    