#include <stdio.h>
void main(){
    printf("this is an simple calulator in c language\n");
    int user_input ; int a,b;
    printf("Choose which operation you wanted to do:) \n 1) for addition \n 2) for subtraction \n 3)for multipliaction and \n 4) for division ");
    scanf("%d",&user_input);
    printf("give one number\n");
    scanf("%d",&a);
    printf("give here 2nd number\n");
    scanf("%d",&b);

    if (user_input==1) printf("%d",a+b);
    else if (user_input ==2 ) printf("%d",a-b);
    else if (user_input== 3) printf("%d",a*b);
    else if (user_input==4) printf("%d",a/b);
    else printf("invalid option");

}