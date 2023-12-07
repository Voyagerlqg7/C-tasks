#include <iostream>
#include <string>

void printMorse(std::string mes)
{
    for (int i = 0; i < mes.length(); ++i)
    {
        switch (mes[i])
        {
        case 'a':
        case 'A':
            std::cout << "._ ";
            break;

        case 'b':
        case 'B':
            std::cout << "_... ";
            break;

        case 'c':
        case 'C':
            std::cout << "_._. ";
            break;

        case 'd':
        case 'D':
            std::cout << "_.. ";
            break;

        case 'e':
        case 'E':
            std::cout << ". ";
            break;

        case 'f':
        case 'F':
            std::cout << ".._. ";
            break;

        case 'g':
        case 'G':
            std::cout << "__. ";
            break;

        case 'h':
        case 'H':
            std::cout << ".... ";
            break;

        case 'i':
        case 'I':
            std::cout << ".. ";
            break;

        case 'j':
        case 'J':
            std::cout << ".___ ";
            break;

        case 'k':
        case 'K':
            std::cout << "_._ ";
            break;

        case 'l':
        case 'L':
            std::cout << "._.. ";
            break;

        case 'm':
        case 'M':
            std::cout << "__ ";
            break;

        case 'n':
        case 'N':
            std::cout << "_. ";
            break;

        case 'o':
        case 'O':
            std::cout << "___ ";
            break;

        case 'p':
        case 'P':
            std::cout << ".__. ";
            break;

        case 'q':
        case 'Q':
            std::cout << "__._ ";
            break;

        case 'r':
        case 'R':
            std::cout << "._. ";
            break;

        case 's':
        case 'S':
            std::cout << "... ";
            break;

        case 't':
        case 'T':
            std::cout << "_ ";
            break;

        case 'u':
        case 'U':
            std::cout << ".._ ";
            break;

        case 'v':
        case 'V':
            std::cout << "..._ ";
            break;

        case 'w':
        case 'W':
            std::cout << ".__";
            break;

        case 'x':
        case 'X':
            std::cout << "_.._ ";
            break;

        case 'y':
        case 'Y':
            std::cout << "_.__ ";
            break;

        case 'z':
        case 'Z':
            std::cout << "__.. ";
            break;

        default:
            std::cout << "I don't know this letter, sorry";
            return;
        }
    }
}

int main()
{
    std::cout << "Enter your message: ";
    std::string mes;
    std::cin >> mes;

    printMorse(mes);
}