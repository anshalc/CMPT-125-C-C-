// chatbot.h


// Name : Anshal Chopra
// Student Number : 301384760
// Assignment 4



#include <vector>

#include<algorithm>

#include<cmath>




class Chatbot

{

// class starts here


    private:


        int reply = 0;
        int name_told = 0;
        string input;
        string name;
        string username;


    public:


        Chatbot(string x) // to input the name of our chatbot

        {

            name = x;

        }


        string get_name() // returns the name of our chatbot

        {

            return name; 
             
        }


        void tell(string i) // strings input by the user

        {

            // tell starts here 

            input = i;

            transform(input.begin(), input.end(), input.begin(), ::tolower); // so that there isnt any confusion about the capital letters or small letters

            if ( input == "hi" || input == "hello" || input == "hey")

            { 

                reply = 1;

            }


            else if(name_told == 0) // saving the name of the user for future purposes.

            {

                username = input;
                name_told = 1;
                reply = 2;

            }
            
            else if ( input == "yes" || input == "sure" || input == "go for it")

            {

                reply = 3;

            }

            else if ( input == "who's there"|| input == "who's there!" || input == "who's there!!")

            {

                reply = 4;

            }

            else if ( input == "voodoo who?")

            {

                reply = 5;

            }

            else if ( input == "lame" || input == "you are lame" || input == "haha")
            {

                reply = 6;

            }
            
            else if ( input == "bye")

            {

                reply = 7;
                
            }

            else

            {

                reply = -1;

            }

            //tell ends here.
        
        }

        
        string get_reply() // replies corresponding to the strings input by the user.

        {

            //get_reply starts here

            if (reply == 1)

            { 

                return "hi!!, dont be shy tell me your name.";

            }


            else if (reply == 2)

            {    

                return username + " woahh thats a unique name.\ni am funny!\njust kidding LOL! \ni am your personal chatbot\nbut still i can tell a joke, wanna hear one?";

            }


            else if (reply == 3)

            {

                return "I promise this will be hilarious,\nKnock!! Knock!!.";

            }


            else if (reply == 4)

            {

                return "voodoo";

            }


            else if (reply == 5)

            {

                return "voodoo you think you are asking all these questions?";

            }


            else if (reply == 6)

            {

                return "i guess you dont have any humour " + username + "\n";

            }


            else if (reply ==7)

            {

                return "bye, i wish i had gotten a more interesting hooman (╯ ͡❛ ͜ʖ ͡❛)╯\n"; // saying bye to the user.
                
            }


            else

            {

                return "what did i do to deserve something out of my vocabulary\n"; //when we dont know what input have we gotten.

            }

            // get_reply ends here.

        } 

// class ends here.  

};
