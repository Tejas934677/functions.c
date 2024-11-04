#include <stdio.h>
void main(){
   int matrix[3][3];
 printf("enter your matrix numbers in rows*coloumn form\n");
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        
        scanf("%d",&matrix[i][j]);

    }
   }

   for (int i =0;i<3;i++){
for (int j=0;j<3;j++){   
 printf("(%d)i%dj%d \t",matrix[i][j], i ,j);
}

 printf("\n");
   }
  

    
}  