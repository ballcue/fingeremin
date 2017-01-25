#ifndef SCREEN_H
#define SCREEN_H

#include "global.h"
#include "InstructionsText.h"

class Screen {
public:
    virtual void updateFrame(Mat& frame) = 0;
};

class InitialScreen : Screen {
public:
    InitialScreen(const Size& size);
    void updateFrame(Mat& frame);

private:
    vector<Rect> inactiveRegions;
    Rect activeRegion;
    Rect samplingRegion;
    InstructionsText samplingInstructions;

};

// class GameScreen : Screen {
// public:
//     // GameScreen(bla);
//     void updateFrame(Mat& frame);
// }

#endif
