/*
Password
Pawelski
3/31/2022
Please follow the instructions on the activity sheet!
*/

#include <iostream>
#include <string>

int main()
{
    std::string username, password;
    std::cout << "Please enter your credientials.\n";
    std::cout << "Username >> ";
    std::cin >> username;
    std::cout << "Password >> ";
    std::cin >> password;
    if (username == "username" && password == "password")
    {
        std::cout << "Login successful!\n";
    }
    else
    {
        std::cout << "Login failed!\n";
    }
    return 0;
}
