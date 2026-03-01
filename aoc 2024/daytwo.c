#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct report{
    char level[1000];
}

int convertlevel(char levels,int level[] ){
    int currlevelindex = 0;
    int  numofchar = 0;
    int multiplier = 10;
    for (int i = 0; i < 1000){
        if (levels[i] != " "){
            level[currlevelindex] = atoi(levels[i])
            numofchar++;
            
        }
    }
}

int main(void){
    FILE *file;
    int i = 0;
    struct report reports[1000];
    char level[1000];
    
    

       file = fopen("C:\\Users\\maors\\OneDrive\\Documents\\codetxt.txt", "r");
       int lists1[1000];
       int lists2[1000];
       while (EOF != fscanf(file, "%s", &reports[i].level))
       {
                 
           i++;
       }
}