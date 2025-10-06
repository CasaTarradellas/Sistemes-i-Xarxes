#include <iostream>
#include "Utils/ConsoleControl.h"
#include "2inputSystem/InputSystem.h"
#include "Utils/Timer.h"
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
    // Clase Threads
    
    //ThreadTutorialTest();
    //CC::SetColor(CC::WHITE, CC::CYAN);
    /*std::string name = "Pepe";
    listaDeListasDeInts listaDeListas;
    SumaFunction funcionQueHaceCosasPeroEsUnaVariable = [name](int a, int b)
        {
            std::cout << "Esto no se como pero funciona y me dice mi nombre --> " << name << std::endl;
            return a + b;
        };*/

    /*TestLambdasMolonas(funcionQueHaceCosasPeroEsUnaVariable);*/

    // Clase Input System

    /*InputSystem* iS = new InputSystem();

    InputSystem::KeyBinding* kb1 = iS->AddListener(K_1, []() 
        {
        CC::Lock();
        std::cout << "Pressed 1" << std::endl;
        CC::Unlock();
        });

    InputSystem::KeyBinding* kb2 = iS->AddListener(K_2, []()
        {
            CC::Lock();
            std::cout << "Pressed 2" << std::endl;
            CC::Unlock();
        });

    InputSystem::KeyBinding* kb3 = iS->AddListener(K_3, []()
        {
            CC::Lock();
            std::cout << "Pressed 3" << std::endl;
            CC::Unlock();
        });

    InputSystem::KeyBinding* kb4 = iS->AddListener(K_4, []()
        {
            CC::Lock();
            std::cout << "Pressed 4" << std::endl;
            CC::Unlock();
        });

    iS->StartListener();

    while (true)
    {

    }*/

    // Clase 

    //std::cout << "Start" << std::endl;
    ////Timer::SleepThread(3000);
    //Timer::StartTimer(3000, []() {
    //    CC::Lock();
    //    std::cout << "3 Seconds Elapsed" << std::endl;
    //    CC::Unlock();
    //    });

    //Timer::StartLoopTimer(1000, []() {
    //    CC::Lock();
    //    std::cout << "1 second Elapsed" << std::endl;
    //    CC::Unlock();
    //    });


}