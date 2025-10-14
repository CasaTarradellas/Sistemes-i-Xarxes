#include <iostream>
#include "Utils/ConsoleControl.h"
#include "2inputSystem/InputSystem.h"
#include "3NodeMap/NodeMap.h"
#include "Utils/Timer.h"
#include <functional>
#include <list>
#include <json/json.h>
#include <fstream>
#include "4Json/ICodable.h"
#include "4Json/Banana.h"
#include "4Json/Manzana.h"

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

class Tree : public INodeContent
{
    void Draw(Vector2 offset) override
    {
        CC::Lock();
        CC::SetColor(CC::DARKGREY, CC::BLACK);
        CC::SetPosition(offset.X, offset.Y);
        std::cout << "T";

        CC::Unlock();
    }
};



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

    // Clase Nodes

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

    /*Node* node = new Node(Vector2(0, 2));

    Tree* tree = new Tree();
    Potatoe* potatoe = new Potatoe();

    node->SetContent(tree);
    Potatoe* potatoe = node->SetContent <node> <Potatoe>();

    node->SetContent<Tree>();
    Potatoe* potatoe2 = node->GetContent<Potatoe>();*/
    
    /*NodeMap* myMap = new NodeMap(Vector2(20, 20), Vector2(2, 2));

    Tree* t1 = new Tree();
    Tree* t2 = new Tree();
    Tree* t3 = new Tree();
    Tree* t4 = new Tree();
    Tree* t5 = new Tree();

    myMap->SafePickNode(Vector2(0, 0), [t1](Node* node)
        {
            node->SetContent(t1);
        });

    myMap->SafePickNode(Vector2(0, 0), [t2](Node* node)
        {
            node->SetContent(t2);
        });

    myMap->SafePickNode(Vector2(0, 0), [t3](Node* node)
        {
            node->SetContent(t3);
        });

    myMap->SafePickNode(Vector2(19, 19), [t4](Node* node)
        {
            node->SetContent(t4);
        });

    myMap->SafePickNode(Vector2(10, 10), [t5](Node* node)
        {
            node->SetContent(t5);
        });

    myMap->UnSafeDraw();

    InputSystem* IS = new InputSystem();

    IS->AddListener(K_UP, [myMap]()
        {
            std::list<Vector2> positions;
            positions.push_back(Vector2(10, 10));
            positions.push_back(Vector2(10, 9));

            myMap->SafeMultiPickNode(positions, [](std::list<Node*> nodes)
                {
                    std::list<Node*>::iterator it = nodes.begin();

                    Node* n1 = *it;
                    it++;

                    Node* n2 = *it;
                    
                    n2->SetContent(n1->GetContent());

                    n1->SetContent(nullptr);

                    n1->DrawContent(Vector2(2, 2));
                    n2->DrawContent(Vector2(2, 2));
                });
        });*/

    //Clase Json
    
    ICodable::SaveDecodeProcces<Banana>();
    ICodable::SaveDecodeProcces<Manzana>();

    std::vector<Fruta*> frutas
    {
        new Banana(),
        new Manzana(),
        new Banana()
    };

    frutas[1]->semillas = 10000;

    Json::Value jsonArray = Json::Value(Json::arrayValue);

    for (Fruta* fruta : frutas)
    {
        jsonArray.append(fruta->Code());
    }

    std::ofstream jsonWriteFile = std::ofstream("FrutasTest.json", std::ifstream::binary);

    if (!jsonWriteFile.fail())
    {
        jsonWriteFile << jsonArray;
        jsonWriteFile.close();
    }

    std::cout << "Finish Write";

    std::ifstream jsonReadFile = std::ifstream("FrutasTest.json", std::ifstream::binary);
    std::vector<Fruta*> readFrutas;

    if (!jsonReadFile.fail())
    {
        Json::Value readedJson;

        jsonReadFile >> readedJson;

        for (Json::Value value : readedJson)
        {
            Fruta* f = ICodable::FromJson<Fruta>(value);
            readFrutas.push_back(f);
        }
    }

    while (true)
    {

    }
}