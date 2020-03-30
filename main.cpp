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

// ========================================================================================

struct ToasterOven
{
    // Number of racks
    int numRacks = 1;
    // Number of heating modes
    int numHeatingModes = 2;
    // Rack length (inches)
    int rackLengthIn = 9;
    // Rack width (inches)
    int rackWidthIn = 6;
    // Maximum cooking time (minutes)
    int cookingTimeMax = 10;

    struct CookingSpec
    {
        int temperatureF = 400;
        int timeMin = 5;        

        void initialize(int notificationVolume = 4);   
    };

    // Cook food item
    void cookItem (CookingSpec cookSpec);
    // Time food item cooking
    void timeItemCooking (CookingSpec cookSpec);
    // Activate food item done notification
    void activateItemDoneNotification (CookingSpec cookSpec);

    CookingSpec itemSpec;
};

/* Example from step 1
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
 */
 
 struct MicrowaveOven
 {
    // 1) Power (W)
    int powerW = 1000;
    // 2) Number of heating modes
    int numHeatingModes = 3;
    // 3) Platter diameter (in)
    int platterDiameterIn = 12;
    // 4) Weight (Pounds)
    float weightPounds = 12.5f;
    // 5) Volume (cubic inches)
    float volumeCubicIn = 4096.0f;

    struct CookingSpec
    {
        int powerLevel = 5;     // 0 - 10
        int timeMin = 5;        

        void initialize(int notificationVolume = 4);   
    };

    // 1) Cook food item
    void cookItem (CookingSpec cookSpec);
    // 2) Time food item cooking
    void timeItemCooking (CookingSpec cookSpec);
    // 3) Activate food item done notification
    void activateItemDoneNotification (CookingSpec cookSpec);

    CookingSpec itemSpec;
 };

struct BassAmplifier
{
    // 1) Power output RMS (W)
    int powerW = 500;
    // 2) Input pad (dB)
    int inputPadDb = -15;
    // 3) Bass level 
    int bassLevel = 0;      // -10 to 10
    // 4) Treble level
    int trebleLevel = 0;    // -10 to 10
    // 5) Volume level
    int volumeLevel = 0;   // 0 - 11

    // 1) Activate speaker output
    void activateSpeakerOutput(bool protection = true);
    // 2) Mute speaker output
    void muteSpeakerOutput();
    // 3) Activate headphone output
    void activateHeadphoneOutput(bool limitter = true);
};

struct LawnMower
{
    // 1) Weight (Pounds)
    float weightPounds = 72.4f;
    // 2) Cutting width (inches)
    int cuttingWidthIn = 22;
    // 3) Number mowing height adjustments
    int numMowingHeightAdjustments = 3;
    // 4) Ground speed (mph)
    int groundSpeedMph = 4;     // 0 - 4
    // 5) Wheel diameter
    int wheelDiameterIn = 8;

    // 1) Mow
    void mow(int throttlePosition = 5);
    // 2) Mulch
    void mulch(bool bagging = false);
    // 3) Self-propel forward
    void selfPropelFwd();
};

struct Receiver
{
    // 1) Weight (Pounds)
    float weightPounds = 6.8f;
    // 2) Number audio inputs
    int numInputs = 6;
    // 3) Number audio/video inputs
    int numAVInputs = 4;
    // 4) Network capable
    bool networkCapable = true;
    // 5) Standby Power Consumption (W)
    float standbyPowerConsumptionW = 0.1f;

    // 1) Select input source
    int selectInputSource (int defaultInputSource = 2);
    // 2) Select output destination
    int selectOutputDestination (int defaultOutputDestimation = 1);
    // 3) Activate on-screen display
    int activateOnScreenDisplay(int defaultForeColor = 4);
};

struct AmFmTuner
{
    // 1) Weight (Pounds)
    float weightPounds = 3.2f;
    // 2) AM Channel Spacing (kHz)
    int amChannelSpacingKHz = 10;
    // 3) Signal to noise ratio (dB)
    int signalToNoiseRatioDb = 50;
    // 4) Stereo Separation (dB)
    int stereoSeparationDb = 38;
    // 5) Total Harmonic Distortion (%)
    float totalHarmonicDistortionPct = 0.8f;

    // 1) Play AM
    int playAm (int station = 680);
    // 2) Play FM
    int playFm (float station = 98.6f);
    // 3) Select Stereo Output Mode    
    int stereoOutputMode(int defaultStereoOutputMode = 1);
};

struct CdPlayer
{
    // 1) Weight (Pounds)
    float weightPounds = 2.0f;
    // 2) Total Harmonic Distortion (%)
    float thdPct = 0.00002f;
    // 3) Signal to noise ratio (dB)
    int snrDb = 116;
    // 4) Dynamic Range
    int dnrDb = 100;
    // 5) Capacity
    int capacity = 1;

    // 1) Load CD
    int loadCD();
    // 2) Play CD
    int playCD(int defaultTrack = 1);
    // 3) Eject CD
    int ejectCD(bool powerOff = false);
};

struct PowerAmplifier
{
    // 1) Power output RMS (W)
    int continuousPowerOutputRmsW = 100;
    // 2) Total Harmonic Distortion (%)
    float thdPct = 0.002f;
    // 3) Signal to noise ratio (dB)
    int snrDb = 93;
    // 4) Sensitivity (V)
    float inputSensitivityV = 1.09f;
    // 5) Weight (Pounds)	
    float weightPounds = 51.9f;

    // 1) Set output to standby
    int setOutputStandby();
    // 2) Set output level
    int setOutputLevel(float level = 10.2f);
    // 3) Set output ON   
    int setOutputOn(); 
};

struct RecordPlayer
{
    // 1) Weight (Pounds)
    float weightPounds = 21.2f;
    // 2) Turntable material
    char turntableMaterial = 'A';
    // 3) Turntable Diameter (inches)
    float turntableDiameter = 13.078125f;
    // 4) Drive type
    char driveType = 'D';
    // 5) Playback speed (RPM)
    float playbackSpeed = 33.3f;

    // 1) Rotate turntable
    int rotateTurntable(int direction = 1, float playbackSpeed = 33.3f);
    // 2) Play record
    int playRecord(int track = 1);
    // 3) Return tone arm to home position
    int homeTurnArm(bool powerOFF = 1);
};

struct HomeEntertainmentSystem
{
    // 1) Receiver
    Receiver receiver;
    // 2) AM/FM tuner
    AmFmTuner tuner;
    // 3) CD player
    CdPlayer cdPlayer;
    // 4) Power amplifier
    PowerAmplifier powerAmp;
    // 5) Record player
    RecordPlayer recordPlayer;

    // 1) Select input device
    int selectInputDevice(int inputChannel = 1);
    // 2) Set output level
    int setOutputLevel(int level = 1);
    // 3) Mute audio output
    int muteAudioOutput();
};

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
