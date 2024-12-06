// area of circle 
/*#include<stdio.h>
int main(){
    float radius;
    printf("ENter the radius /n");
    scanf("%f",&radius);
    float area = 3.14*radius*radius;
    printf("the area of circle is %f \n",area);
    printf("height ");
    float height;
    scanf("%f",&height);
    float vol=3.14*radius*radius*height;
    printf("the volume of cyl is %f",vol);

    return 0;132
}
*/

// temp conv 
#include<stdio.h>
int main(){
    float centi,conv;
    printf("ENter the centi \n");    
    scanf("%f",&centi);

    conv = (centi*9/5)+32;
  
    printf("the temp is %f",conv);

    return 0;
}
