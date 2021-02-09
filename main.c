//
//  main.c
//  runC
//
//  Created by 김지훈 on 2021/02/04.
//

#include <stdio.h>
#include <stdlib.h>


// Call By value
// Call By Reference
// n은 10까지 가능
//
int add (int *arr, int max){


    int result;
    int i;
    result = arr[0];
    for(i=1; i<max; i++){
        result += arr[i];
    }

    return result;
}
int sub (int *arr, int max){

    int result;
    int i;
    result = arr[0];
    
    for(i=1; i<max; i++){
        result -= arr[i];
    }

    return result;
}
int mul (int *arr, int max){


    int result;
    int i;
    result = arr[0];
    
    for(i=1; i<max; i++){
        result *= arr[i];
    }

    return result;
}
int divf(int *arr, int max){

    int result;
    int i;
    result = arr[0];
    
    for(i=1; i<max; i++){
        result /= arr[i];
    }

    return result;
}


int main() {
    char o; // 기호 입력
    int i;
    int max;
    int *arr; // 포인터 선언
    
    
    printf("사칙연산할 개수를 입력하세요 \n");
    scanf("%d", &max);
    
    
    
    arr = malloc(sizeof(int) * max); // max * 4byte 만큼을 arr에 매모리크기 할당
    
        
    for (i=0; i<max; i++) {
        printf("%d 번째 숫자를 입력하세요 \n",i +1);
        scanf("%d", &arr[i]); // 순차적으로 n의 값 입력
    }
    
    /* 입력 값 확인
    for (i=0; i<max; i++) {
        printf("숫자 출력 : %d \n", arr[i]); // 입력된 값 출력
    }
     */
    
    printf(" +  -  *  / 중 1개의 기호를 입력해주세요\n");
    scanf(" %c", &o);
    while (o != '+' && o != '-' && o != '*' && o != '/') {
        printf("잘못 입력하셨습니다 + - * / 중 다시 입력하세요\n");
        scanf(" %c", &o);
    }

    if (o == '+') {
        printf("%d\n",add(arr, max));
    }
    else if (o == '-'){
        printf("%d\n",sub(arr, max));
    }
    else if (o == '*'){
        printf("%d\n",mul(arr, max));
    }
    else{
        printf("%d\n",divf(arr, max));
    }
    
    return 0;
}

