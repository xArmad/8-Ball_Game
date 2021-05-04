#include <iostream>
#include <string>

const int ARRAY_LENGTH = 20; // Increase coordinately if you're adding more choices to function answer()
std::string eightBall[ARRAY_LENGTH];

// Possible Responses
void answer()
{
    // Follow format when adding choices
    /*
    Example choice:
    eightBall[Number] = "PROMPT_GOES_HERE";
    */
    eightBall[0] = "It is certain.";
    eightBall[1] = "It is decidedly so.";
    eightBall[2] = "Without a doubt.";
    eightBall[3] = "Yes - definitely.";
    eightBall[4] = "You may rely on it.";
    eightBall[5] = "As I see it, yes.";
    eightBall[6] = "Most likely.";
    eightBall[7] = "Outlook good.";
    eightBall[8] = "Yes.";
    eightBall[9] = "Signs point to yes.";
    eightBall[10] = "Reply hazy, try again.";
    eightBall[11] = "Ask again later.";
    eightBall[12] = "Better not tell you now.";
    eightBall[13] = "Cannot predict now.";
    eightBall[14] = "Concentrate and ask again.";
    eightBall[15] = "Don't count on it.";
    eightBall[16] = "My reply is no.";
    eightBall[17] = "My sources say no.";
    eightBall[18] = "Outlook not so good.";
    eightBall[19] = "Very doubtful.";
}