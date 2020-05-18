#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

void Logo ();
void LogoEasy ();
void LogoHard ();
void Istruzioni ();
void Vittoria ();
void Sconfitta ();
void LogoIstruzioni ();
void EasyMode ();
void HardMode ();


//VARIABILI GLOBALI.
char nome[15];
int scelta_mod; // scelta della modalita' a cui l'utente vuole giocare
int scelta_fine; // l'utente se perde, gli viene chiesto se ricominciare il gioco o meno.


int main()
{
    // system("cls");
    Logo();
    int sceltamenu;//scelta effettuata nel menu, istruzioni o gioco.
    cout<<"\n\nCiao player e benvenuto in ___THE DARK NUMBERs___\nInserisci il tuo nickname: ";
    cin>>nome;
    cout<<"\nBene "<<nome<<" per cominciare digita un numero che corrisponde all'opzione scelta:\n";
    cout<<"1. Istruzioni del gioco THE DARK NUMBERs;\n";
    cout<<"2. Gioca a THE DARK NUMBERs.\n";
    do
    {
        cout<<"La tua scelta: ";
        // scanf("%d",&sceltamenu);
        cin>>sceltamenu;

        if(sceltamenu!=1 && sceltamenu!=2)
        {
            cout<<"Scelta non valida!!!\n\n";
        }
    }while(sceltamenu!=1 && sceltamenu!=2);

    switch(sceltamenu)
    {
        case 1:
            Istruzioni();
            // getch();
            main();
            break;
        case 2:
            // cout<<"\n\n%s scegli scegli la modalita' di gioco:\n1. EASY MODE;\n2. HARD MODE.\n ",nome);
                cout<<"\n\n"<<nome<<" scegli scegli la modalita' di gioco:\n1. EASY MODE;\n2. HARD MODE.\n";
            do
            {
                cout<<"La tua risposta: ";
                cin>>scelta_mod;
                // scanf("%d",&scelta_mod);
                cout<<endl;
                if(scelta_mod!=1 && scelta_mod!=2)
                {
                    cout<<"Scelta non valida.\n";
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





void Logo ()
{
    cout<<"#######  #     #  ######     #####    #  #   #####  #  #     ##   #  #    #  ##   ##  #####   ######  ######  ######\n";
    cout<<"   #     #     #  #          #    #  #    #  #   #  # #      # #  #  #    #  # # # #  #    #  #       #    #  #\n";
    cout<<"   #     #######  #####      #    #  ######  #####  ##       #  # #  #    #  #  #  #  ######  #####   ######  #####\n";
    cout<<"   #     #     #  #          #    #  #    #  #  #   # #      #   ##  #    #  #     #  #    #  #       #   #       #\n";
    cout<<"   #     #     #  ######     #####   #    #  #   #  #  #     #    #  ######  #     #  #####   ######  #    #  #####\n";
}
void LogoIstruzioni ()
{
    cout<<"#  ######  #######  ######  #     #  #######  #  #######  #    #  #\n";
    cout<<"#  #          #     #    #  #     #       #   #  #     #  # #  #  #\n";
    cout<<"#  ######     #     ######  #     #     #     #  #     #  #  # #  #\n";
    cout<<"#       #     #     #   #   #     #   #       #  #     #  #   ##  #\n";
    cout<<"#  ######     #     #    #   #####   #######  #  #######  #    #  #\n";
}
void LogoEasy ()
{
    cout<<"#####    # #    ######  #     #     ##    ##  #######  #####   #####\n";
    cout<<"#      #     #  #        #   #      # #  # #  #     #  #    #  #\n";
    cout<<"####   #######  ######     #        #   #  #  #     #  #    #  ####\n";
    cout<<"#      #     #       #     #        #      #  #     #  #    #  #\n";
    cout<<"#####  #     #  ######     #        #      #  #######  #####   #####\n";
}
void LogoHard ()
{
    cout<<"#    #    # #    ######  ######      ##    ##  #######  #####   #####\n";
    cout<<"#    #  #     #  #    #  #     #     # #  # #  #     #  #    #  #\n";
    cout<<"######  #######  ######  #     #     #   #  #  #     #  #    #  ####\n";
    cout<<"#    #  #     #  #  #    #     #     #      #  #     #  #    #  #\n";
    cout<<"#    #  #     #  #    #  ######      #      #  #######  #####   #####\n";
}
void Vittoria ()
{
    cout<<"#    #    # #    #     #       #  #  #    #  #######  #######   #  #  #\n";
    cout<<"#    #  #     #  #      #     #   #  # #  #     #     #     #   #  #  #\n";
    cout<<"######  #######  #       #   #    #  #  # #     #     #     #   #  #  #\n";
    cout<<"#    #  #     #  #        # #     #  #   ##     #     #     #\n";
    cout<<"#    #  #     #  #         #      #  #    #     #     #######   #  #  #\n";
    cout<<"\n\n"<<nome<<", complimenti !!! Sei riuscito a vincere il gioco.  :)\n";
    // sleep(1);
}
void Sconfitta ()
{
    cout<<"#    #    # #    #     #######  ######  #######  #######  #######   #  #  #\n";
    cout<<"#    #  #     #  #     #     #  #       #     #  #        #     #   #  #  #\n";
    cout<<"######  #######  #     #######  #####   #######  #######  #     #   #  #  #\n";
    cout<<"#    #  #     #  #     #        #       #   #          #  #     #\n";
    cout<<"#    #  #     #  #     #        ######  #     #  #######  #######   #  #  #\n";
}


void Istruzioni (void)
{
    // system("cls");
    // sleep(1);
    LogoIstruzioni();
    // cout<<"\n\n");
    cout<<endl<<endl;
    // sleep(1);

    cout<<"Ciao "<<nome<<", benvenuto nel manuale di istruzioni, per capire il gioco segui passo passo quello che sto per dirti:\n";
    cout<<"Questo gioco consiste nell'indovinare dei numeri estratti casualmente.\n";
    cout<<"Prima di iniziare a giocare ti verra' chiesta a quale modalita' preferisci giocare: La Easy oppure la Hard.\n\n";
    cout<<"EASY MODE: La Easy e' una modalita' semplificata: i numeri estratti sono 10 (da 1 a 20), quelli da scegliere 2,\n";
    cout<<"il tuo obbiettivo e' quello di indovinare almeno 1 numero.\n\n";
    cout<<"HARD MODE: Questa modalita' e' piu' complicata rispetto alla precedente, ma non impossibile; I numeri estratti\n";
    cout<<"sono 25 (da 1 a 50), quelli da scegliere sono 3 e l'obbiettivo e' quello di indovinare almeno 2 numeri.\n\n";
    cout<<"Detto questo sei pronto a giocare, buona fortuna.\n";
    cout<<"\nPremi un tasto per tornare al menu...\n";
}


void EasyMode()
{
    //Dichiaro Variabili
    int n_scelti[2]; // numeri scelti dall'utente nella mod. easy.
    int n_estratti[10]; //Numeri estratti nella mod. easy.
    int ni_easy=0; // Contatore numeri indovinati nella mod. easy.

    // system("cls");
    cout<<"Hai scelto: EASY MODE;\nBuona Fortuna.\n";
    // sleep(1);
    // system("cls");
    // sleep(0.5);
    LogoEasy();
    // Riquadro per ricordare gli obbiettivi.
    cout<<"\n\nNumeri Estratti: 10, da 1 a 20\n";
    cout<<"Numeri da indovinare: 1\n";

    //Genero i numeri da indovinare
    for(int cont_easy=0; cont_easy<10; cont_easy++)
    {
        n_estratti[cont_easy]=rand()%20+1;
        //cout<<"%d\n",n_estratti[cont_easy]); //riga usata per testare il gioco.
    }
    for (int i =0 ; i < 10; i++)
    {
        cout<<n_estratti[i]<<"\t";
    }
    cout<<endl;


    // Fase input.
    cout<<"\nInserisci 2 numeri:\n";
    for(int cont_easy=0; cont_easy<2; cont_easy++)
    {
        cout<<"Numero ("<<cont_easy+1<<" di 2 ): ";
        cin>>n_scelti[cont_easy];
        // scanf("%d",&n_scelti[cont_easy]);
    }


    //Conrtollo se i numeri inseriti corrispondono a quelli estratti.

    for(int cont_easy=0; cont_easy<2; cont_easy++)
    {
        for(int cont_easy2=0; cont_easy2<10; cont_easy2++)
        {
            if(n_scelti[cont_easy]==n_estratti[cont_easy2])
            {
                ni_easy=ni_easy+1;
                break;
            }
        }
    }

    // for(cont_easy=0; cont_easy<10; cont_easy++)
    // {
    //     for(cont_easy2=0; cont_easy2<2; cont_easy2++)
    //     {
    //         if(n_scelti[cont_easy2]==n_estratti[cont_easy])
    //         {
    //             ni_easy=ni_easy+1;
    //             break;
    //         }
    //     }
    // }
    cout<<"\n\nIndovinati: "<<ni_easy<<endl; //riga usata per testare il gioco.
    if(ni_easy>=1)
    {
        // system("cls");
        //VITTORIA.
        Vittoria();
    }
    else
    {
        // system("cls");
        Sconfitta();
    }
    cout<<"\n\nVuoi ricominciare a giocare?  (1=SI) (0=NO)\n";
    do
    {
        cout<<"La tua risposta: ";
        cin>>scelta_fine;
        // scanf("%d",&scelta_fine);
    }while(scelta_fine!=0 && scelta_fine!=1);
    if(scelta_fine==1)
    {
        main();
    }
    else
    {
        return;
    }
}


void HardMode ()
{
    //Dichiaro Variabili
    int n_scelti_h[3]; // numeri scelti dall'utente nella mod. hard.
    int n_estratti_h[25]; //Numeri estratti nella mod. hard.
    int ni_hard=0; // Contatore numeri indovinati nella mod. hard.

    // system("cls");
    cout<<"Hai scelto: HARD MODE;\nBuona Fortuna.\n";
    // sleep(1);
    // system("cls");
    // sleep(0,5);
    LogoHard();
    // Riquadro per ricordare gli obbiettivi.
    cout<<"\n\nNumeri Estratti: 25, da 1 a 50\n";
    cout<<"Numeri da indovinare: 2\n";

    //Genero i numeri da indovinare
    for(int cont_hard=0; cont_hard<25; cont_hard++)
    {
        n_estratti_h[cont_hard]=rand()%50+1;
        //cout<<"%d\n",n_estratti_h[cont_hard]); //riga usata per testare il gioco.
    }

    // Fase input.
    cout<<"\nInserisci 3 numeri:\n";
    for(int cont_hard=0; cont_hard<3; cont_hard++)
    {
        cout<<"Numero ("<<cont_hard+1<<" di 3 ): ";
        cin>>n_scelti_h[cont_hard];
        // scanf("%d",&n_scelti_h[cont_hard]);
    }

    //Conrtollo se i numeri inseriti corrispondono a quelli estratti.
    for(int cont_hard=0; cont_hard<3; cont_hard++)
    {
        for(int cont_hard2=0; cont_hard2<25; cont_hard2++)
        {
            if(n_scelti_h[cont_hard]==n_estratti_h[cont_hard2])
            {
                ni_hard=ni_hard+1;
                break;
            }
        }
    }


    cout<<"\n\nIndovinati: "<<ni_hard<<endl; //riga usata per testare il gioco.
    if(ni_hard>=1)
    {
        // system("cls");
        //VITTORIA.
        Vittoria();
    }
    else
    {
        // system("cls");
        Sconfitta();
    }
    cout<<"\n\nVuoi ricominciare a giocare?  (1=SI) (0=NO)\n";
    do
    {
        cout<<"La tua risposta: ";
        cin>>scelta_fine;
        // scanf("%d",&scelta_fine);
    }while(scelta_fine!=0 && scelta_fine!=1);
    if(scelta_fine==1)
    {
        main();
    }
    else
    {
        return;
    }
}