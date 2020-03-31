/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On a new branch:

 1) Add a constructor for each User-Defined-Type.
 
 2) amend some of your UDT's member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of each of your user-defined types in the main function at the bottom of that file,

 4) call some of your UDT's amended member functions in main().
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Make a pull request after you make your first commit and pin the pull request link to our DM thread.

 send me a DM to check your pull request

 Wait for my code review.
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int a; //a member variable
    UDT() { a = 0; }             //1) the constructor
    void printThing()            //the member function
    {
        std::cout << "UDT::printThing() " << a << std::endl;  //2) printing out something interesting
    }
};

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'a' equal to 0? " << (foo.a == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
}

//insert Example::main() into main() of user's repo.


// ToasterOven - Begin ==================================================

struct ToasterOven
{
    int numRacks = 1;
    int numHeatingModes = 2;
    int rackLengthIn = 9;
    int rackWidthIn = 6;
    int cookingTimeMax = 10;

    struct CookingSpec
    {
        int temperatureF = 400;
        int timeMin = 5;        
    };

    void cookItem (CookingSpec cookSpec);
    void timeItemCooking (CookingSpec cookSpec);
    void activateItemDoneNotification (CookingSpec cookSpec);

    CookingSpec itemSpec;
};

void ToasterOven::cookItem(CookingSpec cookSpec)
{
    if(cookSpec.temperatureF > 100) {}         // do something
}

void ToasterOven::timeItemCooking(CookingSpec cookSpec)
{
    if(cookSpec.timeMin > 0) {}                // do something
}

void ToasterOven::activateItemDoneNotification(CookingSpec cookSpec)
{
    auto durationMin = 6;
    if(durationMin > cookSpec.timeMin) {}     // do something
}

// ToasterOven - End ====================================================

// MicrowaveOven - Begin ================================================

 struct MicrowaveOven
 {
    int powerW = 1000;
    int numHeatingModes = 3;
    int platterDiameterIn = 12;
    float weightPounds = 12.5f;
    float volumeCubicIn = 4096.0f;

    struct CookingSpec
    {
        int powerLevel = 5;
        int timeMin = 5;        
    };

    void cookItem (CookingSpec cookSpec);
    void timeItemCooking (CookingSpec cookSpec);
    void activateItemDoneNotification (CookingSpec cookSpec);

    CookingSpec itemSpec;
 };

void MicrowaveOven::cookItem(CookingSpec cookSpec)
{
    if(cookSpec.powerLevel > 1) {}             // do something
}

void MicrowaveOven::timeItemCooking(CookingSpec cookSpec)
{
    if(cookSpec.timeMin > 0) {}                // do something
}

void MicrowaveOven::activateItemDoneNotification(CookingSpec cookSpec)
{
    auto durationMin = 6;
    if(durationMin > cookSpec.timeMin) {}     // do something
}

// MicrowaveOven - End ==================================================

// BassAmplifier - Begin ================================================

struct BassAmplifier
{
    int powerW = 500;
    int inputPadDb = -15;
    int bassLevel = 0;
    int trebleLevel = 0;
    int volumeLevel = 0;

    void activateSpeakerOutput(bool protection = true);
    void muteSpeakerOutput();
    void activateHeadphoneOutput(bool limitter = true);
};

void BassAmplifier::activateSpeakerOutput(bool protection)
{
    if(protection == false) {}     // do something
}

void BassAmplifier::muteSpeakerOutput()
{
    // do something
}

void BassAmplifier::activateHeadphoneOutput(bool limitter)
{
    if(limitter == false) {}     // do something
}

// BassAmplifier - End ==================================================

// LawnMower - Begin ====================================================

struct LawnMower
{
    float weightPounds = 72.4f;
    int cuttingWidthIn = 22;
    int numMowingHeightAdjustments = 3;
    int groundSpeedMph = 4;
    int wheelDiameterIn = 8;

    void mow(int throttlePosition = 5);
    void mulch(bool bagging = false);
    void selfPropelFwd();
};

void LawnMower::mow(int throttlePosition)
{
    if(throttlePosition > 0) {}     // do something
}

void LawnMower::mulch(bool bagging)
{
    if(bagging == false) {}        // do something
}

void LawnMower::selfPropelFwd()
{
    // do something
}

// LawnMower - End ======================================================

// Receiver - Begin =====================================================

struct Receiver
{
    float weightPounds = 6.8f;
    int numInputs = 6;
    int numAVInputs = 4;
    bool networkCapable = true;
    float standbyPowerConsumptionW = 0.1f;

    int selectInputSource (int defaultInputSource = 2);
    int selectOutputDestination (int defaultOutputDestination = 1);
    int activateOnScreenDisplay(int defaultForeColor = 4);
};

int Receiver::selectInputSource(int defaultInputSource)
{
    if(defaultInputSource > 0) {}     // do something
    return 0;
}

int Receiver::selectOutputDestination(int defaultOutputDestination)
{
    if(defaultOutputDestination > 0) {}     // do something
    return 0;
}

int Receiver::activateOnScreenDisplay(int defaultForeColor)
{
    if(defaultForeColor > 0) {}     // do something
    return 0;
}

// Receiver - End =======================================================

// AmFmTuner - Begin ====================================================

struct AmFmTuner
{
    float weightPounds = 3.2f;
    int amChannelSpacingKHz = 10;
    int signalToNoiseRatioDb = 50;
    int stereoSeparationDb = 38;
    float totalHarmonicDistortionPct = 0.8f;

    int playAm (int station = 680);
    int playFm (float station = 98.6f);
    int stereoOutputMode(int defaultStereoOutputMode = 1);
};

int AmFmTuner::playAm(int station)
{
    if(station > 534 && station < 1606) {}     // do something
    return 0;
}

int AmFmTuner::playFm(float station)
{
    if(station > 87.0f && station < 109.0f) {}     // do something
    return 0;
}

int AmFmTuner::stereoOutputMode(int defaultStereoOutputMode)
{
    if(defaultStereoOutputMode > 0) {}     // do something
    return 0;
}

// AmFmTuner - End ======================================================

// CdPlayer - Begin =====================================================

struct CdPlayer
{
    float weightPounds = 2.0f;
    float thdPct = 0.00002f;
    int snrDb = 116;
    int dnrDb = 100;
    int capacity = 1;

    int loadCD();
    int playCD(int defaultTrack = 1);
    int ejectCD(bool powerOff = false);
};

int CdPlayer::loadCD()
{
    // do something
    return 0;
}

int CdPlayer::playCD(int defaultTrack)
{
    if(defaultTrack > 0) {}     // do something
    return 0;
}

int CdPlayer::ejectCD(bool powerOff)
{
    // Eject CD

    if(powerOff)
    {
        // Set CD player power OFF
    }
    return 0;
}

// CdPlayer - End =======================================================

// PowerAmplifier - Begin ===============================================

struct PowerAmplifier
{
    int continuousPowerOutputRmsW = 100;
    float thdPct = 0.002f;
    int snrDb = 93;
    float inputSensitivityV = 1.09f;
    float weightPounds = 51.9f;

    int setOutputStandby();
    int setOutputLevel(float level = 10.2f);
    int setOutputOn(); 
};

int PowerAmplifier::setOutputStandby()
{
    // do something
    return 0;
}

int PowerAmplifier::setOutputLevel(float level)
{
    if(level > 0.0f) {}     // do something
    return 0;
}

int PowerAmplifier::setOutputOn()
{
    // do something
    return 0;
}

// PowerAmplifier - End =================================================

// RecordPlayer - Begin =================================================

struct RecordPlayer
{
    float weightPounds = 21.2f;
    char turntableMaterial = 'A';
    float turntableDiameter = 13.078125f;
    char driveType = 'D';
    float playbackSpeed = 33.3f;

    int rotateTurntable(int direction = 1, float speed = 33.3f);
    int playRecord(int track = 1);
    int homeToneArm(bool powerOFF = 1);
};

int RecordPlayer::rotateTurntable(int direction, float speed)
{
    // Realize "==" is challenging with non-exact floating-point numbers, but ignoring that implementation in this example
    if (speed <= 0) return 1;

    if (direction == 0 && speed > 0)
    {
        // Rotate turntable clockwise
    }
    else if (direction == 1 && speed > 0)
    {
        // Rotate turntable counter clockwise
    }
    return 0;
}

int RecordPlayer::playRecord(int track)
{
    if(track > 0) {}     // do something
    return 0;
}

int RecordPlayer::homeToneArm(bool powerOff)
{
    // Home tone arm

    if(powerOff)
    {
        // Set record player power OFF
    }
    return 0;
}

// RecordPlayer - End ===================================================

// HomeEntertainmentSystem - Begin ======================================

struct HomeEntertainmentSystem
{
    Receiver receiver;
    AmFmTuner tuner;
    CdPlayer cdPlayer;
    PowerAmplifier powerAmp;
    RecordPlayer recordPlayer;

    int selectInputDevice(int inputChannel = 1);
    int setOutputLevel(int level = 1);
    int muteAudioOutput();
};

int HomeEntertainmentSystem::selectInputDevice(int inputChannel)
{
    if(inputChannel > 0) {}     // do something
    return 0;
}

int HomeEntertainmentSystem::setOutputLevel(int level)
{
    if(level > 0) {}     // do something
    return 0;
}

int HomeEntertainmentSystem::muteAudioOutput()
{
    // do something
    return 0;
}
// HomeEntertainmentSystem - End ========================================

#include <iostream>
int main()
{
	Example::main();
    std::cout << "good to go!" << std::endl;
}
