

void mostrar(int v[]){
    int i;
    for (i = 0; i < 15; i++)
    {
        printf("%i ", v[i]);
    }
}

int ordenarVetor(int v[]){
    int aux, i, j;
    for(i=0; i<15; i++){
        for(j = 15; j>0; j--){
            if(v[j]<v[j-1]){
                aux = v[j];
                v[j] = v[j-1];
                v[j-1] = aux;
            }
        }
    }
    mostrar(v);
}