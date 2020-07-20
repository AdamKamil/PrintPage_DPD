#include <DPD.h>
#include <windows.h>


DPD::DPD()
{
    //ctor
}
/*
void DPD::ReadData()
{
    cout << endl;
    cout << "Wprowadz numery paczek oddzielone srednikiem ';' "<<endl;
    cin >> numeryfaktur;
   //getline(cin, numeryfaktur);
    int i=0;
    for (int j=0; j<=50; j++)
    {
        if (numeryfaktur[i]==NULL)
        {
            break;
            numeryfaktur.clear();
        }
        else
        {
            while (numeryfaktur[i]!=';')
            {
                temp=temp+numeryfaktur[i];
                i++;
            }
            faktury[j]=temp;
            temp.clear();
            i++;
        }
    }
}
*/
void DPD::MakePDF()
{

    DPDlink.open("DPDlink.txt", ios::in);
    if (DPDlink.good()==false)
    {
        cout<< "Plik z linkami do programu nie istnieje"<<endl;
        exit(0);
    }
    getline(DPDlink,basiclink);
    getline(DPDlink,programLink);
    getline(DPDlink,save);
    DPDlink.close();

    // basiclink="https://tracktrace.dpd.com.pl/parcelDetails?typ=1&p1=";
    //  programLink="\"C:\\Program Files (x86)\\Google\\Chrome\\Application\\chrome.exe\"";
    // programLink="C:\\PROGRA~2\\Google\\Chrome\\Application\\chrome.exe"; //lub PROGRA~1
    //save = --headless --print-to-pdf=D:\\

    cout << "Czekaj tworzone sa PDF'y" <<endl <<endl;
    for (int i=0; i<=500; i++)
    {
        if (faktury[i]==";")
        {
            break;
        }
        if (faktury[i]==" ")
        {

        }

        else
        {
            link=basiclink+faktury[i];
            command=save+faktury[i]+".pdf ";
            cout <<"Faktura "<<i+1<<". "<<faktury[i]<<endl;
            cout << "LINK DO FAKTURY: ";
            cout << link <<endl <<endl;

            fullcommand=programLink+command+"\""+link+"\"";
            char tab[fullcommand.size()+1];
            strcpy(tab, fullcommand.c_str());
            //  cout << tab <<endl;
            system(tab);
        }
    }
    cout << endl << "PDF'y zrobione"<<endl;
}

void DPD::ReadData()
{
    cout << endl;
    cout << "Wprowadz numery paczek a nastepnie zatwierdz srednikiem \";\""<<endl;

    for (int i=0; i<=500; i++)
    {

        cin >> faktury[i];

        if (faktury[i]==";")
        {
            break;
        }

    }
}
