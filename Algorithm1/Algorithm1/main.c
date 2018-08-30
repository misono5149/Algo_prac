//
//  main.c
//  Algorithm1
//
//  Created by misono on 2018. 3. 13..
//  Copyright © 2018년 hufs. All rights reserved.
//  codeground by samsung algorithm practice
// www.codeground.org/practice/practiceProblemView

#include <stdio.h>
int Answer; //XOR한값
int main() {
    int T, test_case;
    setbuf(stdout, NULL);
    scanf("%d", &T); //T는 집어넣을 test_case묶음의 수
    for(test_case = 0; test_case<T; test_case++)
    {
        int number;
        int temp = 0;
        scanf("%d", &number);
        int age = 0;
        if(number == 0);
        else if(number == 1)
            Answer = number;
        else{
            for(int i = 0; i < number; i++){
                scanf("%d", &age);
                Answer = Answer ^ age;
            }
        }
        printf("Case #%d\n", test_case+1);
        printf("%d\n", Answer);
    }
    return 0;
}
