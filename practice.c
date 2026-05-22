#include <stdio.h>



void generateGrid(){
    //just generating a table
    const int ROWS = 3;
    const int COLUMNS = 3;
    for (unsigned int a = 0; a < ROWS; a++)
    {
        for (unsigned int b = 0; b < COLUMNS; b++)
        {
            printf(" |");
        }
        printf("\n");
        
    }
    
}

void newConcepts(){
    //Short Hand If (Ternary Operator)
    //(1) ? printf("True") : printf("False");
    //%zu sizeof(var) //get size of variable

    //case-switch cuz why not
    /* int time = 0700;
    int sunrise = 0700; //0700 - 1900
    int sunset = 1900; //1900-0700
 
    switch (time){
        case (0700):
        printf("Sunrise");
        break;
        case (1900):
        printf("Sunset");
        break;
        default:
        printf("Default");
    }
    */

    //do while
    int i = 1;
    do
    {
        printf("%d. I'll loop until you input a number below 3\n",i);
        scanf("%d", &i); //input
    } while (i>3);
    
}

int main(){
    //generateGrid();
    newConcepts();
    return 0;
}
