#include <iostream>
#include "Utils/ConsoleControl.h"
#include <functional>
#include <list>

typedef std::function<int(int, int)> SumaFunction;
typedef std::list<std::list<int>> listaDeListasDeInts;

void TestLambdasMolonas(SumaFunction funcionMolona)
{
    std::cout << "Voy a ejecutar una funcion que estaba en una variable" << std::endl;

    int number = funcionMolona(5, 7);

    std::cout << "Ya la he ejecutado" << std::endl;
}

void Tes1(listaDeListasDeInts listaConCosas)
{

}

void Tes2(listaDeListasDeInts listaConCosas)
{

}

void Tes3(listaDeListasDeInts listaConCosas)
{

}

int main()
{
    //ThreadTutorialTest();
    //CC::SetColor(CC::WHITE, CC::CYAN);
    std::string name = "Pepe";
    listaDeListasDeInts listaDeListas;
    SumaFunction funcionQueHaceCosasPeroEsUnaVariable = [name](int a, int b)
        {
            std::cout << "Esto no se como pero funciona y me dice mi nombre --> " << name << std::endl;
            return a + b;
        };

    TestLambdasMolonas(funcionQueHaceCosasPeroEsUnaVariable);
}