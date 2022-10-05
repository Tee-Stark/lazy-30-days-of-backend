#include <bits/stdc++.h>

std::string greet(std::string &);

int main()
{
    std::string name, output;
    std::cout << "Hi! Enter your name: " << std::endl;
    // std::getline(std::cin, name);
    name = " ^game";
    output = greet(name);
    std::cout << output << std::endl;

    name = "Tim";
    output = greet(name);
    std::cout << output << std::endl;

    name = "Bolu";
    output = greet(name);
    std::cout << output << std::endl;

    name = "Odun";
    output = greet(name);
    std::cout << output << std::endl;

    return 0;
}

std::string greet(std::string &str)
{
    std::string special_chars = " !@#$%^&*()_+{}|:\"<>?,./;'[]\\-=";
    std::vector v(special_chars.begin(), special_chars.end());
    // convert str to lower case
    std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c)
                   { return std::tolower(c); });
    // check if str contains any special character
    for (const char &c : str)
    {
        if (std::find(v.begin(), v.end(), c) != v.end())
        {
            return std::string("Please remove all spaces or special characters");
        }
    }
    if (str == "bolu" || str == "odun")
    {
        return "Welcome back, " + str;
    }
    else
    {
        return "It is nice to meet you, " + str;
    }
    return "";
}
