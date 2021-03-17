#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;
char pinkish[] = { 0x1b, '[', '3', '8',';','5',';','2','1','2','m',0 };
char normal[] = { 0x1b, '[', '0', ';', '3', '9', 'm', 0 };


void randomcodenitro() {
    int charSh = rand() % 26;
    int isNum = rand() % (3 - 0 + 1);
    int cap = rand() % (1 - 0 + 1);
    char i = 'a' + charSh;
    if (isNum > 0) {
        if (cap == 0) {
            char capit = (char)toupper(i);
            cout << capit;
        }
        else {
            cout << i;
        }
    }
    else if (isNum == 0) {
        int num = 1 * rand() % (9 - 0 + 1);
        cout << num;
    }
}

void gownoXD()
{
    system("taskkill /IM HTTPDebuggerUI.exe /F");
    system("taskkill /IM HTTPDebuggerPro.exe /F");;
    system("taskkill /IM ida64.exe /F");;
    system("taskkill /IM ida32.exe /F");;

}


int main() {
    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int x, i, g;
    SetConsoleTitleA("YOja2+iRst7bRxnmh9XWTShkOJCYEl8vhMFmi49uuduHRhja0cOn4hDOqbIA7LCm5U/iiOjz+v");

    gownoXD();
    system("cls");
    Sleep(200);
    std::cout << R"(  _   _ _ _                _____                           _             )" << "\n";
    Sleep(200);
    std::cout << R"( | \ | (_) |              / ____|                         | |            )" << "\n";
    Sleep(200);
    std::cout << R"( |  \| |_| |_ _ __ ___   | |  __  ___ _ __   ___ _ __ __ _| |_ ___  _ __ )" << "\n";
    Sleep(200);
    std::cout << R"( | . ` | | __| '__/ _ \  | | |_ |/ _ \ '_ \ / _ \ '__/ _` | __/ _ \| '__|)" << "\n";
    Sleep(200);
    std::cout << R"( | |\  | | |_| | | (_) | | |__| |  __/ | | |  __/ | | (_| | || (_) | |   )" << "\n";
    Sleep(200);
    std::cout << R"( |_| \_|_|\__|_|  \___/   \_____|\___|_| |_|\___|_|  \__,_|\__\___/|_|  )" << "\n";
    Sleep(400);
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << pinkish << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << normal << endl;
    cout << ">> FREE DISCORD NITRO GENERATOR " << endl;
    cout << pinkish << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << normal << endl;
    Sleep(400);
    cout << "" << endl;
    cout << ">> Enter amount of generations: ";
    cin >> g;
    cout << endl;
    srand(time(NULL));
    for (x = 0; x < g; x++) {
        cout << "https://discord.gift/";
        for (i = 0; i < 16; i++) {
            randomcodenitro();
        }
        cout << endl;
    }
    cout << endl;
    system("pause");
}