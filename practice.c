#include <stdio.h>
#include <stdlib.h>



struct Node
{
    int data;
    struct Node *next;
};

void generateGrid(){
    //just generating a table
    //practicing for loops because i always forget lol (while loop dominance)
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
    /* int i = 1;
    do
    {
        printf("%d. I'll loop until you input a number below 3\n",i);
        scanf("%d", &i); //input
    } while (i>3);
        //this will execute while the condition is met
    */
        

    //just read the input docs cuz it's quite extensive and an example here will tunnel vision yourself
    // int test_num;
    // printf("Enter a number: ");
    // scanf("%d", &test_num);

    // printf("Your number is: %d", test_num);

    // char first_name[30];
    // printf("\nEnter your first name: ");
    // scanf("%s", first_name);
    // printf("Good Morning %s!",first_name);

    //Linked Lists

    //practicing allocating memory

    int numbers = 5;
    int* arr = (int*)malloc(5*sizeof(int));
    arr[0] = 1;
    arr[2] = 3;


    for (int i = 0; i < numbers; i++)
    {
        printf("Index %d: %d\n", i, arr[i]);
    }
    
    //printf("First Array Element: %d",arr[0]);

}

int main(){
    //generateGrid();
    newConcepts();
    return 0;
}
