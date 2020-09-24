//
//  main.c
//  project
//
//  Created by 이유진 on 2020/09/24.
//  Copyright © 2020 이유진. All rights reserved.
//

#include <stdio.h>
int main(int argc, char *arg[]) {
    int x,y,z,m;
    int a,b,c;

  x= 1;
  a= 3;
  b= 4;
  c= 5;
  z= 2;

  y= a*x*x + b*x + c;
  m= (x+y+z)/3;
    
printf("y=%d, m=%d\n", y, m);

    return 0;
}
