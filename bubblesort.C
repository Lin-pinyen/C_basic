#include <stdio.h>

void sort(int array[], int size){
    for(int i=0; i < size-1; i++){

        for(int j=0; j < size -i -1; j++){

            if(array[j] > array[j+1]){ // > :ascending. < : descending.
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;

            }
        }
    }
}
void printarray(int array[], int size){
    for(int i=0; i<size; i++){

        printf("%d ", array[i]); //若要印char，要改成%c
    }
    printf("\n");

}

int main(){
    int array[]={9,4,6,1,2,8,7,5,3};
    // char array[]={'F','A','U','B', 'K'}; //若要用char則需要更改function type

    int size = sizeof(array)/sizeof(array[0]);
    sort(array, size);
    printarray(array, size);

    return 0;
}