int main(){
    int cont, x;

    char nome[10];

    strcpy (nome, "papelao");

    cont = strlen(nome) - 1; // 7-1
    printf("%d\n",cont); // 6

    for (x=0; x <= cont; x++)
         printf ("%d\n", x-1);
}
