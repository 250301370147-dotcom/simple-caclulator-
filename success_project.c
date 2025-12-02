#include <stdio.h>

int main() {
int num1, num2;
int op;
    


    
    printf("enter number num1: ",num1);
    scanf("%d", &num1);
    printf("enter num2: ",num2);
    scanf("%d",&num2);

    printf("Enter an  (1-4) ");
    printf("1-add");
    printf("2-sunstract\n");
    printf("3-multiply\n");
    printf("4-divison\n");
    scanf("%d",&op);
     switch (op) {
        case 1:
            
            printf("Result: %d\n", num1+num2);
            break;

        case 2:
            
            printf("Result: %d\n",num1-num2);
            break;

        case 3:
            
            printf("Result: %d\n", num1*num2);
            break;

        case 4:
             printf("result=%d",num1/num2);
            break;

    
    }


    return 0;
}