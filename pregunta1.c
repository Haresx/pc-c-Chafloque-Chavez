#include<stdio.h>


void imprimir_binario(unsigned char n){
    for (int i = 7; i >= 0; i--) {
        putchar((n >> i) & 1 ? '1' : '0');
    }
    putchar('\n');
}

int main (void){

    unsigned int registro;
    unsigned char n;

    printf("Ingrese el numero binario a operar\n");
    scanf("%u",&registro);
    
    for(;;){
        int input;
        printf("Que desea hacer a continuacion?\n");
        printf("1.Encender el bit n\n");
        printf("2.Apagar el bit n\n");
        printf("3.Alternar el bit n\n");
        printf("4.Consultar si el bit n esta encendido\n");
        printf("5.Imprimir el registro en binario, hexadecimal y decimal sin signo\n");
        printf("6.Contar los bits encendidos\n");
        printf("7.Invertir todos los bits del registro\n");
        printf("0.Salir\n");
        
        scanf("%d",&input);
        if(input==0){
            break;
        }
        switch (input)
        {

        case 1: 
                do{
                    printf("Que bit quieres encender?\n");
                    scanf("%hhu",&n);
                }while(n>31);
                registro = registro | (1<<n);
                break;
        case 2: 
                do{
                    printf("Que bit quieres apagar?\n");
                    scanf("%hhu",&n);
                }while(n>31);
                registro = registro & ~(1 << n);
                break;
        case 3:
                do{
                    printf("Que bit quieres alternar?\n");
                    scanf("%hhu",&n);
                }while(n>31);
                registro ^= (1 << n);
                break;
        case 4:
                if (registro & (1 << n)) {
                } 
                break;
        case 5: 
                ;   
                int m = registro;
                printf("Binario : ");
                for (int i = 31; i >= 0; i--) {
                putchar((m >> i) & 1 ? '1' : '0');
                if (i % 4 == 0 && i) putchar(' '); }
                printf("\nHex : 0x%08X\n", m);
                printf("El decimal sin signo es: %u\n", registro);
                break;
        case 6:
                ;
                int unos = 0;
                unsigned int t = registro;
                while (t) { t &= (t - 1); unos++; }
                printf("La cantidad de unos encendidos es: %d\n", unos);
                break;
        case 7:
                printf("Numero invertido!");
                registro=~registro;
                break;
        default:
            break;
        }

        
    }



}