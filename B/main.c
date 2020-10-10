/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 23 de septiembre de 2020, 09:58 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * FizzBozz
 */
int main(int argc, char** argv) {

    int n,num;
    char car[1000000];
    int x=0,x2;
    scanf("%d",&n);
    while(n>0){
        
        scanf("%d",&num);
        if((num%3==0) && (num%5!=0)){
             car[x]=1;
            
        }
        if((num%5==0) && (num%3!=0)){
            car[x]=2;
            
        }
        if((num%3==0) && (num%5==0)){
            car[x]=3;
            
        }
        if((num%3!=0) && (num%5!=0)){
            car[x]=4;
            
        }
        x+=1;
        n-=1;
    }
    x2=x;
    x=0;
    while(x<=x2){
        if(car[x]==1)
            printf("Fizz\n");
        if(car[x]==2)
            printf("Bozz\n");
        if(car[x]==3)
            printf("FizzBozz\n");
        if(car[x]==4)
            printf("NoFizzBozz\n");
        x+=1;
        
    }
    
    return (EXIT_SUCCESS);
}

