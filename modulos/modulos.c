#include <stdio.h>
#include "modulos.h"

float calculoSubtotal(float sub)
{
    float subtotal1;
    if (sub > 100 && sub <= 500)
    {
        printf("Se aplica un decuento del 5 porciento\n");
        subtotal1 = sub * 0.95;
    }
    else if (sub > 500 && sub <= 1000)
    {
        printf("Se aplica un decuento del 7 porciento\n");
        subtotal1 = sub * 0.93;
    }
    else if (sub > 1000)
    {
        printf("Se aplica un decuento del 10 porciento\n");
        subtotal1 = sub * 0.90;
    }
    else
    {
        subtotal1 = sub;
        printf("No se aplica descuento dado que el mónto no alcanzo el mínimo necesario\n");
    }

    return subtotal1;
}

void imprimirFactura(float na, float nb, float nc, float nd, float ne,
                     float prca, float prcb, float prcc, float prcd, float prce,
                     float tota, float totb, float totc, float totd, float tote,
                     char nombre[], char cedula[])
{
    printf("*********   FACTURA ************\n");
    printf("Nombre: %s\n", nombre);
    printf("Nro. cédula: %s\n", cedula);
    printf("Producto                Número              valor           total\n");
    if (na != 0)
    {
        printf("Llantas                 %.2f                %.2f             %.2f\n", na, prca, tota);
    }
    if (nb != 0)
    {
        printf("Kit Pastillas de freno  %.2f                %.2f             %.2f\n", nb, prcb, totb);
    }
    if (nc != 0)
    {
        printf("Kit de embrague         %.2f                %.2f             %.2f\n", nc, prcc, totc);
    }
    if (nd != 0)
    {
        printf("Faro                    %.2f                %.2f             %.2f\n", nd, prcd, totd);
    }
    if (ne != 0)
    {
        printf("Radiador                %.2f                %.2f             %.2f\n", ne, prce, tote);
    }
}


