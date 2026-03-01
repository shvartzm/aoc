#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void){
    char *direction = (char*) malloc(sizeof(char));
    int *num = (int*) malloc(sizeof(int));
    int i= 0 ;
    while (scanf(" %c%d", &(direction[i]), &(num[i])) == 2) {
    // Your logic here
    i++;
    direction = realloc(direction, (i + 1) * sizeof(char));
    num = realloc(num,(i + 1) * sizeof(int));    
    }
    int counter = 0;
    int start = 50;
    for (int j = 0; j < i; j++){
        if(direction[j] == 'R'){
            start += num[j];
            if (start >= 100){
               while (start > 0){
                counter++;
                start -= 100;
               } 
                start %= 100;
            }
        }
        else {
            start -= num[j];
            if (start< 0 ){
                while (start < 0){
                counter++; 
                start += 100;
            }
            }
        }
        if (start == 0){
            counter++;
        }
    }
    printf("%d", counter);
    return 1;
}