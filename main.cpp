/*
 Project 3 - Part 1 / 5
Video:  Chapter 2 Part 5
 User-Defined Types

 Create a branch named Part1

 Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to reinforce the syntax habits that C++ requires.  What you create in this project will be used as the basis of Project 5 in the course.   
 
 1) write 10 user-defined types in plain-English, 
    in the comments above your UDT, write out, in plain-english, 3 things it can do, and 5 traits.
    Note: Your 10th UDT will use 5 of your UDTs for its properties, so maybe start on UDT #10 first. This goes along with instruction #6.
************************
    Commit after you complete this step so i can review before you proceed with the rest of the projects
    Ping me in Slack to review this step.
    Wait for me to review before proceeding with step 2.
************************
  
 2) define your struct for each of your 10 types. 
    Copy your 3+5 comments into your struct body.
    comment them out.
 
 3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    give the member variables relevant data types
 
 4) make the function parameter list for those member functions use some of your User-Defined Types
    You'll write definitions in part2 for these functions
    you'll call each of these functions in part3
 
 5) make 2 of the 10 user-defined types have a nested class.  
    this nested class also needs member functions.
    this nested class is not considered one of your 10 UDTs.
 
 6) One of your 10 UDTs should only use UDTs for its member variable types.   
    No primitives allowed!
    it still needs member variables.
 
 7) After you finish defining each type, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

/*
 example:  

//1) write out, in plain-english, 5 traits and 3 things it can do.
Car Wash   
5 properties:
    1) has vacuum cleaners
    2) has eco-friendly cleaning supplies
    3) stores the amount of water used per week.
    4) stores amount of profit made per week
    5) number of cars serviced per day

3 things it can do:
    1) wash and wax car
    2) charge customer
    3) detail the car interior
 */
struct CarWash //2)        
{
    //2) has vacuum cleaners
    bool hasVacuumCleaners = true; //3) member variables with relevant data types.
    //2) has eco-friendly cleaning supplies
    bool hasEcoFriendlyCleaningSupplies = true; //3) member variables with relevant data types.
    //2) stores the amount of water used per week.
    float waterUsedPerWeek = 200.f; //3) member variables with relevant data types.
    //2) stores amount of profit made per week
    float profitPerWeek = 495.95f; //3) member variables with relevant data types.
    //2) number of cars serviced per day
    int numberOfCarsServiced = 10; //3) member variables with relevant data types.
    
    //5) make 2 of the 10 user-defined types have a nested class. 
    struct Car   
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);   
    };

    /* 
    member functions with a user-defined type as the parameter.
    The user-defined type parameter happens to be the nested class.
    */

    //2) wash and wax car
    void washAndWaxCar( Car car );
    //2) charge customer
    float chargeCustomer();
    //2) detail the car interior
    void detailInterior( Car car );
    
               
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};


/*
1) Bass Amplifier
5 properties:
    1) Power output RMS in Watts
    2) Has input pad switch
    3) Has direct output
    4) Volume setting
    5) Cabinet type
3 things it can do:
    1) Set output ON
    2) Set output OFF
    3) Change volume
 */

/*
2) Drum
5 properties:
    1) Shell material
    2) Rim material
    3) Diameter in inches
    4) Height in inches
    5) Head material
3 things it can do:
    1) Head hit with stick
    2) Head hit with brush
    3) Rim shot with stick
 */

/*
3) Musician
5 properties:
    1) Height in inches
    2) Weight in pounds
    3) Hair color
    4) Can jump
    5) Has ear plugs
3 things it can do:
    1) Put in earplugs
    2) Play instrument
    3) Jump
 */

/*
4) Audience member
5 properties:
    1) Height in inches
    2) Weight in pounds
    3) Hair color
    4) Can mosh
    5) Can surf
3 things it can do:
    1) Rock out
    2) Mosh
    3) Surf
 */

/*
5) Channel strip
5 properties:
    1) Gain
    2) Compression
    3) Aux 1 send level
    4) Pre EQ
    5) Input enabled
3 things it can do:
    1) Set gain level
    2) Set aux 1 send level
    3) Set input enabled
 */

/*
6) Input section              // simplified for this exercise
5 properties:
    1) Num XLR inputs
    2) Num 1/4" inputs
    3) Phantom power ON
    4) Input pad ON
    5) HPF ON                 // high pass filter
3 things it can do:
    1) Set input pad ON
    2) Set HPF ON
    3) Set phantom power ON
 */

/*
7) Auxilliary send section
5 properties:
    1) Num aux sends
    2) Aux send knob color
    3) Aux send 1 level         // typical
    4) Monitor level
    5) Headphone level
3 things it can do:
    1) Set aux send 1 level
    2) Set monitor level
    3) Setheadphone level
 */

/*
8) Output section
5 properties:
    1) Left channel ON
    2) Right channel ON
    3) Left channel output fader position
    4) Right channel output fader position
    5) Stereo output fader position
3 things it can do:
    1) Set channel ON
    2) Set stereo output ON
    3) Set stereo output fader position
 */

/*
9) Meter section
5 properties:
    1) Power ON
    2) Peak ON
    3) Left Level
    4) Right Level
    5) PFL ON       // Pre-fader listen
3 things it can do:
    1) Display power ON value
    2) Display channel value       // Maybe channel (L/R or 0/1) as a parameter
    3) Display peak ON value
 */

/*
10) Analog Mixer
5 properties:
 These 5 properties should be UDTs that you defined above.
 this goes along with the instruction:
    One of your 10 UDTs should only use UDTs for its member variable types.
    1) Channel Strip    // Simplified as 1 for now. Realize this would be a collection in a real scenario
    2) Input Section
    3) Auxilliary Send Section
    4) Output Section
    5) Meter section
3 things it can do:
    1) Enable channel strip
    2) Enable output group
    3) Set output fader position
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
