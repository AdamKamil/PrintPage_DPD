#include <iostream>
#include <windows.h>
#include <time.h>
#include <DPD.h>

using namespace std;
int main()
{
    int i=1;
    while (i==1)
    {
    cout << endl;
    cout << "       PROGRAM DO TWORZENIA PDF Z WYBRANYCH STRON INTERNETOWYCH" << endl;
    cout << "                      Version 1.0" << endl;
    cout << "Obecnie ustawiony na strone: \"https://tracktrace.dpd.com.pl/parcelDetails?typ=1&p1=\"" << endl;
    cout << "w celu pobrania wielu potwierdzen dostaw z DPD" << endl <<endl;
    DPD start;
    start.ReadData();
    start.MakePDF();

   cout <<endl <<"WPROWADZ 0 ABY ZAKONCZYC LUB 1 ABY WYKONAC JESZCZE RAZ LISTE PDF'OW" << endl << endl;
   cin >> i;
    }

         return 0;
}
