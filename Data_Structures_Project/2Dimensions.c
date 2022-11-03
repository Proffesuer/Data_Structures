#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* 2D array declaration */

    int table[2][3];
    /* other variables for loops*/
    int i,j;

    for(i=0;i<2;i++){
    for(j=0;j<3;j++){

    printf("Enter the values of Table[%d][%d]:",i,j);
    scanf("%d",&table[i][j]);






    }





    }

/*Displaying array elements*/
printf("Display of the Two array element:\n");
for(i=0;i<2;i++){

for(j=0;j<3;j++){

printf("%d",table[i][j]);
if(j==2){


printf("\n");

}






}





}




    return 0;
}
