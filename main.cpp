#include<iostream>

using namespace std;

float a,b,c,d,p,netto,sntbn,n,sntzn,sntmum;
float st,sm;

int main()
{
    cout<<"////////////////////////////////////////////////////////////////////////////////////////"<<endl;
    cout<<"///////////////$$$/////////////// MONEY CALCULATOR //////////////////$$$////////////////"<<endl;
    cout<<"////////////////////////////////////////////////////////////////////////// by. KR //////"<<endl;
    cout<<" "<<endl;

    cout<<"Kalkulator sluzy do obliczania zarobu na wyjezdzie za granice."<<endl;
    cout<<"Jesli podajesz liczby zmiennoprzecinkowe, rozdziel je kropka, nie przecinkiem!"<<endl;
    cout<<" "<<endl;


    char ans = 'N';
    do{
        cout<<"Podaj stawke euro/h brutto: ";
        cin>>a;

    if (a>0) {
        cout<<"Podaj koszt ubezpieczenia na tydzien: ";
        cin>>b;
        if (b>=0) {
            cout<<"Podaj koszt mieszkania na tydzien: ";
            cin>>c;
            if (c>=0) {
                cout<<"Liczba nadgodzin w tygodniu: ";
                cin>>d;
                if (d>0) {
                    cout<<"Jaki procent podstawowej stawki jest stawka za nadgodziny?(150%,120%, etc.): ";
                    cin>>p;

                     netto = a * 0.86;
                     sntbn = netto * 40 ;
                     n = (netto * d * p)/100;
                     sntzn = sntbn + n;
                     sntmum = sntzn - b - c;

                    cout<<" "<<endl;
                    cout<<"Stawka netto to: "<<netto<<" euro"<<endl;
                    cout<<"W zl:            "<<netto * 4.55<<" pln"<<endl;
                    cout<<" "<<endl;
                    cout<<"W Tydzien: "<<sntmum<<" euro"<<endl;
                    cout<<"W zl:     "<<sntmum * 4.55<<" pln"<<endl;
                    cout<<" "<<endl;
                    cout<<"W Miesiac: "<<sntmum * 4<<" euro"<<endl;
                    cout<<"W zl:     "<<sntmum * 4.55 * 4<<" pln"<<endl;
                    cout<<" "<<endl;
                    cout<<"Calosciowo: "<<sntmum * 4  * 2<<" euro"<<endl;
                    cout<<"W zl:      "<<sntmum * 4  * 2 * 4.55<<" pln"<<endl;
                    cout<<" "<<endl;
                }
                if (d==0) {

                    netto = a * 0.86;
                    st = (netto * 40) - b - c;
                    sm = st * 4;


                    cout<<" "<<endl;
                    cout<<"Stawka netto to: "<<netto<<" euro"<<endl;
                    cout<<"W zl:            "<<netto * 4.55<<" pln"<<endl;
                    cout<<" "<<endl;
                    cout<<"W Tydzien: "<<st<<" euro"<<endl;
                    cout<<"W zl:     "<<st * 4.55<<" pln"<<endl;
                    cout<<" "<<endl;
                    cout<<"W Miesiac: "<<sm<<" euro"<<endl;
                    cout<<"W zl:     "<<sm * 4.55<<" pln"<<endl;
                    cout<<" "<<endl;
                    cout<<"Calosciowo: "<<sm * 2<<" euro"<<endl;
                    cout<<"W zl:      "<<sm * 2 * 4.55<<" pln"<<endl;
                    cout<<" "<<endl;
                }
                else {
                    cout<<"To nie jest liczba!"<<endl;
                    system("pause");
                    return 0;
                }
            }
            else {
                    cout<<"To nie jest liczba!"<<endl;
                    system("pause");
                    return 0;
            }
        }
        else {
                cout<<"To nie jest liczba!"<<endl;
                system("pause");
                return 0;
        }
    }
    else {
        cout<<"To nie jest liczba!"<<endl;
    }


    }while(a!=0);

    system("pause");

}
