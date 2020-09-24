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
    
    printf("input second : ");
    
    scanf("%i", &input);
    
    min = input / 60;
    
    sec = input % 60;
    
    printf("the time is %i : %i\n", min, sec);
    
    return 0;
}
