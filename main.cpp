#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 void
 char
 bool
 int
 float
 double
 
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    
    
    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function
    int numbers = 5; ignoreUnused(numbers);
    int ratio = 7;  ignoreUnused(ratio);
    int fraction = 9; ignoreUnused(fraction);
    bool truth = 1; ignoreUnused(truth);
    bool faux = 3; ignoreUnused(faux);
    bool off = 6; ignoreUnused(off);
    char name = 8; ignoreUnused(name);
    char gender = 2; ignoreUnused(gender);
    char person = 4; ignoreUnused(person);
    float height = 23; ignoreUnused(height);
    float length = 25; ignoreUnused(length);
    float area = 27;ignoreUnused(area);
    double weight = 29; ignoreUnused(weight);
    double frequency = 22; ignoreUnused(frequency);
    double waves = 24; ignoreUnused(waves);
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1) 
 */
int subtraction(int num1, int num2 = 4) 
{
    ignoreUnused(num1, num2);
    return {};
}
/*
 2)
 */
bool identifyChord(char chordName, bool quality, int extensions = 13)
{
    ignoreUnused(chordName, quality, extensions);
    return {};
}
/*
 3)
 */
bool tuneInstrument(int hertz = 7, bool note = true )
{
    ignoreUnused(hertz, note);
    return {};
}
/*
 4)
 */
void playInBand(bool guitar = false, bool bass = true)
{
    ignoreUnused(guitar, bass);
}
/*
 5)
 */
double analyzeBlood(char bloodType, int bloodCellCount = 2)
{
    ignoreUnused(bloodType, bloodCellCount);
    return {};
}
/*
 6)
 */
int writeScale(int semitones, int wholeTones = 4)
{
    ignoreUnused(semitones, wholeTones);
    return {};
}
/*
 7)
 */
double buyClothes(int price = 6, bool typeOfClothing = true)
{
    ignoreUnused(price, typeOfClothing);
    return {};
}
/*
 8)
 */
bool makeSportsTeam(bool typeOfSport, int numberOfPlayers = 11)
{
    ignoreUnused(numberOfPlayers, typeOfSport);
    return {};
}
/*
 9)
 */
int addition(int numbers = 8)
{
    ignoreUnused(numbers);
    return {};
}
/*
 10)
 */
bool breakupUltimatum(bool breakup, bool eatIceCream = false)
{
    ignoreUnused(breakup, eatIceCream);
    return {};
}
int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto brokeUp = breakupUltimatum(false, false);
    //2)
    auto addUp = addition(8);
    //3)
    auto soccerTeam = makeSportsTeam(true);
    //4)
    auto casualClothes = buyClothes(12, false);
    //5)
    auto dorianScale = writeScale(4, 3);
    //6)
    auto bloodTest = analyzeBlood('o');
    //7)
    playInBand();
    //8)
    auto tuneUp = tuneInstrument(7, true);
    //9)
    auto playChords = identifyChord('D', true);
    //10)
    auto mathProblem = subtraction(8, 2);
    
    ignoreUnused(brokeUp);
    ignoreUnused(addUp);
    ignoreUnused(soccerTeam);
    ignoreUnused(casualClothes);
    ignoreUnused(dorianScale);
    ignoreUnused(bloodTest);
    ignoreUnused(tuneUp);
    ignoreUnused(playChords);
    ignoreUnused(mathProblem);
    ignoreUnused(carRented);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
