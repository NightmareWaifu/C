#include <stdio.h>

void loop();

int main(){

    loop();
    // printf("Name: ");

    // char name[20];
    // scanf("%s", name);
    // printf("Hello, %s\n", name);
    return 0;

}

void loop(){
    int user_input;
    do{
        printf("Enter a number: \n");
        scanf("%d", &user_input);
        printf("Number: %d\n", user_input);
    }while (user_input<5);
    
}