#include <iostream>
#include <string>
using namespace std;

#include "jantung.h"
#include "manusia.h"

int main()
{
    //deklarasi dan pemberian nilai object pointer varManusia
    Manusia* varManusia = new Manusia("jono");
    //mendelete pointer varManusia dari memori
    delete varManusia;
    return 0;
}