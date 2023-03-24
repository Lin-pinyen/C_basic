#include <stdio.h>

int main(){
    
    double prices[]={1.0,2.0,5.0,10.0,25.0,30.0}; //若輸出沒設定的prices index，則會跑出0
    //array中只能放相同type的物件
    for(int i=0; i<sizeof(prices)/sizeof(prices[0]);i++){
        //size of的寫法能根據array的大小彈性調整
        printf("$%.1lf\n", prices[i]);
    }

    return 0;
}