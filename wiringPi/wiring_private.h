#ifndef  __WIRING_PRIVATE_H__

    #define __WIRING_PRIVATE_H__


    #define GPIO_PIN_N_REGISTER_MASK(x) (1 << (x & 0x1F))


    enum {IO_FAIL            = -1};
    enum {NUM_BYTES_PER_CHAR = sizeof(char)}; // Automatically re-defined if compiler defaults to wide chars


#endif
