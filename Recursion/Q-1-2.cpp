#include <bits/stdc++.h>

int eval(){
    int x, y, z;
    char c;
    int val;

    //如果有正確讀到數字
    if(scanf("%d", &val) == 1){
        return val;
    }

    //沒有讀到數字，會從緩衝區抓剛剛的輸入資料
    scanf("%c", &c);
    if(c == 'f'){
        x = eval();
        return 2 * x - 3;
    }else if(c == 'g'){
        x = eval();
        y = eval();
        return 2 * x + y - 7;
    }else if(c == 'h'){
        x = eval();
        y = eval();
        z = eval();
        return 3 * x - 2 * y + z;
    }
}

int main(){
    printf("%d \n", eval());
}