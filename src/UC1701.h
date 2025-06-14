#ifndef UC1701_H
#define UC1701_H

#include <U8g2lib.h> // Ensure the correct library is included

namespace UC1701 {
    extern U8G2_UC1701_MINI12864_F_4W_SW_SPI u8g2; // Declare the global variable with the correct type
    void setup();     // Declare the setup function
    void UC1701_loop(); // Declare the loop function
}

#endif // UC1701_H
