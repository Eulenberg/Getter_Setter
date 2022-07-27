#include "Int_Werte.h"

Int_Werte::Int_Werte(int conA, int conB)
    :A{ conA }, B{ conB }
{

}

int Int_Werte::get_intA()
{
    return this->A;
}

int Int_Werte::get_intB()
{
    return this->B;
}

void Int_Werte::set_intA(int iA)
{
    this->A = iA;
}

void Int_Werte::set_intB(int iB)
{
    this->B = iB;
}
