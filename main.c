#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// DICHIARO FUNZIONI.
void Logo (void);
void LogoEasy (void);
void LogoHard (void);
void Istruzioni (void);
void Vittoria (void);
void Sconfitta (void);
void LogoIstruzioni (void);
void Easymode (void);
void HardMode (void);

//VARIABILI GLOBALI.
char nome[15];
int scelta_mod; // scelta della modalita' a cui l'utente vuole giocare
int scelta_fine; // l'utente se perde, gli viene chiesto se ricominciare il gioco o meno.

int main()
{
    system("cls");
    Logo();
    int sceltamenu;//scelta effettuata nel menu, istruzioni o gioco.
    printf("\n\nCiao player e benvenuto in ___THE DARK NUMBERs___\nInserisci il tuo nickname: ");
    scanf("%s",&nome);
    printf("\nBene %s per cominciare digita un numero che corrisponde all'opzione scelta:\n",nome);
    printf("1. Istruzioni del gioco THE DARK NUMBERs;\n");
    printf("2. Gioca a THE DARK NUMBERs.\n");
    do
    {
        printf("La tua scelta: ");
        scanf("%d",&sceltamenu);
        if(sceltamenu!=1 && sceltamenu!=2)
        {
            printf("Scelta non valida!!!\n\n");
        }
    }while(sceltamenu!=1 && sceltamenu!=2);

    switch(sceltamenu)
    {
        case 1:
            Istruzioni();
            getch();
            main();
            break;
        case 2:
            printf("\n\n%s scegli scegli la modalita' di gioco:\n1. EASY MODE;\n2. HARD MODE.\n ",nome);
            do
            {
                printf("La tua risposta: ");
                scanf("%d",&scelta_mod);
                printf("\n");
                if(scelta_mod!=1 && scelta_mod!=2)
                {
                    printf("Scelta non valida.\n");
                }
            }while(scelta_mod!=1 && scelta_mod!=2);
            if(scelta_mod==1)
            {
                EasyMode();
            }
            else
            {
                HardMode();
            }
            break;
    }
    return 0;
}
void Istruzioni (void)
{
    system("cls");
    sleep(1);
    LogoIstruzioni();
    printf("\n\n");
    sleep(1);
    printf("Ciao %s, benvenuto nel manuale di istruzioni, per capire il gioco segui passo passo quello che sto per dirti:\n",nome);
    printf("Questo gioco consiste nell'indovinare dei numeri estratti casualmente.\n");
    printf("Prima di iniziare a giocare ti verra' chiesta a quale modalita' preferisci giocare: La Easy oppure la Hard.\n\n");
    printf("EASY MODE: La Easy e' una modalita' semplificata: i numeri estratti sono 10 (da 1 a 20), quelli da scegliere 2,\n");
    printf("il tuo obbiettivo e' quello di indovinare almeno 1 numero.\n\n");
    printf("HARD MODE: Questa modalita' e' piu' complicata rispetto alla precedente, ma non impossibile; I numeri estratti\n");
    printf("sono 25 (da 1 a 50), quelli da scegliere sono 3 e l'obbiettivo e' quello di indovinare almeno 2 numeri.\n\n");
    printf("Detto questo sei pronto a giocare, buona fortuna.\n");
    printf("\nPremi un tasto per tornare al menu...\n");
}
void EasyMode (void)
{
    //Dichiaro Variabili
    int cont_easy; //Contatore usato nella mod. easy.
    int cont_easy2; //Secondo Contatore usato nella mod. easy.
    int n_scelti[1]; // numeri scelti dall'utente nella mod. easy.
    int n_estratti[9]; //Numeri estratti nella mod. easy.
    int ni_easy=0; // Contatore numeri indovinati nella mod. easy.

    system("cls");
    printf("Hai scelto: EASY MODE;\nBuona Fortuna.\n");
    sleep(1);
    system("cls");
    sleep(0,5);
    LogoEasy();
    // Riquadro per ricordare gli obbiettivi.
    printf("\n\nNumeri Estratti: 10, da 1 a 20\n");
    printf("Numeri da indovinare: 1\n");

    //Genero i numeri da indovinare
    for(cont_easy=0; cont_easy<10; cont_easy++)
    {
        n_estratti[cont_easy]=rand()%20+1;
        //printf("%d\n",n_estratti[cont_easy]); //riga usata per testare il gioco.
    }

    // Fase input.
    printf("\nInserisci 2 numeri:\n");
    for(cont_easy=0; cont_easy<2; cont_easy++)
    {
        printf("Numero (%d di 2 ): ",cont_easy+1);
        scanf("%d",&n_scelti[cont_easy]);
    }

    //Conrtollo se i numeri inseriti corrispondono a quelli estratti.
    for(cont_easy=0; cont_easy<10; cont_easy++)
    {
        for(cont_easy2=0; cont_easy2<2; cont_easy2++)
        {
            if(n_scelti[cont_easy2]==n_estratti[cont_easy])
            {
                ni_easy=ni_easy+1;
            }
        }
    }
    printf("\n\nIndovinati: %d\n",ni_easy); //riga usata per testare il gioco.
    if(ni_easy>=1)
    {
        system("cls");
        //VITTORIA.
        Vittoria();
    }
    else
    {
        system("cls");
        Sconfitta();
    }
    printf("\n\nVuoi ricominciare a giocare?  (1=SI) (0=NO)\n");
    do
    {
        printf("La tua risposta: ");
        scanf("%d",&scelta_fine);
    }while(scelta_fine!=0 && scelta_fine!=1);
    if(scelta_fine==1)
    {
        main();
    }
    else
    {
        return 0;
    }
}
void HardMode (void)
{
    //Dichiaro Variabili
    int cont_hard; //Contatore usato nella mod. hard.
    int cont_hard2; //Secondo Contatore usato nella mod. hard.
    int n_scelti_h[2]; // numeri scelti dall'utente nella mod. hard.
    int n_estratti_h[24]; //Numeri estratti nella mod. hard.
    int ni_hard=0; // Contatore numeri indovinati nella mod. hard.

    system("cls");
    printf("Hai scelto: HARD MODE;\nBuona Fortuna.\n");
    sleep(1);
    system("cls");
    sleep(0,5);
    LogoHard();
    // Riquadro per ricordare gli obbiettivi.
    printf("\n\nNumeri Estratti: 25, da 1 a 50\n");
    printf("Numeri da indovinare: 2\n");

    //Genero i numeri da indovinare
    for(cont_hard=0; cont_hard<25; cont_hard++)
    {
        n_estratti_h[cont_hard]=rand()%50+1;
        //printf("%d\n",n_estratti_h[cont_hard]); //riga usata per testare il gioco.
    }

    // Fase input.
    printf("\nInserisci 3 numeri:\n");
    for(cont_hard=0; cont_hard<3; cont_hard++)
    {
        printf("Numero (%d di 3 ): ",cont_hard+1);
        scanf("%d",&n_scelti_h[cont_hard]);
    }

    //Conrtollo se i numeri inseriti corrispondono a quelli estratti.
    for(cont_hard=0; cont_hard<10; cont_hard++)
    {
        for(cont_hard2=0; cont_hard2<2; cont_hard2++)
        {
            if(n_scelti_h[cont_hard2]==n_estratti_h[cont_hard])
            {
                ni_hard=ni_hard+1;
            }
        }
    }
    printf("\n\nIndovinati: %d\n",ni_hard); //riga usata per testare il gioco.
    if(ni_hard>=1)
    {
        system("cls");
        //VITTORIA.
        Vittoria();
    }
    else
    {
        system("cls");
        Sconfitta();
    }
    printf("\n\nVuoi ricominciare a giocare?  (1=SI) (0=NO)\n");
    do
    {
        printf("La tua risposta: ");
        scanf("%d",&scelta_fine);
    }while(scelta_fine!=0 && scelta_fine!=1);
    if(scelta_fine==1)
    {
        main();
    }
    else
    {
        return 0;
    }
}

void Logo (void)
{
	printf("#######  #     #  ######     #####    #  #   #####  #  #     ##   #  #    #  ##   ##  #####   ######  ######  ######\n");
	printf("   #     #     #  #          #    #  #    #  #   #  # #      # #  #  #    #  # # # #  #    #  #       #    #  #\n");
	printf("   #     #######  #####      #    #  ######  #####  ##       #  # #  #    #  #  #  #  ######  #####   ######  #####\n");
	printf("   #     #     #  #          #    #  #    #  #  #   # #      #   ##  #    #  #     #  #    #  #       #   #       #\n");
	printf("   #     #     #  ######     #####   #    #  #   #  #  #     #    #  ######  #     #  #####   ######  #    #  #####\n");
}
void LogoIstruzioni (void)
{
    printf("#  ######  #######  ######  #     #  #######  #  #######  #    #  #\n");
    printf("#  #          #     #    #  #     #       #   #  #     #  # #  #  #\n");
    printf("#  ######     #     ######  #     #     #     #  #     #  #  # #  #\n");
    printf("#       #     #     #   #   #     #   #       #  #     #  #   ##  #\n");
    printf("#  ######     #     #    #   #####   #######  #  #######  #    #  #\n");
}
void LogoEasy (void)
{
    printf("#####    # #    ######  #     #     ##    ##  #######  #####   #####\n");
    printf("#      #     #  #        #   #      # #  # #  #     #  #    #  #\n");
    printf("####   #######  ######     #        #   #  #  #     #  #    #  ####\n");
    printf("#      #     #       #     #        #      #  #     #  #    #  #\n");
    printf("#####  #     #  ######     #        #      #  #######  #####   #####\n");
}
void LogoHard (void)
{
    printf("#    #    # #    ######  ######      ##    ##  #######  #####   #####\n");
    printf("#    #  #     #  #    #  #     #     # #  # #  #     #  #    #  #\n");
    printf("######  #######  ######  #     #     #   #  #  #     #  #    #  ####\n");
    printf("#    #  #     #  #  #    #     #     #      #  #     #  #    #  #\n");
    printf("#    #  #     #  #    #  ######      #      #  #######  #####   #####\n");
}
void Vittoria (void)
{
    printf("#    #    # #    #     #       #  #  #    #  #######  #######   #  #  #\n");
    printf("#    #  #     #  #      #     #   #  # #  #     #     #     #   #  #  #\n");
    printf("######  #######  #       #   #    #  #  # #     #     #     #   #  #  #\n");
    printf("#    #  #     #  #        # #     #  #   ##     #     #     #\n");
    printf("#    #  #     #  #         #      #  #    #     #     #######   #  #  #\n");
    printf("\n\n%s, complimenti !!! Sei riuscito a vincere il gioco.  :)\n",nome);
    sleep(1);
}
void Sconfitta (void)
{
    printf("#    #    # #    #     #######  ######  #######  #######  #######   #  #  #\n");
    printf("#    #  #     #  #     #     #  #       #     #  #        #     #   #  #  #\n");
    printf("######  #######  #     #######  #####   #######  #######  #     #   #  #  #\n");
    printf("#    #  #     #  #     #        #       #   #          #  #     #\n");
    printf("#    #  #     #  #     #        ######  #     #  #######  #######   #  #  #\n");
}



