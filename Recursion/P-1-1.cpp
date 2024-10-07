#include <bits/stdc++.h>

int eval(){
    int val, x, y, z;
    char c;
    if(scanf("%d", &val) == 1){
        return val;
    }

    scanf("%c", &c);
    if(c == 'f'){
        x = eval();
        return 2*x - 1;
    }else if(c == 'g'){
        x = eval();
        y = eval();
        return x + 2*y - 3;
    }
}

int main(){
    printf("%d\n", eval());
}