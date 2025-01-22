#include <stdio.h>
int main (int argc, char *argv[]) {

    int opc, Cboletos, total, pago, suelto, repetir;  
    int bCIEN = 0, bCINCUENTA = 0, mDIEZ = 0, mCINCO = 0, mDOS = 0, mUNO = 0;
    int general = 100, preferencial = 150, vip = 200;

    do
    {
        printf ("VENTA DE BOLETOS \n"); 
        printf ("Seleccione el tipo de boleto que desea comprar: \n");
        do
        {
            printf ("1. General - 100 PESOS \n");
            printf ("2. Prefencial - 150 PESOS \n");
            printf ("3. VIP - 200 PESOS \n"); 
            printf (">> ");
            scanf ("%d", &opc); 

            if (opc < 1 || opc > 3) {
                printf ("Opcion no valida, intente de nuevo. \n"); 
            }
        } while (opc < 1 || opc > 3);

        do
        {
            printf("Ingrese la cantidad de boletos: \n");
            printf (">> ");
            scanf("%d", &Cboletos);

            if (Cboletos <= 0){
                printf ("No puede ser una cantidad negativa o cero, intente de nuevo. \n");
            }
        } while (Cboletos <= 0);
        switch (opc)
        {
            case 1:
                total = Cboletos * general;
                break;
    
            case 2: 
                total = Cboletos * preferencial;
                break;

            case 3: 
                total = Cboletos * vip;
                break;
        }
        do
        {
        printf ("El costo total es %d. \n", total);
        printf ("Ingrese el dinero:\n");
        printf (">> ");
        scanf ("%d", &pago);

            if (pago < total)
            {
                printf ("Cantidad insuficiente ): \n"); 
            }
        } while (pago < total); 

        suelto = pago - total;
        printf ("El vuelto es %d. \n", suelto);

        if (suelto >= 100)
        {
            bCIEN = suelto / 100; 
            suelto = suelto - (bCIEN *100); 

        }else if (suelto >= 50); 
        {
            bCINCUENTA = suelto / 50; 
            suelto = suelto - (bCINCUENTA * 50);
        }
        if (suelto >= 10)
        {
            mDIEZ = suelto / 10; 
            suelto = suelto - (mDIEZ * 10); 

        }else if (suelto >= 5); 
        {
            mCINCO = suelto / 5; 
            suelto = suelto - (mCINCO * 5); 

        }
        if (suelto >= 2)
        {
            mDOS = suelto / 2; 
            suelto = suelto - (mDOS * 2); 

        }else if (suelto >= 1); 
        {
            mUNO = suelto; 
            suelto = suelto - mUNO; 
        }
        printf ("DESGLOSE DEL CAMBIO EN BILLETES Y MONEDAS \n"); 
        printf ("Billetes de 100 pesos: %d \n", bCIEN); 
        printf ("Billetes de 50 pesos: %d \n", bCINCUENTA);
        printf ("Monedas de 10 pesos: %d \n", mDIEZ);
        printf ("Monedas de 5 pesos: %d \n", mCINCO);
        printf ("Monedas de 2 pesos: %d \n", mDOS);
        printf ("Monedas de 1 peso: %d \n", mUNO);

        printf ("Desea realizar otra compra? (1 = SI y 2 = NO). \n");
        printf (">> ");
        scanf ("%d", &repetir);

    } while (repetir == 1);
    printf ("Fin. \n");

    return 0;
}