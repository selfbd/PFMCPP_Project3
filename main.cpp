 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   - you should be left with only your UDTs.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

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
