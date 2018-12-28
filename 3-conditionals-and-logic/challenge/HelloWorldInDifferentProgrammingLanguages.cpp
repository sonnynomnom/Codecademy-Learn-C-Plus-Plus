/***************
 * 
 * Codecademy C++ Challenge 2: if/elseif/else
 * 
 * Hello World in different Coding Languages!
 * 
 **************/



#include <iostream>


/*
Languages:
1:C++
2:JavaScript
3:Python
4:Java
5:PHP
6:Ruby
7:C#
*/

//This is a function that returns the Hello World code for a given language. 
std::string getHelloWorldCode(int language){
    std::string outputCode;

    switch (language){

        case 1:
            //C++
            outputCode = "#include <iostream>\n\n"
                         "int main(){\n"
                         "\tstd::cout << \"Hello World!\";\n"
                         "\treturn 0;\n"
                         "}\n";

            break;
        case 2:
            //JavaScript 
            outputCode = "console.log(\"Hello World!\");\n";

            break;

        case 3:
            //Python
            outputCode = "print(\"Hello World!\")\n";

            break;

        case 4:
            //Java
            outputCode = "public class HelloWorld {\n\n"
                         "\tpublic static void main(String[] args) {\n"
                         "\t\tSystem.out.println(\"Hello World!\");\n"
                         "\t}\n"
                         "}\n";

            break;

        case 5:
            //PHP
            outputCode = "echo \"Hello World!\";\n";

            break;

        case 6:
            //Ruby
            outputCode = "puts \"Hello World!\"\n";

            break;

        case 7:
            //C#
            outputCode = "using System;\n\n"
                         "namespace HelloWorld\n"
                         "{\n"
                         "\tclass Program\n"
                         "\t{\n"
                         "\t\tstatic void Main(string[] args)\n"
                         "\t\t{\n"
                         "\t\t\tConsole.WriteLine(\"Hello World!\");\n"
                         "\t\t}\n"
                         "\t}\n"
                         "}\n";

            break;
        
        default:
            outputCode = "I'm sorry, but it looks like that wasn't one of the language options. Try again.";
            break;
    return outputCode;
    }
}


int main(){

    //This is so they can try again if they enter a wrong number. It's the quickest way to know if the language didn't exist.
    std::string languageError = "I'm sorry, but it looks like that wasn't one of the language options. Try again.";

    //The user's input
    int userInput;


    //An introduction
    std::cout << "Want to know how to make a \"Hello World!\" program\n"
                 "in your favorite programming language?\n\n"
                 "You've come to the right place. Each number corresponds to a language.\n"
                 "Enter a number below, and we'll give you the code!\n\n";
    std::cout << "Languages:\n"
                 "1) C++\n"
                 "2) JavaScript\n"
                 "3) Python\n"
                 "4) Java\n"
                 "5) PHP\n"
                 "6) Ruby\n"
                 "7) C#\n";
    


    //This looks like an infinite loop, but we'll be breaking it.
    //The reason we have a loop is so the user can try again
    //if they enter a wrong number, no matter how many times they've 
    //gotten it wrong. It's like unconditional love with code :)
    while ( true ) {
        //Instructions and input
        std::cout <<  "Pick a programming language: ";
        std::cin >> userInput;

        //Get the code
        std::string helloWorldCode = getHelloWorldCode(userInput);

        std::cout << "\n";

        //Print the code
        std::cout << helloWorldCode << "\n";


        //If the language was valid, we're done! Otherwise, loop back and try again.
        if (helloWorldCode == languageError){
            continue;
        }else {
            break;
        }
    }

    
    return 0;
}
