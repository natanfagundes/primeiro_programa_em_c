int main() {
    int prato, sobremesa, bebida;
    int calorias = 0;

    printf("Prato (1-vegetariano, 2-peixe, 3-frango, 4-carne): ");
    scanf("%d", &prato);

    printf("Sobremesa (1-abacaxi, 2-sorvete, 3-mousse, 4-chocolate): ");
    scanf("%d", &sobremesa);

    printf("Bebida (1-cha, 2-suco, 3-refrigerante): ");
    scanf("%d", &bebida);

    if (prato == 1) calorias += 180;
    else if (prato == 2) calorias += 230;
    else if (prato == 3) calorias += 250;
    else calorias += 350;

    if (sobremesa == 1) calorias += 75;
    else if (sobremesa == 2) calorias += 110;
    else if (sobremesa == 3) calorias += 170;
    else calorias += 200;

    if (bebida == 1) calorias += 20;
    else if (bebida == 2) calorias += 70;
    else calorias += 100;

    printf("Total de calorias: %d\n", calorias);

    return 0;
}
