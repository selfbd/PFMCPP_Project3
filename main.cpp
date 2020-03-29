/*
 Project 3 - Part 1 / 5
Video:  Chapter 2 Part 5
 User-Defined Types

 Create a branch named Part1

 Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to reinforce the syntax habits that C++ requires.  What you create in this project will be used as the basis of Project 5 in the course.   
 
 1) write 10 user-defined types in plain-English, 
    in the comments above your UDT, write out, in plain-english, 3 things it can do, and 5 traits or properties.
    Note: Your 10th UDT will use 5 of your UDTs for its properties, so start on UDT #10 first and work backwards. This goes along with instruction #6.

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, until the smallest object is made of up only primitives. 

    Here is an example:
    Cell Phone

    A Cell Phone is made up of:
        Display
        Memory
        CPU
        Radio
        Applications

    These things make up the 5 traits.
    These 5 things can be broken down into their own sub-objects and properties. 

    For example: Display
    A Display has the following traits or properties:
        pixels
        amount of power consumed.
        brightness.

    the Display's brightness can be represented with a Primitive, such as a double. 
    The amount of power consumed can also be represented with a Primitive.
    The 'pixels' must be represented with an array of Pixel instances.  Arrays have not been discussed and can't be used in this project.
    Instead, we can use an Integer primitive to describe the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed
        Brightness

    Notice that I did not write "has a display" or "Has memory" or "has a cpu"  
    Writing 'has a ___" checks whether or not your object *has the ability to do something*.
    Instead, I wrote "Display" or "CPU".  These are specific objects or amounts. 
    In C++ terms, this means to I want you to avoid bool (has a) as a member variable type.
    Instead, prefer the other primitive types when you get to step 2)
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
    1) vacuum cleaners
    2) eco-friendly cleaning supplies
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
    int numVacuumCleaners = 3; //3) member variables with relevant data types.
    //2) has eco-friendly cleaning supplies
    int numEcoFriendlyCleaningSupplies = 20; //3) member variables with relevant data types.
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

// 1) BEGIN =====================================================================

/* Nested class plan to be used for UDTs 1 and 2
    struct FoodItemToBeHeated 
    {
        float beginningTemperatureF = 75.0f;
        float maxTemperature = 500.0f;        

        void heatToDesiredTemparature(double desiredTemperature = 100.0);   
    };
*/

/*
1) Toaster oven
5 properties:
    1) Number of racks
    2) Number of heating modes
    3) Rack length (inches)
    4) Rack width (inches)
    5) Maximum cooking time (minutes)
3 things it can do:
    1) Cook food item
    2) Time food item cooking
    3) Activate food item done notification

2) Microwave oven
5 properties:
    1) Power (W)
    2) Number of heating modes
    3) Platter diameter (in)
    4) Weight (Pounds)
    5) Volume (cubic inches)
3 things it can do:
    1) Cook food item
    2) Time food item cooking
    3) Activate food item done notification
 
3) Bass Amplifier
5 properties:
    1) Power output RMS (W)
    2) Input pad (dB)
    3) Bass level 
    4) Treble level
    5) Volume level
3 things it can do:
    1) Activate speaker output
    2) Mute speaker output
    3) Activate headphone output

4) Lawn mower
5 properties:
    1) Weight (Pounds)
    2) Cutting width (inches)
    3) Number mowing height adjustments
    4) Ground speed (mph)
    5) Wheel diameter
3 things it can do:
    1) Mow
    2) Mulch
    3) Self-propel forward

5) Receiver
5 properties:
    1) Weight (Pounds)
    2) Number audio inputs
    3) Number audio/video inputs
    4) Network capable
    5) Standby Power Consumption (W)
3 things it can do:
    1) Select input source
    2) Select output destination
    3) Activate on-screen display

6) AM/FM tuner
5 properties:
    1) Weight (Pounds)
    2) AM Channel Spacing (kHz)
    3) Signal to noise ratio (dB)
    4) Stereo Separation (dB0)
    5) Total Harmonic Distortion (%)
3 things it can do:
    1) Play AM
    2) Play FM
    3) Select Stereo Output Mode
	
7) CD player
5 properties:
    1) Weight (Pounds)
    2) Total Harmonic Distortion (%)
    3) Signal to noise ratio (dB)
    4) Dynamic Range
    5) Capacity
3 things it can do:
    1) Load CD
    2) Play CD
    3) Eject CD
	
8) Power amplifier
5 properties:
    1) Power output RMS (W)
    2) Total Harmonic Distortion (%)
    3) Signal to noise ratio (dB)
    4) Sensitivity (dB)
    5) Weight (Pounds)						
3 things it can do:
    1) Set output to standby
    2) Set output level
    3) Set output ON

9) Record player
5 properties:
    1) Weight (Pounds)
    2) Turntable material
    3) Turntable Diameter (inches)
    4) Drive type
    5) Playback speed (RPM)
3 things it can do:
    1) Rotate turntable
    2) Play record
    3) Return tone arm to home position
	
10) Home entertainment system
5 properties:
    1) Receiver
    2) AM/FM tuner
    3) CD player
    4) Power amplifier
    5) Record player
3 things it can do:
    1) Select input device
    2) Set output level
    3) Mute audio output
*/
// 1) END =======================================================================

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
