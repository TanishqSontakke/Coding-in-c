/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    FILE *fptr;
    fptr=fopen("new file","w");
    if(fptr!=NULL){
        printf("file is opened");
    }
    else{
        printf("file is not opened");
    }
    fclose(fptr);

    return 0;
}