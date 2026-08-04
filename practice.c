#include <stdio.h>



void generateGrid(int rows, int columns){
    //just generating a table
    for (unsigned int a = 0; a < rows; a++)
    {
        for (unsigned int b = 0; b < columns; b++)
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
    /*
    int i = 1;
    do
    {
        printf("%d. I'll loop until you input a number below 3\n",i);
        scanf("%d", &i); //input
    } while (i>3); */

    //getting size & length of array
   /*  int list_of_nums[] = {1,2,3}; //you can force array size with list_of_nums[3]
    int size_of_list = sizeof(list_of_nums); //get the size of the array in bytes
    int length_of_list = sizeof(list_of_nums) / sizeof(list_of_nums[0]); //assuming every element is of the same size
    printf("Size: %d bytes\nLength: %d Elements", size_of_list, length_of_list);

    //multi-dimensional arrays (columns & rows)

    int matrix[2][3] = {{1,2,3},{4,5,6}}; //2 rows, 3 columns */
    //visualisation
    /* 
    X X X
    X X X
    */
   //standard array/matrix logic so imma not put it so better not forget it!!
   // [row][column] so [0][1] is yk yea it's logic so you CANT forget it literally the same thing for every language
   // 3D arrays what the fuck!!! [block][row][column]
    

   //strings - array of characters %s
   //char stringify[] = "Hello, World!"; 
   // {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'}; equivalant, we use \0 to end the string "Null Terminating Character" MUST!!

    //memory addresses
    //location of where the variable is stored on the computer
    int where_am_i = 10;
    printf("%p\n", &where_am_i);
    int* pointer = &where_am_i; //or int *pointer
    printf("%p\n", pointer);
    printf("%d\n", *pointer); //print the value at the address


}

int main(){
    generateGrid(3,3);
    //newConcepts();
    return 0;
}
