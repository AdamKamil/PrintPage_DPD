#ifndef DPD_H
#define DPD_H
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <stdio.h>
#include <windows.h>



using namespace std;
class DPD
{
    public:
        DPD();
        void ReadData();
        void MakePDF();
    private:
        string link;
        string basiclink;
        string command;
        string fullcommand;
        string programLink;
        string numeryfaktur;
        string faktury[500];
        string temp;
        string save;
        fstream DPDlink;
};

#endif // DPD_H
