///week14-2.cpp

#include <stdio.h>

int f1(int x, int y){
    printf("f1()函式吃到x:%d,y:%d\n",x,y);
    x=x+10;
    printf("f1()函示修改後x:%d,y:%d\n",x,y);
}

int main(){
    printf("Hello world\n");
    int x = 100, y=200;
    printf("main()函式中原本X:%d, Y:%d",x,y);
    f1(x,y);
    printf("main()函式中現在X:%d, Y:%d",x,y);
    return 0;
}
