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

int add (int numBoxA, int x, int arr1[10], int maxN){
    
    
    numBoxA = 0;
    
    for(x=0; x<maxN; x++){
        numBoxA += arr1[x];
    }
    
    return numBoxA;
}
int sub (int numBoxS, int c, int arr2[10], int maxN2){
    
    
    numBoxS = arr2[0];
    
    for(c=1; c<maxN2; c++){
        numBoxS -= arr2[c];
    }
    
    return numBoxS;
}
int mul (int numBoxM, int m, int arr3[10], int maxN3){
    
    
    numBoxM = arr3[0];;
    
    for(m=1; m<maxN3; m++){
        numBoxM *= arr3[m];
    }
    
    return numBoxM;
}
int divf(int numBoxD, int d, int arr4[10], int maxN4){
    
    
    numBoxD= arr4[0];
    
    for(d=1; d<maxN4; d++){
        numBoxD /= arr4[d];
    }
    
    return numBoxD;
}


int main() {
    char o; // 기호 입력
    int i, max;
    int numBox = 0;
    int y = 0;
    int arr[10]; // 최대 정수 개수
    
    printf("사칙연산할 개수를 입력하세요 최대 10개 \n");
    scanf("%d", &max);
  
    
    for (i=0; i<max; i++) {
        printf("%d 번째 수 입력해주세요\n",i);
        scanf("%d",&arr[i]);
    }
    
    printf(" +  -  *  / 중 1개의 기호를 입력해주세요\n");
    
    scanf(" %c", &o);
    while (o != '+' && o != '-' && o != '*' && o != '/') {
        printf("잘못 입력하셨습니다 + - * / 중 다시 입력하세요\n");
        scanf(" %c", &o);
    }
    
    if (o == '+') {
        printf("%d\n",add(numBox, y, arr, max));
    }
    else if (o == '-'){
        printf("%d\n",sub(numBox, y, arr, max));
    }
    else if (o == '*'){
        printf("%d\n",mul(numBox, y, arr, max));
    }
    else{
        printf("%d\n",divf(numBox, y, arr, max));
    }
    
    
    return 0;
}

