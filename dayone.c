#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
struct list {
       int list1;
       int list2;
};

void sort(int list[]) { //  basically my version of selection sorting (pretty sure standard one)
    int min;
    int indexmin;
    int temp;
    for (int i = 0; i < 999;i++) {    // go over the whole list
        min = list[i];
        indexmin = i;
        for (int j = i+1;j < 1000;j++) {
            if (list[j] < min) {
                min = list[j];
                indexmin = j;
            }
        }
        temp = list[i];
        list[i] = min;
        list[indexmin] = temp;
    }
}

int calculatesimilarity(int list1[], int list2[]) {
    int numfound;
    int sum = 0;
    for (int i = 0; i < 999;i++) {
        numfound = 0;
        for (int j =0;j < 999;j++) {
            if (list1[i] == list2[j]) {
                numfound++;
            }
        }
        sum += list1[i] * numfound;
    }
    return sum;
}

int main(void){
       FILE *file;
       int i = 0;
       struct list destinationslist[1000];


       file = fopen("C:\\Users\\maors\\OneDrive\\Documents\\codetxt.txt", "r");
       int lists1[1000];
       int lists2[1000];
       while (EOF != fscanf(file, "%d %d", &destinationslist[i].list1,
                                            &destinationslist[i].list2))
       {
                 lists1[i] = destinationslist[i].list1;
                 lists2[i] = destinationslist[i].list2;
           i++;
       }
    // sort(lists1);
    // sort(lists2);
    // int sumofdistances = 0;
    // for (int i = 0; i < 1000; i++) {
    //     sumofdistances += abs(lists1[i] - lists2[i]);
    // }

    printf("sumofdistances = %d\n", calculatesimilarity(lists1, lists2));
}



