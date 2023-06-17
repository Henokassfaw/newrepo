#include<iostream>
using namespace std;

struct Question
{
    std::string Questiontext;
    std::string options[3];
    int Correctanswer;
};

int main()
{
    Question question[3];

    question[0] = {
        "What's your favorite animal?",
        {"Dog", "Cat", "Rabbit"},
        2};

    question[1] = {
        "What is your favorite show?",
        {"Drake & Josh", "BTR", "iCarly"},
        1};

    question[2] = {
        "What is your favorite color?",
        {"blue", "green", "red"},
        1};

    for (int i = 0; i <= 2; i++)
    {
        int userInput;
        std::cout << question[i].Questiontext << std::endl;
        for(int i=0;i<=2;i++){

			cout<<question[i].options[i]<<endl;
        }
//        std::cout << "1. " << question[i].options[0] << std::endl;
//        std::cout << "2. " << question[i].options[1] << std::endl;
//        std::cout << "3. " << question[i].options[2] << std::endl;
//        std::cout << std::endl;
        std::cout << "Choose 1-3 : ";
        std::cin >> userInput;

        if (userInput == question[i].Correctanswer)

            std::cout << "Correct" << std::endl;
        else
        {
            std::cout << "Incorrect" << std::endl;
        }
    }
    return 0;
}
