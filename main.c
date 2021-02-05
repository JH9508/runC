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
int sub (int numBoxM, int c, int arr2[10], int maxN2){
    
    
    numBoxM = 0;
    
    for(c=0; c<maxN2; c++){
        numBoxM -= arr2[c];
    }
    
    return numBoxM;
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
    printf("%c\n", o);
    
    if (o == '+') {
        printf("%d\n",add(numBox, y, arr, max));
    }
    else if (o == '-'){
        printf("%d\n",sub(numBox, y, arr, max));
    }
    
    
    
    return 0;
}

