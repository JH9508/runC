//
//  main.c
//  runC
//
//  Created by 김지훈 on 2021/02/04.
//

#include <stdio.h>


// Call By value
// Call By Reference
// n은 10까지 가능

int main() {
   // char o; // 기호 입력
   // int x, y; // 입력 받을 수
    int max, i;
    int arr[10];
    printf("사칙연산할 횟수를 입력하세요 최대 10개\n");
    scanf("%d",&max);
    max = max - 1;
    for (i=0; i<max; i++) {
        scanf("%d\n",&arr[i]);
    }
    
    
 
    
    return 0;
}
