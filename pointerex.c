//
//  pointerEx.c
//  runC
//
//  Created by 김지훈 on 2021/02/09.
//

#include <stdio.h>
 
//void swap(int *a, int *b)
//{
//    // int *a는 x의 주소값 가리키고 있다
//    // int *b는 y의 주소값 가리키고 있다
//    int temp;
//    temp = *a; // *a는 x의 주소값을 가르키고 있어 temp에 변수 x인 값을 담는다.
//    printf("%d \n",temp); // 3 출력
//    *a = *b; // *b(변수 y에 대한 주소값을 가르키고 있어) y인 값을 *a에 담는다
//    printf("%d\n", *a);// 5 5출력
//    *b = temp; // temp가 담고 있는 *a(변수 x의 주소 값을 가르키고 있어)*b에 변수x의 값 3을 담는다.
//}
 
 
//int main(void)
//{
//    int x = 3, y = 5; // 변수 x,y을 선언과 정의
//
//    printf(" 값을 교환하기 전 값 x : %d , y : %d\n",x,y);
//    swap(&x, &y);
//    printf(" 값을 교환한 후 값 x : %d , y : %d\n", x, y);
//
//    return 0;
//}


int main()
{
    char a[5];
    char *ptr;
    
    a[0]= 'a';
    a[1]= 'b';
    a[2]= 'c';
    a[3]= 'd';
    a[4]= 'e';
    
    ptr = a;
    printf("%c \n", *ptr); // 포인터 변수 ptr에 a 배열의 주소값을 가르키고 있어 a값을 대입
    
    ptr = ptr + 3;
    printf("%c \n", *ptr); // ptr은 a배열의 주소값을 가르키고 있어 a배열의 값인 a에 3을 더한 3번째 d을 출력한다
    
    return 0;
}




