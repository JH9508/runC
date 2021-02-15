//
//  7for.c
//  runC
//
//  Created by 김지훈 on 2021/02/15.
//
//#include <stdio.h>
//int main(void)
//{
//    int num;
//    printf("정수 입력 : ");
//    scanf("%d", &num);
//    
//    if (num < 0) //num이 0보다 작으면 아래의 코드 실행
//        printf("입력 값은 0보다 작다. \n");
//    
//    if (num > 0) // numdl 0보다 크면 아래의 문장 실행
//        printf("입력 값은 0보다 크다 \n");
//    
//    if(num == 0 ) // num이 0이면 아래의 문장 실행
//        printf("입력 값은 0이다 \n");
//    
//    return 0;
//        
//}


//int main(vodi) // 입력한 수 만큼 문자 반복 출력

//{
//    int num;
//    int i = 0;
//
//    printf("문자를 출력할 횟수를 양의 정수 입력하시오\n");
//    scanf("%d",&num);
//    while (i<num) {
//        printf("hello world \n");
//        i++;
//    }
//    return 0;
//}


//int main(void) // 7과 9의 배수만 출력
//{
//    int i;
//    for(i=0;i<100;i++)
//    {
//        if (i%7==0 || i%9==0) {
//            printf("%d\n",i);
//        }
//    }
//}

//
//int main(void) // 큰수 먼저 출력
//{
//    int num1,num2;
//    printf("첫 번째의 정수를 입력하시오 \n");
//    scanf("%d", &num1);
//    printf("두 번째의 정수를 입력하시오 \n");
//    scanf("%d", &num2);
//
//    if (num1<num2) {
//        printf("%d %d \n", num2, num1);
//    }
//    else if(num1>num2)
//    {
//        printf("%d %d \n", num1, num2);
//    }
//
//
//    return 0;
//}

//int main (void) // 구구단 함수
//{
//    int x, y;
//
//    for(x=2;x<10;x++)
//    {
//        for(y=1;y<10;y++)
//        {
//            printf("%d X %d = %d \n", x,y,x*y);
//        }
//        printf("%d단 종료 \n\n",x);
//    }
//}


//int main (void) // 2의 배수 구구단
//{
//    int x, y;
//
//    for(x=2;x<10;x++)
//    {
//        for(y=1;y<10;y++)
//        {
//            if (x%2==0) {
//                printf("%d X %d = %d \n", x,y,x*y);
//            }
//        }
//        if(x%2==0)
//        {
//            printf("%d단 종료 \n\n",x);
//        }
//    }
//}
//
//int main (void) // 홀수 구구단
//{
//    int x, y;
//
//    for(x=2;x<10;x++)
//    {
//        for(y=1;y<10;y++)
//        {
//            if (x%2==1) {
//                printf("%d X %d = %d \n", x,y,x*y);
//            }
//        }
//        if(x%2==1)
//        {
//            printf("%d단 종료 \n\n",x);
//        }
//    }
//}
