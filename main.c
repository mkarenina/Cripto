//Trabalho 1. ED1.
//Marianna Karenina de Almeida Fl�res

// <<<<< CRIPTO >>>>>>

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

//Defini��es

struct auxiliar{
    char letra;
};

typedef struct elemento* Lista;

struct elemento{
    struct auxiliar dados;
    struct elemento *prox;
};
typedef struct elemento Elem;

//cria_Lista
Lista* cria_Lista(){
    Lista* li = (Lista*) malloc(sizeof(Lista));
    if(li != NULL)
        *li = NULL;
    return li;
}

//insere_Elemento
int insere_Elemento(Lista* li, struct auxiliar al){

    if(li == NULL)
        return 0;
    Elem *no;
    no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL)
        return 0;
    no->dados = al;
    no->prox = NULL;
    if((*li) == NULL){ //lista vazia: insere in�cio
        *li = no;
    }else{
        Elem *aux;
        aux = *li;
        while(aux->prox != NULL){
            aux = aux->prox;
        }
        aux->prox = no;
    }

  // printf("%c\n",no->dados.letra);     teste de inser��o na lista

    return 1;
}

//imprime_Lista

void imprime_Lista(Lista* li){

    if(li == NULL){
        return;
    }


    Elem* no = *li;

    while(no != NULL){

        printf("%c",no->dados.letra);

		no = no->prox;

    }

    return;
}

//libera_Lista

void libera_lista(Lista* li){
    if(li != NULL){
        Elem* no;
        while((*li) != NULL){
            no = *li;
            *li = (*li)->prox;
            free(no);
        }
        free(li);
    }
}

//<<<<< comando_1
void criptografa_um (){

	Lista* inicio;
	Lista* inicio_aux;
	Elem* no;
	struct auxiliar teste;
	char caracter;

	inicio = cria_Lista ();
	inicio_aux = inicio;

	scanf ("%c", &caracter);


	while(caracter == '\n' || caracter == '\r')
        scanf ("%c", &caracter);

	while (caracter != '\n' && caracter != '\r'){		//insere na lista

		teste.letra = caracter;

		insere_Elemento (inicio, teste);

		scanf("%c", &caracter);

	}

    no = *inicio_aux;

    while(no != NULL){									//criptografa
        no->dados.letra = (no->dados.letra) +1;
        no = no->prox;
    }

	imprime_Lista (inicio_aux);
	
	libera_lista(inicio);

	
	return;
}

//comando_-1

void descriptografa_um (){

	Lista* inicio;
	Lista* inicio_aux;
	Elem* no;
	struct auxiliar teste;
	char caracter;

	inicio = cria_Lista ();
	inicio_aux = inicio;

	scanf ("%c", &caracter);

	while(caracter == '\n' || caracter == '\r')
        scanf ("%c", &caracter);

	while (caracter != '\n' && caracter != '\r'){		//insere na lista

		teste.letra = caracter;

		insere_Elemento (inicio, teste);

		scanf("%c", &caracter);

	}

    no = *inicio_aux;

    while(no != NULL){								    //descriptografa
        no->dados.letra = (no->dados.letra) -1;
        no = no->prox;
    }

	imprime_Lista (inicio_aux);
	
	libera_lista(inicio);


	return;
}

//<<<<< comando_2
void criptografa_dois (){

	Lista* inicio;
	Lista* inicio_aux;
	Elem* no;
	struct auxiliar teste;
	char caracter;

	inicio = cria_Lista ();
	inicio_aux = inicio;

	scanf ("%c", &caracter);

	while(caracter == '\n' || caracter == '\r')
        scanf ("%c", &caracter);

	while (caracter != '\n' && caracter != '\r'){		//insere na lista

		teste.letra = caracter;

		insere_Elemento (inicio, teste);

		scanf("%c", &caracter);

	}

    no = *inicio_aux;

    while(no != NULL){								//criptografa
        no->dados.letra = (no->dados.letra) +3;
        no = no->prox;
    }

	imprime_Lista (inicio_aux);

	libera_lista(inicio);


	return;

}

//<<<<< comando_-2
void descriptografa_dois (){

	Lista* inicio;
	Lista* inicio_aux;
	Elem* no;
	struct auxiliar teste;
	char caracter;

	inicio = cria_Lista ();
	inicio_aux = inicio;

	scanf ("%c", &caracter);

	while(caracter == '\n' || caracter == '\r')
        scanf ("%c", &caracter);

	while (caracter != '\n' && caracter != '\r'){	//insere na lista

		teste.letra = caracter;

		insere_Elemento (inicio, teste);

		scanf("%c", &caracter);

	}

    no = *inicio_aux;

    while(no != NULL){								//descriptografa
        no->dados.letra = (no->dados.letra) -3;
        no = no->prox;
    }

	imprime_Lista (inicio_aux);

	libera_lista(inicio);


	return;
}

//<<<<< comando_3

void criptografa_tres (){

	Lista* inicio;
	Lista* inicio_aux;
	Elem* no;
	struct auxiliar teste;
	char caracter;

	inicio = cria_Lista ();
	inicio_aux = inicio;

	scanf ("%c", &caracter);
	while(caracter == '\n' || caracter == '\r')
        scanf ("%c", &caracter);

	while (caracter != '\n' && caracter != '\r'){		//insere na lista

		teste.letra = caracter;

		insere_Elemento (inicio, teste);

		scanf("%c", &caracter);

	}

    no = *inicio_aux;

	int i = 1;

    while(no != NULL){									//criptografa
        no->dados.letra = (no->dados.letra) +i;
        no = no->prox;

        i++;

        if (i == 4){

        	i=1;
		}
    }

	imprime_Lista (inicio_aux);

	libera_lista(inicio);

	
	return;
}

//<<<<< comando_-3

void descriptografa_tres (){

	Lista* inicio;
	Lista* inicio_aux;
	Elem* no;
	struct auxiliar teste;
	char caracter;

	inicio = cria_Lista ();
	inicio_aux = inicio;

	scanf ("%c", &caracter);
	while(caracter == '\n' || caracter == '\r')
        scanf ("%c", &caracter);

	while (caracter != '\n' && caracter != '\r'){		//insere na lista

		teste.letra = caracter;

		insere_Elemento (inicio, teste);

		scanf("%c", &caracter);

	}

    no = *inicio_aux;

	int i = 1;

    while(no != NULL){									//descriptografa
        no->dados.letra = (no->dados.letra) - i;
        no = no->prox;

        i++;

        if (i == 4){

        	i=1;
		}
    }

	imprime_Lista (inicio_aux);

	libera_lista(inicio);
	

	return;
}

//<<<<< comando_4

void criptografa_quatro (){

	Lista* inicio;
	Lista* inicio_aux;
	Elem* no;
	struct auxiliar teste;
	char caracter;
	char chave [5];

	int j = 0;

	while (j != 5){

		scanf("%c", &chave[j]);

		j++;
	}
    scanf("%*c");
	//getchar ();

	inicio = cria_Lista ();
	inicio_aux = inicio;

	scanf ("%c", &caracter);
	while(caracter == '\n' || caracter == '\r')
        scanf ("%c", &caracter);

	while (caracter != '\n' && caracter != '\r'){		//insere na lista

		teste.letra = caracter;

		insere_Elemento (inicio, teste);

		scanf("%c", &caracter);

	}

    no = *inicio_aux;

    int key = (int)chave[0];

	int i = 0;

    while(no != NULL){									//criptografa

    	key = chave[i] - 48;
        no->dados.letra = (no->dados.letra) + key ;
        no = no->prox;

        i++;

        if (i == 5){

        	i=0;
		}
    }

	imprime_Lista (inicio_aux);

	libera_lista(inicio);
	

	return;
}


//<<<<< comando_-4

void descriptografa_quatro (){

	Lista* inicio;
	Lista* inicio_aux;
	Elem* no;
	struct auxiliar teste;
	char caracter;
	char chave [5];

	int j = 0;

	while (j != 5){

		scanf("%c", &chave[j]);
	
		j++;
	}
    scanf("%*c");
	//getchar ();

	inicio = cria_Lista ();
	inicio_aux = inicio;

	scanf ("%c", &caracter);
	while(caracter == '\n' || caracter == '\r')
        scanf ("%c", &caracter);

	while (caracter != '\n' && caracter != '\r'){		//insere na lista

		teste.letra = caracter;

		insere_Elemento (inicio, teste);

		scanf("%c", &caracter);

	}

    no = *inicio_aux;

    int key = (int)chave[0];

	int i = 0;

    while(no != NULL){							      //descriptografa

    	key = chave[i] - 48;
        no->dados.letra = (no->dados.letra) - key ;
        no = no->prox;

        i++;

        if (i == 5){

        	i=0;
		}
    }

	imprime_Lista (inicio_aux);

	libera_lista(inicio);


	return;
}

//comando_5

void criptografa_cinco (){

	Lista* inicio;
	Lista* inicio_aux;
	Elem* no;
	struct auxiliar teste;
	char caracter;
	char chave [5];

	int j = 0;

	while (j != 5){

		scanf("%c", &chave[j]);

		j++;
	}
    scanf("%*c");
	//getchar ();

	inicio = cria_Lista ();
	inicio_aux = inicio;

	scanf ("%c", &caracter);

	int cont = 1;

	while(caracter == '\n' || caracter == '\r')
        scanf ("%c", &caracter);

	while (caracter != '\n' && caracter != '\r'){  //insere na lista

		if(cont%4== 0 ){

		teste.letra = '*';

		insere_Elemento (inicio, teste);

		cont ++ ;

		}else{

			teste.letra = caracter;

			insere_Elemento (inicio, teste);

			scanf("%c", &caracter);
			cont ++;
		}
	}

    no = *inicio_aux;

    int key = (int)chave[0];

	int i = 0;
	int n = 1;

    while(no != NULL){				//criptografa

        if(n%4 == 0){
        no->dados.letra = '*';
        no = no->prox;

		}else{

		key = chave[i] - 48;
        no->dados.letra = (no->dados.letra) + key ;
        no = no->prox;
        i++;

		}

        if (i == 5){
        	i=0;
		}

		n++;
    }

	imprime_Lista (inicio_aux);

	libera_lista(inicio);
	

	return;
}

//comando_-5

void descriptografa_cinco (){

	Lista* inicio;
	Lista* inicio_aux;
	Elem* no;
	struct auxiliar teste;
	char caracter;
	char chave [5];

	int j = 0;

	while (j != 5){

		scanf("%c", &chave[j]);
	
		j++;
	}
    scanf("%*c");
//	getchar ();

	inicio = cria_Lista ();
	inicio_aux = inicio;

	scanf ("%c", &caracter);

	int cont = 1;

	while(caracter == '\n' || caracter == '\r')
        scanf ("%c", &caracter);

	while (caracter != '\n' && caracter != '\r'){	//insere na lista

		if(cont%4== 0 ){

		scanf("%c", &caracter);

		cont ++ ;

		}else{

			teste.letra = caracter;

			insere_Elemento (inicio, teste);

			scanf("%c", &caracter);
			cont ++;
		}
	}

    no = *inicio_aux;

    int key = (int)chave[0];

	int i = 0;

    while(no != NULL){						//descriptografa

		key = chave[i] - 48;
        no->dados.letra = (no->dados.letra) - key ;
        no = no->prox;
        i++;

        if (i == 5){
        	i=0;
		}

    }

	imprime_Lista (inicio_aux);

	libera_lista(inicio);
	

	return;
}

int main (void){

	int comando;

	scanf ("%d\n", &comando);
	//getchar();
	
		if (comando == 1) {
			criptografa_um();
		 }
		if (comando == -1) {
			descriptografa_um ();
		 }
		if (comando == 2) {
			criptografa_dois();
		 }
		if (comando == -2) {
		 	descriptografa_dois ();
		 }
		if (comando == 3) {
			criptografa_tres ();
		 }
		if (comando == -3) {
		 	descriptografa_tres();
		 }
		if (comando == 4) {
		 	criptografa_quatro ();
		 }
		if (comando == -4) {
		 	descriptografa_quatro ();
		 }
		if (comando ==  5) {
			criptografa_cinco ();
		 }
		if (comando == -5) {
			descriptografa_cinco ();
		}

		return 0;
}
