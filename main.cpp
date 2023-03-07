#include <bits/stdc++.h>

using namespace std;

char patrat[10]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};

//Functie care returneaza statusul jocului

int verifcastig()
{
    if(patrat[1]==patrat[2]&&patrat[2]==patrat[3]&&patrat[1]!=' ')
    {
        return 1;
    }
    else if(patrat[4]==patrat[5]&&patrat[5]==patrat[6]&&patrat[4]!=' ')
    {
        return 1;
    }
    else if(patrat[7]==patrat[8]&&patrat[8]==patrat[9]&&patrat[7]!=' ')
    {
        return 1;
    }
    else if(patrat[1]==patrat[4]&&patrat[4]==patrat[7]&&patrat[1]!=' ')
    {
        return 1;
    }
    else if(patrat[2]==patrat[5]&&patrat[5]==patrat[8]&&patrat[2]!=' ')
    {
        return 1;
    }
    else if(patrat[1]==patrat[5]&&patrat[5]==patrat[9]&&patrat[1]!=' ')
    {
        return 1;
    }
    else if(patrat[3]==patrat[5]&&patrat[5]==patrat[7]&&patrat[3]!=' ')
    {
        return 1;
    }
    else if(patrat[1]!=' '&&patrat[2]!=' '&&patrat[3]!=' '
        &&patrat[4]!=' '&&patrat[5]!=' '&&patrat[6]!=' '
        &&patrat[7]!=' '&&patrat[8]!=' '&&patrat[9]!=' ')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

//Functia care deseneaza tabelul cu X si 0

void tabel()
{
    system("cls");
    cout<<"\n\n\tX si 0\n\n";

    cout<<"  Jucator 1(X) - Jucator 2(0)\n\n";

    //afisare tabelului

    cout<<"     |    |    \n";
    cout<<"  "<<patrat[1]<<"  |  "<<patrat[2]<<" | "<<patrat[3]<<'\n';
    cout<<" ____|____|____\n";
    cout<<"     |    |    \n";
    cout<<"  "<<patrat[4]<<"  |  "<<patrat[5]<<" | "<<patrat[6]<<'\n';
    cout<<" ____|____|____\n";
    cout<<"     |    |    \n";
    cout<<"  "<<patrat[7]<<"  |  "<<patrat[8]<<" | "<<patrat[9]<<'\n';
    cout<<"     |    |    \n";
    cout<<"\n";
}

int main()
{int jucator=1,i,alegere;
    char semn;
    do
    {
        tabel();
        if(jucator%2==1)
        {
            jucator=1;
        }
        else
        {
            jucator=2;
        }
        cout<<"  Jucatorul cu numarul "<<jucator<<" fa o mutare: ";
        cin>>alegere;
        if(jucator==1)
        {
            semn='X';
        }
        else
        {
            semn='0';
        }

        if(patrat[alegere]==' ')
        {
            patrat[alegere]=semn;
        }
        else
        {
            cout<<"Mutare invalida, Apasa enter pentru a muta corect";
            jucator--;
            cin.ignore();
            cin.get();
        }
        i=verifcastig();
        jucator++;
    }
    while(i==-1);
    tabel();
    if(i==1)
    {
        jucator--;
        cout<<"\aCastigatorul este jucatorul "<<jucator;
    }
    else
    {
        cout<<"\aEgalitate";
    }
    return 0;
}
