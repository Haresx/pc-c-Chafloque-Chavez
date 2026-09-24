#include <stdio.h>
#include <math.h>
int main(){ 
    #define INVALIDO 0;
    #define NO_FORMAN 1;
    #define EQUILATERO 2;
    #define ISOSCELES 3;
    #define ESCALENO 4;

    int lado_a, lado_b, lado_c, tipo;
    float s=0, area=0;
    scanf("%d %d %d",&lado_a,&lado_b,&lado_c );

    if( !(lado_a>0 && lado_b>0 && lado_c>0)){
        tipo= INVALIDO;
    }
    else if ( !(lado_a+lado_b>lado_c && lado_a+lado_c>lado_b && lado_b+lado_c>lado_a) ){
        tipo = NO_FORMAN;
    }
    else if( lado_a==lado_b && lado_b==lado_c ){
        tipo= EQUILATERO;
    }
    else if( lado_a==lado_b || lado_a==lado_c || lado_b== lado_c ){
        tipo = ISOSCELES;
    }
    else if ( !(lado_a==lado_b || lado_a==lado_c || lado_b== lado_c) ){
        tipo = ESCALENO;
    }
    else {
        tipo = NO_FORMAN;
    }

    long long hip, cat1, cat2;
    if(lado_a > lado_b && lado_a > lado_c ){
        hip=lado_a;
        cat1=b;
        cat2=c;
    }
    else if(lado_b > lado_c && lado_b > lado_a ){
        hip=lado_b;
        cat1=a;
        cat2=c;
    }
    else if(lado_c > lado_a && lado_c > lado_b){
        hip=lado_c;
        cat1=a;
        cat2=b;
    }

    switch(tipo){
        case 0: {
            printf("Tipo: Invalido\n"); 
            break;
        }
        case 1: {
            printf("Lados : %d, %d, %d \n", lado_a, lado_b, lado_c);
            printf("Tipo: No forman\n");
            break;
        }
        case 2: {
            //equilatero
            
            s = (lado_a + lado_b + lado_c) / 2.0;
            area = sqrt(s * (s-lado_a) * (s-lado_b) * (s-lado_c));
            printf("Lados : %d, %d, %d \n", lado_a, lado_b, lado_c);
            printf("Tipo:Equilatero\n");
            if( (hip*hip)== (cat1*cat1) + (cat2*cat2) ){
                 printf("Rectangulo: Si");
            }
            else {
                printf("Rectangulo: No");
            }
            printf("Area: %.3f", area);
            break;
        }
        case 3: {
            //isosceles
            s = (lado_a + lado_b + lado_c) / 2.0;
            area = sqrt(s * (s-lado_a) * (s-lado_b) * (s-lado_c));
            printf("Lados : %d, %d, %d \n", lado_a, lado_b, lado_c);
            printf("Tipo:Isosceles\n");
            if( (hip*hip)== (cat1*cat1) + (cat2*cat2) ){
                 printf("Rectangulo: Si");
            }
            else {
                printf("Rectangulo: No");
            }
            printf("Area: %.3f", area);
            break;
        }
        case 4: {
            //escaleno
            s = (lado_a + lado_b + lado_c) / 2.0;
            area = sqrt(s * (s-lado_a) * (s-lado_b) * (s-lado_c));
            printf("Lados : %d, %d, %d \n", lado_a, lado_b, lado_c);
            printf("Tipo:Escaleno\n");
            if( (hip*hip)== (cat1*cat1) + (cat2*cat2) ){
                 printf("Rectangulo: Si");
            }
            else {
                printf("Rectangulo: No");
            }
            printf("Area: %.3f", area);
            break;
        }
    }
    
    return 0;
}
