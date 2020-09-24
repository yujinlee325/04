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
    int hour, sec, min;
    
    printf("input sec : ");
    scanf("%i", &input);
    
    hour = input/3600 ;
    min = (input%3600)/60 ;
    sec = input%60 ;
    
    
    printf("the time is %i : %i : %i\n", hour, min, sec);
    
    return 0;
}
