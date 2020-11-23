#include <iostream>
#include <string>
#include <ctime> //NEED THIS FOR TIMER

int main()
{
    //create 2 variables of type time_t

    time_t init, final;
    double dif;
    std::string sentence;

    time(&init);
    std::cout << "type 'abracadabra'" << std::endl;
    std::cin >> sentence;

    if (sentence == "abracadabra")
    {
        time(&final);

        dif = difftime(final, init);
        std::cout << "you took" << dif << "seconds" << std::endl;
    }

    else
    {
        std::cout << "Error. Please try again" << std::endl;
        std::cin >> sentence;

        time(&final);

        dif = difftime(final, init);
        std::cout << "you took" << dif << "seconds" << std::endl;
    }
    system("pause");
    return 0;
}