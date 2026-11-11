#include <stdio.h>

int main (){

    int tabInt[10] = {52, 55, 58, 59, 60, 51, 53, 56, 54,57};
    int i;
    int temp;
    int minIndex;
    int j;

    for(i=0;i <(10-1); i++){
        minIndex = i;

        for(j=(i+1);j<10;j++){
            if(tabInt[minIndex] > tabInt[j]){
                minIndex = j;
            }
        }
        temp = tabInt[i];
        tabInt[i] = tabInt[minIndex];
        tabInt[minIndex] = temp;
        
    }
    for(int z=0; z<10;z++){
    printf("%d\n", tabInt[z]);
    }

    return 0;
}

