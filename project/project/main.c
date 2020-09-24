//
//  main.c
//  project
//
//  Created by 이유진 on 2020/09/24.
//  Copyright © 2020 이유진. All rights reserved.
//

#include <stdio.h>
int main(int argc, char *arg[]) {
    int input;
    int sec, min;
    
    printf("input year : ");
    
    scanf("%i", &input);
    
    printf("is %i leap year? %i\n", input,
                                    (input%4==0 && input%100!=0)||(input%400==0) );
    
    return 0;
}
