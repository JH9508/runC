//
//  main.c
//  runC
//
//  Created by 김지훈 on 2021/02/04.
//

#include <stdio.h>

int add(int x, int y)
{
    int p = x+y;
    return p;
}
int minus(int x,int y){
    int n = x-y;
    return n;
}


int main() {
//    char o; // 기호 입력
    int x, y; // 입력 받을 수
    printf("수를 입력하세요\n");
    scanf("%d%d",&x,&y);
    
    printf("%d %d",add(x,y));
    printf("\n");
    printf("%d %d",minus(x,y));
    return 0;
}
