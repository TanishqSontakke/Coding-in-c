
#include <stdio.h>
#include <math.h>
int main(){
    int choice;
    do{
        printf("1. ADDITION \n");
        printf("2.SUBTRACTION \n");
        printf("3.MULTIPICATION\n");
        printf("4.DIVISION\n");
        printf("5.REMAINDER\n");
        printf("6.POWER\n");
        printf("7.WANNA EXIT?\n");
        printf("MAKE CHOICE:");
        scanf("%d",&choice);
        if(choice==1){
            int a;
            int b;
            printf("enter a:");
            scanf("%d",&a);
            printf("enter b:");
            scanf("%d",&b);
            int c=a+b;
            printf(" RESULT:%d \n",c);  
        }
        else if(choice==2){
            int a;
            int b;
            printf("enter a:");
            scanf("%d",&a);
            printf("enter b:");
            scanf("%d",&b);
            int c=a-b;
            printf("RESULT:%d \n",c);   
        }
        else if(choice==3){
            int a;
            int b;
            printf("enter a:");
            scanf("%d",&a);
            printf("%d \n",a);
            printf("enter b:");
            scanf("%d",&b);
            int c=a*b;
            printf("RESULT:%d \n",c);  
        }
        else if(choice==4){ 
            int a;
            int b;
            printf("enter a:");
            scanf("%d",&a);
            printf("enter b:");
            scanf("%d",&b);
            if(b!=0){
                printf("%d \n",a/b);   
            }
            else if(b==0){
                printf("ERROR:WE CAN'T DIVIDE BY 0\n");
            }
        }
        else if(choice==5){
            int a;
            int b;
            printf("enter a:");
            scanf("%d",&a);
            printf("enter b:");
            scanf("%d",&b);
            int c=a%b;
            printf("RESULT:%d \n",c);
        }
        else if(choice==6){
            int a;
            int b;
            printf("Enter base: ");
            scanf("%d", &a);
            printf("Enter exponent: ");
            scanf("%d", &b);
            printf("RESULT: %.0f\n", pow(a, b));
        }
        else if(choice==7){
            break;
        }
        else{
            printf("DEAR ENTER BETWEEN 1 TO 7\n");
        }
    }while(choice>=1 || choice<=6);
    printf("THANK YOU \n");
    printf("GOOD BYE");
    return 0;
}
