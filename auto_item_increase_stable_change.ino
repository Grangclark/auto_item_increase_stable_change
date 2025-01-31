#include <NintendoSwitchControlLibrary.h>

// options
int loopCount = 0;

// report
void writeReport() {
    pushButton(Button::X, 1000);

    pushButton(Button::R, 2000);
    pushButton(Button::A, 6000);
    pushButton(Button::A, 2000);

    pushButton(Button::X, 1000);
}

void setup() {
    // put your setup code here, to run once:
    pushButton(Button::B, 500, 4);
}

void loop() {
    // put your main code here, to run repeatedly:
    // menu open
    pushButton(Button::X, 2000);

    // focus cursor
    pushButton(Button::A, 1000);
    pushHat(Hat::UP, 1000);
    pushHat(Hat::UP, 1000);

    // form change
    pushButton(Button::A, 2000);
    pushButton(Button::A, 2000);
    pushButton(Button::A, 3000);
    pushButton(Button::A, 2000);

    pushHat(Hat::DOWN, 1000);
    pushHat(Hat::DOWN, 1000);

    // box access
    pushHat(Hat::RIGHT, 1000);
    pushButton(Button::A, 4000);
    pushButton(Button::X, 1000);
    pushButton(Button::X, 1000);
    pushButton(Button::L, 1000);

    // get item
    pushButton(Button::A, 1000);
    pushHat(Hat::DOWN, 1000);
    pushHat(Hat::DOWN, 1000);
    pushHat(Hat::DOWN, 1000);
    pushButton(Button::A, 1000);

    // close box
    pushButton(Button::B, 2000);
    pushHat(Hat::LEFT, 1000);

    // close menu
    pushButton(Button::X, 1000);

    // save
    if (loopCount == 50) {
        writeReport();
        loopCount = 0;
    }

    // counter
    loopCount++;

}
