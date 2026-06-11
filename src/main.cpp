#include <iostream>
using namespace std;
int main()
{
    short int systemState;
    //-----------------------------------------INPUT--------------------------------------------

    //systemState input
    cout << "Enter system-state[0-255]:: ";
    cin >> systemState;
    if (systemState < 0 || systemState>255) {
        cout << "Invalid Input!";
        return 0;
    }
    //log init
    int eventLog = 0, powerLevel;

    //power input
    cout << "Enter current power::: ";
    cin >> powerLevel;
    if (powerLevel < 0) {
        powerLevel = 0;
    }
    else if (powerLevel > 100)
        powerLevel = 100;

    short int A1 = 1, A2 = 1, A3 = 1, A4 = 1;                //anichromatic positions



    //------------------------------------5 NIGHTS START---------------------------------

    for (int count = 0; count < 5; count++) {


        //----------------------------------INCIDENTS START-----------------------------

        int evt;
        char arg, add_arg;
        cout << "Enter the Incident number[1-4]";
        cin >> evt;
        int cp1 = 1, cp2 = 1, cp3 = 1, cp4 = 1;


        //-------------EVT SWITCH------------------

        switch (evt) {
        case 1: {

            int a, t;
            cout << "Enter argument 1 for evt 1:";
            cin >> a;
            cout << "Enter argument 2::";
            cin >> t;
            if (a < 1 || a>4 || t < 0 || t>7) {                                                            //case 1 validation
                cout << "Incorrect target";
                break;
            }//validation if....

            switch (a) {
            case 1: {
                cp1 = A1 & (~0);    // current position
                int des = t;            // destination
                if (cp1 == 1 && ((des == 1) || (des == 2))) {                                                           //STAGE TO HALLl OR HALLR
                    A1 = A1 & 0;
                    A1 = (A1 | (1 << des));

                }//if
                else {
                    cout << "InvalidMove" << endl;
                    break;
                }//esle

                if ((cp1 == 2) && (des == 7)) {                                                                 //hallL to office
                    A1 = A1 & 0;
                    A1 = (A1 | (1 << des));

                }//if
                else {
                    cout << "InvalidMove" << endl;
                    break;
                }//esle


                if ((cp1 == 4) && (des == 7)) {                                                                //hallr to office
                    A1 = A1 & 0;
                    A1 = (A1 | (1 << des));

                }//if
                else {
                    cout << "InvalidMove" << endl;
                    break;
                }//esle

                if ((cp1 == 8) && (des == 7)) {                                                              //vent to office
                    A1 = A1 & 0;
                    A1 = (A1 | (1 << des));

                }//if
                else {
                    cout << "InvalidMove" << endl;
                    break;
                }//esle

                if ((cp1 == 16) && (des == 2)) {                                                             //lab to hallL
                    A1 = A1 & 0;
                    A1 = (A1 | (1 << des));

                }//if
                else {
                    cout << "InvalidMove" << endl;
                    break;
                }//esle

                if ((cp1 == 32) && (des == 2)) {                                                            //library to hallR
                    A1 = A1 & 0;
                    A1 = (A1 | (1 << des));

                }//if
                else {
                    cout << "InvalidMove" << endl;
                    break;
                }//esle

                if ((cp1 == 64) && (des == 3)) {                                                            //courtyard to vent
                    A1 = A1 & 0;
                    A1 = (A1 | (1 << des));

                }//if
                else {
                    cout << "InvalidMove" << endl;
                    break;
                }//esle




                break;
            }//case A1

            case 2: {                                      //SAME FOR A2
                cp2 = A2 & (~0);    // current position
                int des = t;            // destination
                if ((cp2 == 1) && ((des == 1) || (des == 2))) {                                                           //STAGE TO HALLl OR HALLR
                    A2 = A2 & 0;
                    A2 = (A2 | (1 << des));

                }//if
                else {
                    cout << "InvalidMove" << endl;
                    break;
                }//esle

                if ((cp2 == 2) && (des == 7)) {                                                                 //hallL to office
                    A2 = A2 & 0;
                    A2 = (A2 | (1 << des));

                }//if
                else {
                    cout << "InvalidMove" << endl;
                    break;
                }//esle


                if ((cp2 == 4) && (des == 7)) {                                                                //hallr to office
                    A2 = A2 & 0;
                    A2 = (A2 | (1 << des));

                }//if
                else {
                    cout << "InvalidMove" << endl;
                    break;
                }//esle

                if ((cp2 == 8) && (des == 7)) {                                                              //vent to office
                    A2 = A2 & 0;
                    A2 = (A2 | (1 << des));

                }//if
                else {
                    cout << "InvalidMove" << endl;
                    break;
                }//esle

                if ((cp2 == 16) && (des == 2)) {                                                             //lab to hallL
                    A2 = A2 & 0;
                    A2 = (A2 | (1 << des));

                }//if
                else {
                    cout << "InvalidMove" << endl;
                    break;
                }//esle

                if ((cp2 == 32) && (des == 2)) {                                                            //library to hallR
                    A2 = A2 & 0;
                    A2 = (A2 | (1 << des));

                }//if
                else {
                    cout << "InvalidMove" << endl;
                    break;
                }//esle

                if ((cp2 == 64) && (des == 3)) {                                                            //courtyard to vent
                    A2 = A2 & 0;
                    A2 = (A2 | (1 << des));

                }//if
                else {
                    cout << "InvalidMove" << endl;
                    break;
                }//esle


                break;
            }//case A2

            case 3: {                                      //SAME FOR A2
                cp3 = A3 & (~0);    // current position
                int des = t;            // destination
                if ((cp3 == 1) && ((des == 1) || (des == 2))) {                                                           //STAGE TO HALLl OR HALLR
                    A3 = A3 & 0;
                    A3 = (A3 | (1 << des));

                }//if
                else {
                    cout << "InvalidMove" << endl;
                    break;
                }//esle

                if ((cp3 == 2) && (des == 7)) {                                                                 //hallL to office
                    A3 = A3 & 0;
                    A3 = (A3 | (1 << des));

                }//if
                else {
                    cout << "InvalidMove" << endl;
                    break;
                }//esle


                if ((cp3 == 4) && (des == 7)) {                                                                //hallr to office
                    A3 = A3 & 0;
                    A3 = (A3 | (1 << des));

                }//if
                else {
                    cout << "InvalidMove" << endl;
                    break;
                }//esle

                if ((cp3 == 8) && (des == 7)) {                                                              //vent to office
                    A3 = A3 & 0;
                    A3 = (A3 | (1 << des));

                }//if
                else {
                    cout << "InvalidMove" << endl;
                    break;
                }//esle

                if ((cp3 == 16) && (des == 2)) {                                                             //lab to hallL
                    A3 = A3 & 0;
                    A3 = (A3 | (1 << des));

                }//if
                else {
                    cout << "InvalidMove" << endl;
                    break;
                }//esle

                if ((cp3 == 32) && (des == 2)) {                                                            //library to hallR
                    A3 = A3 & 0;
                    A3 = (A3 | (1 << des));

                }//if
                else {
                    cout << "InvalidMove" << endl;
                    break;
                }//esle

                if ((cp3 == 64) && (des == 3)) {                                                            //courtyard to vent
                    A3 = A3 & 0;
                    A3 = (A3 | (1 << des));

                }//if
                else {
                    cout << "InvalidMove" << endl;
                    break;
                }//esle


                break;
            }//case A3



            case 4: {                                      //SAME FOR A2
                cp4 = A4 & (~0);    // current position
                int des = t;            // destination
                if ((cp4 == 1) && ((des == 1) || (des == 2))) {                                                           //STAGE TO HALLl OR HALLR
                    A4 = A4 & 0;
                    A4 = (A4 | (1 << des));

                }//if
                else {
                    cout << "InvalidMove" << endl;
                    break;
                }//esle

                if ((cp4 == 2) && (des == 7)) {                                                                 //hallL to office
                    A4 = A4 & 0;
                    A4 = (A4 | (1 << des));

                }//if
                else {
                    cout << "InvalidMove" << endl;
                    break;
                }//esle


                if ((cp4 == 4) && (des == 7)) {                                                                //hallr to office
                    A4 = A4 & 0;
                    A4 = (A4 | (1 << des));

                }//if
                else {
                    cout << "InvalidMove" << endl;
                    break;
                }//esle

                if ((cp4 == 8) && (des == 7)) {                                                              //vent to office
                    A4 = A4 & 0;
                    A4 = (A4 | (1 << des));

                }//if
                else {
                    cout << "InvalidMove" << endl;
                    break;
                }//esle

                if ((cp4 == 16) && (des == 2)) {                                                             //lab to hallL
                    A4 = A4 & 0;
                    A4 = (A4 | (1 << des));

                }//if
                else {
                    cout << "InvalidMove" << endl;
                    break;
                }//esle

                if ((cp4 == 32) && (des == 2)) {                                                            //library to hallR
                    A4 = A4 & 0;
                    A4 = (A4 | (1 << des));

                }//if
                else {
                    cout << "InvalidMove" << endl;
                    break;
                }//esle

                if ((cp4 == 64) && (des == 3)) {                                                            //courtyard to vent
                    A4 = A4 & 0;
                    A4 = (A4 | (1 << des));

                }//if
                else {
                    cout << "InvalidMove" << endl;
                    break;
                }//esle


                break;
            }//case A4



            }//switch a 



            break;
        }//case 1


        case 2: {
            char arg;
            cout << "Enter argument for event 2:: ";
            cin >> arg;
            int bit_pos;
            if (arg == 'L') {
                cout << "Door Sealed" << endl;
                bit_pos = 1;
            }
            else if (arg == 'R') {
                cout << "Door Sealed" << endl;
                bit_pos = 2;

            }
            else if (arg == 'V') {
                cout << "Vent Sealed" << endl;
                bit_pos = 3;

            }
            else {
                cout << "Invalid Code" << endl;
                break;
            }
            if (systemState & (1 << bit_pos));

            else {
                systemState = systemState | (1 << bit_pos);
                eventLog = eventLog | (1 << bit_pos);
            }

            break;
        }//case2 EVT



        case 3: {
            int load;
            cout << "Enter argument for incident 3[load=0..200]::: ";
            cin >> load;

            if (load >= 0 && load <= 200) {
                if (load > 120) {
                    if (systemState & (1 << 6)) {                                           //generator on
                        cout << "Stable" << endl;

                    }
                    else {
                        cout << "Outage" << endl;                                 //generator off
                        if (systemState & (1 << 4)) {
                            systemState = systemState & (~(1 << 4));
                            eventLog = eventLog | (1 << 4);
                        }
                        if (systemState & (1 << 5)) {
                            systemState = systemState & (~(1 << 5));
                            eventLog = eventLog | (1 << 5);
                        }



                    }
                }
            }
            else {
                cout << "Invalid load" << endl;
                break;
            }


            break;
        }//case 3

        case 4: {

            char x;
            cout << "Enter the argument for event 4[C,L,F,G,A]::: ";
            cin >> x;
            switch (x) {
            case 'C': {
                if (systemState & (1)) {
                    systemState = systemState & (~1);
                    eventLog = eventLog | 1;

                }
                else {
                    systemState = systemState | 1;
                    eventLog = eventLog | 1;
                }

                break;
            }//cameras


            case 'L': {
                if (systemState & (1 << 4)) {
                    systemState = systemState & (~(1 << 4));
                    eventLog = eventLog | (1 << 4);

                }
                else {
                    systemState = systemState | (1 << 4);
                    eventLog = eventLog | (1 << 4);
                }



                break;
            }//stage lights

            case 'F': {
                if (systemState & (1 << 3)) {
                    systemState = systemState & (~(1 << 3));
                    eventLog = eventLog | (1 << 3);

                }
                else {
                    systemState = systemState | (1 << 3);
                    eventLog = eventLog | (1 << 3);
                }


                break;
            }//vent fans

            case 'G': {
                if (systemState & (1 << 6)) {
                    systemState = systemState & (~(1 << 6));
                    eventLog = eventLog | (1 << 6);

                }
                else {
                    systemState = systemState | (1 << 6);
                    eventLog = eventLog | (1 << 6);
                }

                break;
            }//generator

            case 'A': {

                if (!((systemState & (1 << 1)) && (systemState & (1 << 2)) && (systemState & (1 << 3)))) {
                    systemState = systemState | (1 << 7);
                    cout << "CallSecurity" << endl;
                    systemState = systemState & (~(1 << 7));
                    eventLog = eventLog | (1 << 7);
                }

                break;
            }//panic alarm

            }//  switch x

            break;
        }//case 4

        default: {
            cout << "CORRUPT EVENT" << endl;
            break;


        }//default

        }//evt switch


        //--------------------------safety rules-------------------------------------
                //energy saver
        int trule = 0;
        if ((systemState & (1 << 4)) && (!(systemState & (1 << 6)))) {
            cout << "Dim Mode" << endl;
            systemState = systemState & (~(1 << 4));
            eventLog = eventLog | (1 << 4);
            trule += 1;
        }

        //printer trap prevention
        if ((trule == 0) && ((systemState & 1 == 0) && (systemState & (1 << 1) && (systemState & (1 << 2))))) {
            cout << "BlindLock" << endl;
            systemState = systemState & (~(1 << 2));
            eventLog = eventLog | (1 << 2);
            trule++;
        }


        //vent evacuation
        if ((trule == 0) && ((systemState & (1 << 7)) && (systemState & (1 << 5)))) {
            cout << "Evacuate" << endl;
            systemState = systemState & (~(1 << 5));
            eventLog = eventLog | (1 << 5);

        }



        //--------------------------------Power drain----------------------------------

        int k = 0;
        if (systemState & 1)
            k++;
        if (systemState & (1 << 1))
            k++;
        if (systemState & (1 << 2))
            k++;
        if (systemState & (1 << 3))
            k++;
        if (systemState & (1 << 4))
            k++;
        if (systemState & (1 << 5))
            k++;
        if (systemState & (1 << 6))
            k++;
        if (systemState & (1 << 7))
            k++;
        powerLevel = max(0, powerLevel - (2 * k));

        if (powerLevel == 0) {
            cout << "Limp mode" << endl;
            if (systemState & (1 << 0)) {
                systemState = systemState & (~(1 << 0));
                eventLog = eventLog | 1;
            }

            if (systemState & (1 << 4)) {
                systemState = systemState & (~(1 << 4));
                eventLog = eventLog | (1 << 4);
            }

            if (systemState & (1 << 5)) {
                systemState = systemState & (~(1 << 5));
                eventLog = eventLog | (1 << 5);
            }
        }


        //-------------------------------------office safety check---------------------------------------------


            //--------FOR A1---------
        if (systemState & (1 << 7)) {
            if (((cp1 == 4)) && ((systemState & (1 << 1)) == 0)) {                           //from hall L
                cout << "Cought" << endl;
                A1 = 1;
                eventLog = eventLog | 1;

            }


            if (((cp1 == 2)) && ((systemState & (1 << 2)) == 0)) {                           //from hall R
                cout << "Cought" << endl;
                A1 = 1;
                eventLog = eventLog | 1;

            }

            if (((cp1 == 16)) && ((systemState & (1 << 3)) == 0)) {                           //from VENT
                cout << "Cought" << endl;
                A1 = 1;
                eventLog = eventLog | 1;

            }
            if (((cp1 == 128)) && ((systemState & (1 << 3)) == 0)) {                           //from office to office
                cout << "Cought" << endl;
                A1 = 1;
                eventLog = eventLog | 1;
            }



            //--------------FOR A2--------------

            if (((cp2 == 4)) && (systemState & (1 << 1)) == 0) {                           //from hall L
                cout << "Cought" << endl;
                A2 = 1;
                eventLog = eventLog | 1;

            }


            if (((cp2 == 2)) && ((systemState & (1 << 2)) == 0)) {                           //from hall R
                cout << "Cought" << endl;
                A2 = 1;
                eventLog = eventLog | 1;

            }

            if (((cp2 == 16)) && ((systemState & (1 << 3)) == 0)) {                           //from VENT
                cout << "Cought" << endl;
                A2 = 1;
                eventLog = eventLog | 1;

            }


            if (((cp2 == 128)) && ((systemState & (1 << 3)) == 0)) {                           //from office to office
                cout << "Cought" << endl;
                A2 = 1;
                eventLog = eventLog | 1;
            }

            //--------------FOR A3--------------

            if (((cp3 == 4)) && ((systemState & (1 << 1)) == 0)) {                           //from hall L
                cout << "Cought" << endl;
                A3 = 1;
                eventLog = eventLog | 1;

            }


            if (((cp3 == 2)) && ((systemState & (1 << 2)) == 0)) {                           //from hall R
                cout << "Cought" << endl;
                A3 = 1;
                eventLog = eventLog | 1;

            }

            if (((cp3 == 16)) && ((systemState & (1 << 3)) == 0)) {                           //from VENT
                cout << "Cought" << endl;
                A3 = 1;
                eventLog = eventLog | 1;

            }



            if (((cp3 == 128)) && ((systemState & (1 << 3)) == 0)) {                           //from office to office
                cout << "Cought" << endl;
                A3 = 1;
                eventLog = eventLog | 1;
            }

            //--------------FOR A4--------------

            if (((cp4 == 4)) && ((systemState & (1 << 1)) == 0)) {                           //from hall L
                cout << "Cought" << endl;
                A4 = 1;
                eventLog = eventLog | 1;

            }


            if (((cp4 == 2)) && ((systemState & (1 << 2)) == 0)) {                           //from hall R
                cout << "Cought" << endl;
                A4 = 1;
                eventLog = eventLog | 1;

            }

            if (((cp4 == 16)) && ((systemState & (1 << 3)) == 0)) {                           //from VENT
                cout << "Cought" << endl;
                A4 = 1;
                eventLog = eventLog | 1;

            }

            if (((cp4 == 128)) && ((systemState & (1 << 3)) == 0)) {                           //from office to office
                cout << "Cought" << endl;
                A4 = 1;
                eventLog = eventLog | 1;
            }

        }

    }//for loop

        //-----------------------OUTPUT--------FINALLYYYYYYYY-------------------

    cout << "systemState=";
    if (systemState & 128) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    if (systemState & 64) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    if (systemState & 32) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    if (systemState & 16) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    if (systemState & 8) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    if (systemState & 4) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    if (systemState & 2) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    if (systemState & 1) {
        cout << 1;
    }
    else {
        cout << 0;
    }

    //--------------------------eventLog output---------------------
    cout << endl << "EventLog=";

    if (eventLog & 128) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    if (eventLog & 64) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    if (eventLog & 32) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    if (eventLog & 16) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    if (eventLog & 8) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    if (eventLog & 4) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    if (eventLog & 2) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    if (eventLog & 1) {
        cout << 1;
    }
    else {
        cout << 0;
    }

    //----------------------score---------------------

    int s = 50;

    int ones = 0;
    if (eventLog & 1)
        ones++;
    if (eventLog & (1 << 1))
        ones++;
    if (eventLog & (1 << 2))
        ones++;
    if (eventLog & (1 << 3))
        ones++;
    if (eventLog & (1 << 4))
        ones++;
    if (eventLog & (1 << 5))
        ones++;
    if (eventLog & (1 << 6))
        ones++;
    if (eventLog & (1 << 7))
        ones++;
    s += ones;

    if (systemState & (1 << 6)) {
        s += 10;
    }

    if (!(systemState & 1)) {
        s -= 15;
        if (systemState & (1 << 1)) {
            s -= 5;
        }
        if (systemState & (1 << 2)) {
            s -= 5;
        }
    }

    cout << endl << "score= " << s;
}