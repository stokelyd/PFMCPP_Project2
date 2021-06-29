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
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 
 
 bool
 char
 int
 float
 double
 void
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    
    bool isPrimaryContact = true;
    bool hasValidAddress = false;
    bool shouldUpdate = true;

    char rating = 'b';
    char firstInitial = 'S';
    char asciiA = 65;

    int age = 35;
    int year = 1906;
    int yearsRemainingInTerm = 28;

    float cupsOfFlour = 2.25f;
    float piFloat = 3.14159f; // minimum precision of a float (6)
    float massOfTheSun = 1.989e30f;

    double goldenRatio = 1.61803398875;
    double piDouble = 3.14159265358979; // minimum precision of a double (15)
    double massOfProton = 1.6726219e-27;

    ignoreUnused(number, isPrimaryContact, hasValidAddress, shouldUpdate, rating, firstInitial, asciiA, age, year, yearsRemainingInTerm, cupsOfFlour, piFloat, massOfTheSun, goldenRatio, piDouble, massOfProton); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
bool determineIfValidInput(int number, int qualifierType = 0)
{
    ignoreUnused(number, qualifierType);
    return {};
}

/*
 2)
 */
char findClientFirstInitial(double clientId, bool toLowerCase = false)
{
    ignoreUnused(clientId, toLowerCase);
    return {};
}

/*
 3)
 */
int findNumGasStationsInArea(double xLatitude, 
                             double xLongitude, 
                             double yLatitude, 
                             double yLongitude, 
                             bool requireDieselPump = false)
{
    ignoreUnused(xLatitude, xLongitude, yLatitude, yLongitude, requireDieselPump);
    return {};
}

/*
 4)
 */
float calculateGpaOfStudent(double studentId, bool calculateCgpa = false)
{
    ignoreUnused(studentId, calculateCgpa);
    return {};
}
/*
 5)
 */
double calculateArea(double length, double width)
{
    ignoreUnused(length, width);
    return {};
}

/*
 6)
 */
void updateDatabaseWithSale(double customerId, 
                            double salesRepId, 
                            double purchaseAmount, 
                            int date, 
                            bool discountApplied = false, 
                            bool flagAsTimeSensitive = false, 
                            bool flagAsCustomized = false)
{
    ignoreUnused(customerId, salesRepId, purchaseAmount, date, discountApplied, flagAsTimeSensitive, flagAsCustomized);
}

/*
 7)
 */
void fillCircle(int centerX, 
                int centerY, 
                float radius, 
                int r = 0, 
                int g = 0, 
                int b = 0, 
                float a = 1.0f, 
                int borderStyle = 0)
{
    ignoreUnused(centerX, centerY, radius, r, g, b, a, borderStyle);
}

/*
 8)
 */
double findNthFibonacciNumber(int n)
{
    ignoreUnused(n);
    return {};
}

/*
 9)
 */
bool existsInDatabase(double index)
{
    ignoreUnused(index);
    return {};
}

/*
 10)
 */
int findGreatestCommonFactor(int a, int b) 
{
    ignoreUnused(a, b);
    return {};
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto isValidInput = determineIfValidInput(432, 3);
    //2)
    auto clientFirstInitial = findClientFirstInitial(145322);
    //3)
    auto numGasStations = findNumGasStationsInArea(50.21538, 14.22392, 50.02254, 14.69496, true);
    //4)
    auto cGPA = calculateGpaOfStudent(53244, true);
    //5)
    auto area = calculateArea(35.2, 246.7);
    //6)
    updateDatabaseWithSale(4526, 23, 56.77, 03212014, false, true);
    //7)
    fillCircle(1200, 800, 20.3f, 110, 226, 158, 0.59f, 3);
    //8)
    auto nthFibonacci = findNthFibonacciNumber(460);
    //9)
    auto indexExistsInDatabase = existsInDatabase(45200);
    //10)
    auto greatestCommonFactor = findGreatestCommonFactor(40, 1440);
    
    ignoreUnused(carRented, isValidInput, clientFirstInitial, numGasStations, cGPA, area, nthFibonacci, indexExistsInDatabase, greatestCommonFactor);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
