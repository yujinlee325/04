//
//  main.c
//  project
//
//  Created by 이유진 on 2020/09/24.
//  Copyright © 2020 이유진. All rights reserved.
//

#include <stdio.h>
int main(int argc, char *arg[]) {
    int x, y;
   
    printf("input two integers : ");
     
    scanf("%i %i", &x, &y);
    
    printf("+ result is : %i\n",x+y);
    printf("- result is : %i\n",x-y);
    printf("* result is : %i\n",x*y);
    printf("/ result is : %i\n",x/y);
    printf("%% result is : %i\n",x%y);
    
    return 0;
}
