/**
 * @Author  G.Schianchi
 * @Date      20 Marzo 2017
 * @Argument  Progetto
 *
 *
 *
 * Basi c
 *
 */

#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

#define NROW 12
#define NCOL 12

int g1=0;
int g2=0;

void GotoXY(int x,int y)
{
    COORD CursorPos = {x, y};
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, CursorPos);
}

void hidecursor(int visibility,int cursor_size)
{

    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = cursor_size;
    info.bVisible = visibility;
    SetConsoleCursorInfo(consoleHandle, &info);

}

void SetColor(short Color)
{


    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon,Color);
}

void controllo(char _alfa[NROW][NCOL])
{


    ///controlli per X

    if (_alfa[1][1]==_alfa[1][6] && _alfa[1][6]== _alfa[1][10] && _alfa[1][1]=='X')
    {
        system("cls");
        printf("\n\n\nIl giocatore 1 ha vinto questo turno!!!!!!");
        g1++;
        printf("\n\nIlpunteggio giocatore 1 e':%d",g1);



    }

    if(_alfa[1][1]== _alfa[6][1] && _alfa[6][1]== _alfa[10][1] && _alfa[1][1]=='X')
    {
        system("cls");
        printf("\n\n\nIl giocatore 1 ha vinto questo turno!!!!!!");
        g1++;
        printf("\n\nIlpunteggio giocatore 1 e':%d",g1);



    }
    if  (_alfa[1][10]== _alfa[6][10] && _alfa[6][10]== _alfa[10][10] && _alfa[1][10]=='X')
    {
        system("cls");
        printf("\n\n\nIl giocatore 1 ha vinto questo turno!!!!!!");
        g1++;
        printf("\n\nIlpunteggio giocatore 1 e':%d",g1);



    }
    if  (_alfa[10][1]==_alfa[10][6] && _alfa[10][6]== _alfa[10][10] && _alfa[10][1]=='X')
    {
        system("cls");
        printf("\n\n\nIl giocatore 1 ha vinto questo turno!!!!!!");
        g1++;
        printf("\n\nIlpunteggio giocatore 1 e':%d",g1);



    }
    if  (_alfa[1][1]== _alfa[6][6] && _alfa[6][6]==_alfa[10][10] && _alfa[1][1]=='X')
    {
        system("cls");
        printf("\n\n\nIl giocatore 1 ha vinto questo turno!!!!!!");
        g1++;
        printf("\n\nIlpunteggio giocatore 1 e':%d",g1);



    }
    if  (_alfa[1][10]==_alfa[6][6] && _alfa[6][6]==_alfa[10][1] && _alfa[1][10]=='X')
    {
        system("cls");
        printf("\n\n\nIl giocatore 1 ha vinto questo turno!!!!!!");
        g1++;
        printf("\n\nIlpunteggio giocatore 1 e':%d",g1);



    }
    if  (_alfa[1][6]== _alfa[6][6] && _alfa[6][6]== _alfa[10][6] && _alfa[1][6]=='X')
    {
        system("cls");
        printf("\n\n\nIl giocatore 1 ha vinto questo turno!!!!!!");
        g1++;
        printf("\n\nIlpunteggio giocatore 1 e':%d",g1);


    }

    if   (_alfa[6][1]==_alfa[6][6] && _alfa[6][6]==_alfa[6][10] && _alfa[6][1]=='X')
    {
        system("cls");
        printf("\n\n\nIl giocatore 1 ha vinto questo turno!!!!!!");
        g1++;
        printf("\n\nIlpunteggio giocatore 1 e':%d",g1);


    }




    ///controlli per O

    if (_alfa[1][1]==_alfa[1][6] && _alfa[1][6]== _alfa[1][10] && _alfa[1][1]=='O')
    {
        system("cls");
        printf("\n\n\nIl giocatore 2 ha vinto questo turno!!!!!!");
        g2++;
        printf("\nIlpunteggio giocatore 2 e':%d",g2);

    }

    if(_alfa[1][1]== _alfa[6][1] && _alfa[6][1]== _alfa[10][1] && _alfa[1][1]=='O')
    {
        system("cls");
        printf("\n\n\nIl giocatore 2 ha vinto questo turno!!!!!!");
        g2++;
        printf("\n\nIlpunteggio giocatore 2 e':%d",g2);


    }
    if  (_alfa[1][10]== _alfa[6][10] && _alfa[6][10]== _alfa[10][10] && _alfa[1][10]=='O')
    {
        system("cls");
        printf("\n\n\nIl giocatore 2 ha vinto questo turno!!!!!!");
        g2++;
        printf("\n\nIlpunteggio giocatore 2 e':%d",g2);


    }
    if  (_alfa[10][1]==_alfa[10][6] && _alfa[10][6]== _alfa[10][10] && _alfa[10][1]=='O')
    {
        system("cls");
        printf("\n\n\nIl giocatore 2 ha vinto questo turno!!!!!!");
        g2++;
        printf("\n\nIlpunteggio giocatore 2 e':%d",g2);


    }
    if  (_alfa[1][1]== _alfa[6][6] && _alfa[6][6]==_alfa[10][10] && _alfa[1][1]=='O')
    {
        system("cls");
        printf("\n\n\nIl giocatore 2 ha vinto questo turno!!!!!!");
        g2++;
        printf("\n\nIlpunteggio giocatore 2 e':%d",g2);

    }
    if  (_alfa[1][10]==_alfa[6][6] && _alfa[6][6]==_alfa[10][1] && _alfa[1][10]=='O')
    {
        system("cls");
        printf("\n\n\nIl giocatore 2 ha vinto questo turno!!!!!!");
        g2++;
        printf("\n\nIlpunteggio giocatore 2 e':%d",g2);


    }
    if  (_alfa[1][6]== _alfa[6][6] && _alfa[6][6]== _alfa[10][6] && _alfa[1][6]=='O')
    {
        system("cls");
        printf("\n\n\nIl giocatore 2 ha vinto questo turno!!!!!!");
        g2++;
        printf("\n\nIlpunteggio giocatore 2 e':%d",g2);


    }

    if   (_alfa[6][1]==_alfa[6][6] && _alfa[6][6]==_alfa[6][10] && _alfa[6][1]=='O')
    {
        system("cls");
        printf("\n\n\nIl giocatore 2 ha vinto questo turno!!!!!!");
        g2++;
        printf("\n\nIlpunteggio giocatore 2 e':%d",g2);

    }


}

void gioco(char _alfa[NROW][NCOL])
{

    int i,j;
    int turno,turno1;
    int pulsante;
    char segno;

    turno=0;
    turno1=5;

    do
    {

        turno++;

        system("cls");

        for(i=0; i<NROW; i++)
        {
            for(j=0; j<NCOL; j++)
            {

                _alfa[i][j]=0;

            }
        }

        for(i=0; i<NCOL; i++)
        {
            for(j=0; j<NROW; j++)
            {

                _alfa[i][3]='|';
                _alfa[i][8]='|';
                _alfa[3][j]='-';
                _alfa[8][j]='-';

            }
        }

        for(i=0; i<NROW; i++)
        {
            putchar(10);
            for(j=0; j<NCOL; j++)
            {
                putchar(32);
                printf("%c", _alfa[i][j]);
            }
        }
        printf("\n\t\t\t\tTurno %d",turno);
        printf("\n\n\nLa prima mossa nella prima partita e' del giocatore 1(X) poi si alternera'.");
        printf("\n\nTabella per posizionare:");
        printf("\nCon questo schema: 1|2|3     ");
        printf("\n                   4|5|6     ");
        printf("\n                   7|8|9     ");
        printf("\n\n\n\t\tInserisci il numero:");


        for(i=0; i<9; i++)
        {

            if(segno=='X')
                segno='O';

            else
                segno='X';

            GotoXY(18,26);
            printf(">");
            fflush(stdin);
            scanf("%d",&pulsante);


            switch(pulsante)
            {

            case 1:

                GotoXY(3,2);
                printf("%c",segno);
                _alfa[1][1]=segno;
                controllo(_alfa);


                break;

            case 2:

                GotoXY(12,2);
                printf("%c",segno);
                _alfa[6][1]=segno;
                controllo(_alfa);

                break;

            case 3:

                GotoXY(20,2);
                printf("%c",segno);
                _alfa[10][1]=segno;
                controllo(_alfa);

                break;

            case 4:

                GotoXY(3,6);
                printf("%c",segno);
                _alfa[1][6]=segno;
                controllo(_alfa);

                break;

            case 5:

                GotoXY(12,6);
                printf("%c",segno);
                _alfa[6][6]=segno;
                controllo(_alfa);

                break;

            case 6:

                GotoXY(20,6);
                printf("%c",segno);
                _alfa[10][6]=segno;
                controllo(_alfa);

                break;

            case 7:

                GotoXY(3,11);
                printf("%c",segno);
                _alfa[1][10]=segno;
                controllo(_alfa);
                break;

            case 8:

                GotoXY(12,11);
                printf("%c",segno);
                _alfa[6][10]=segno;
                controllo(_alfa);

                break;

            case 9:
                GotoXY(20,11);
                printf("%c",segno);
                _alfa[10][10]=segno;
                controllo(_alfa);

                break;

            }
        }

    }
    while(turno<turno1);

    system("cls");


    if(g1>g2)
        printf("\n\n\n\t\tIL GIOCATORE 1 HA VINTO LA PARTITA!!!!!!!!!!");
    if(g2>g1)
        printf("\n\n\n\n\t\tIL GIOCATORE 2 HA VINTO LA PARTITA!!!!!!!!!!");
    if(g1==g2)
        printf("\n\n\n\n\t\tLA PARTITA E' FINITA IN PARITA'");


}

int inserimento()
{

    int scelta;

    system("cls");
    printf("\n\n\t\t\tSCEGLI TRA LE SEGUENTI OPPORTUNITA':");
    printf("\n\n0)EXIT");
    printf("\n1)RULES");
    printf("\n2)SETTINGS");
    printf("\n3)PLAY");
    printf("\n4)CURIOSITY ABOUT THE GAME");


    printf("\n\nInserisci il numero corrispondente:");
    printf("\n>");
    fflush(stdin);
    scanf("%d",&scelta);

    return scelta;
}

void titolo()
{

    SetColor(3);

    printf("\n\t                                     iii                                       ");
    printf("\n\t                                     iii         sssssss                              ");
    printf("\n\t    ttttttttttt   rrrrrrrrrrr                  sssssssssss                     ");
    printf("\n\t    ttttttttttt   rrrrrrrrrrrr       iii      sss       sss                     ");
    printf("\n\t        ttt       rrr       rrr      iii        sss                              ");
    printf("\n\t        ttt       rrr      rrr       iii         sss                            ");
    printf("\n\t        ttt       rrrrrrrrrrr        iii           sss                        ");
    printf("\n\t        ttt       rrr     rrr        iii             sss                        ");
    printf("\n\t        ttt       rrr      rrr       iii               sss                       ");
    printf("\n\t        ttt       rrr       rrr      iii     sss         sss                 ");
    printf("\n\t        ttt       rrr        rrr     iii      sssssssssssss                    ");
    printf("\n\t        ttt       rrr         rrr    iii        sssssss                      ");

    hidecursor( 0, 5);

    Sleep(2500);

    hidecursor( 1, 10);
}

void menu()
{


    char pulsante;
    int scelta;
    int turno2;
    char alfa[NROW][NCOL];
    int decisione;
    int i;


    SetColor(7);
    do
    {

        scelta=inserimento();

        switch(scelta)
        {

        case 0:

            printf("\n\n\n\tGrazie per aver giocato.");

            break;



        case 1:

            system("cls");
            printf("\n\t\t\t\tRULES");
            printf("\n\nIl gico si chiama tris e consiste nel posizionare il simbolo che si ha scelto negli opportuni spazi.");
            printf("\nSi puo' scegliere tra due simboli: 'x' oppure 'o'.");
            printf("\nIl primo giocatore che posizionera' tre simboli di fila avra' vinto.");
            printf("\nIl tris di simboli puo' essere: verticale,orizzintale o obliquo.");
            printf("\n\nChi vince una giocata guadagna un punto che servira' per vincere l'intera partita.");
            printf("\nIl primo giocatore che arriva al punteggio massimo vince la parita.");
            printf("\nIl numero massimo di partite e' 5.");
            do
            {
                printf("\n\n\nPremi e per ritornare alla schermata inziale");
                printf("\n>");
                fflush(stdin);
                scanf("%c",&pulsante);
                system("cls");
            }
            while(pulsante!='e');

            break;

        case 2:
            system("cls");
            printf("\n\t\t\t\tSETTINGS");
            printf("\n\nScelta colori della schermata:");
            printf("\n\n1)Scritte in verdi");
            printf("\n2)Scritte in rosso");
            printf("\n3)Scritte in giallo");
            printf("\n4)Sfondo azzurro");
            printf("\n5)Sfondo blu");
            printf("\n6)Sfondo verde");
            printf("\n\n>");
            scanf("%d",&decisione);

            switch(decisione)
            {
            case 1:
                system("color 0a");
                break;

            case 2:
                system("color 0c");
                break;

            case 3:
                system("color 0e");
                break;

            case 4:
                system("color 3a");
                break;

            case 5:
                system("color 9d");
                break;

            case 6:
                 system("color 2a");
                break;


            default:
                printf("\nNumero inserito sbagliato");
            }


            system("cls");
            do
            {
                printf("\n\n\nPremi e per ritornare alla schermata inziale");
                printf("\n>");
                fflush(stdin);
                scanf("%c",&pulsante);
                system("cls");
            }
            while(pulsante!='e');

            break;

        case 3:
            system("cls");
            printf("\n\t\t\t\t\tPLAY");
            Sleep(500);
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nCaricamento" );
            hidecursor( 0, 5);
            for(i=0; i<6; i++)
            {
                Sleep(500);
                putchar(7);
                printf(".");
            }
            Sleep(500);
            hidecursor( 1, 10);

            system("cls");
            gioco(alfa);
            do
            {
                printf("\n\n\nPremi e per ritornare alla schermata inziale");
                printf("\n>");
                fflush(stdin);
                scanf("%c",&pulsante);
                system("cls");
            }
            while(pulsante!='e');

            break;


        case 4:
            system("cls");
            printf("\n\t\t\t\t\tCURIOSITY");

            printf("\n\nQuesto e' un gioco che ha origini molto antiche. I documenti ritrovati testimoniano la sua conoscenza da parte di svariati popoli\nfra cui Egizi, Greci, Irlandesi, Fenici e addirittura da popoli vichinghi situati in Norvegia.");
            printf("\n\nAd esempio si hanno dei vecchi ritrovamenti nell'antica Roma, dove i soldati giocavano fra di loro e il gioco prendeva il nome di terni lapilli.");
            printf("\n\nIn tutti i paesi che circondano il Mediterraneo si trovano una infinità di questi giochi in genere graffiti \nsui gradini di edifici pubblici, Templi, Oracoli, Basiliche, Circhi, Stadi, Teatri,tutti luoghi in cui c'era da aspettare,\nsembrerebbe che in tutti questi posti l'attesa abbia generato i giochi (passatempi).");
            printf("\n\nIl nome piu' comune di questo gioco, in italiano, e' filetto, ma e' conosciuto anche come Mulino, Mulinello, Smerello (dal latino merellus, pedina)\noppure (dal numero tre) Tris, Trex, Tria, ecc.In Inghilterra e' noto come Morris o Mill; Merelles in Francia,\nMorels in Spagna, Muhle in Germania, Molle in Norvegia, Luk Tsut Ki in Cina.");

            do
            {
                printf("\n\n\nPremi e per ritornare alla schermata inziale.");
                printf("\n>");
                fflush(stdin);
                scanf("%c",&pulsante);
                system("cls");
            }
            while(pulsante!='e');

            break;

        default:
            system("cls");
            printf("\n\nHai inserito un numero sbagliato.");
            do
            {
                printf("\n\n\nPremi e per ritornare alla schermata inziale.");
                printf("\n>");
                fflush(stdin);
                scanf("%c",&pulsante);
                system("cls");
            }
            while(pulsante!='e');

        }

    }
    while(pulsante=='e');
}

int main()
{

    titolo();
    menu();

    return 0;
}
