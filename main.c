#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>


#include "utils.h"
#include "hw_memmap.h"
#include "hw_common_reg.h"
#include "hw_types.h"
#include "hw_adc.h"
#include "hw_ints.h"
#include "hw_gprcm.h"
#include "rom.h"
#include "rom_map.h"
#include "interrupt.h"
#include "prcm.h"
#include "pin.h"
#include "hw_gpio.h"
#include "gpio.h"
#include "pin_mux_config.h"

void disp();
unsigned char seg_no[]={0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f, 0x77, 0x7c, 0x58, 0x5e, 0x79, 0x71};
unsigned int Numb=0;
void main()
{

    PinMuxConfig();
    PinModeSet(PIN_21, PIN_MODE_0);

    PinConfigSet(PIN_50, PIN_STRENGTH_2MA, PIN_TYPE_STD_PU);
    PinConfigSet(PIN_15, PIN_STRENGTH_2MA, PIN_TYPE_STD_PU);
    PinConfigSet(PIN_61, PIN_STRENGTH_2MA, PIN_TYPE_STD_PU);
    PinConfigSet(PIN_62, PIN_STRENGTH_2MA, PIN_TYPE_STD_PU);

    GPIOPinWrite(GPIOA3_BASE, 0x10, 0x00);
    GPIOPinWrite(GPIOA1_BASE, 0x0F, 0x00);

    while(1)
    {
        GPIOPinWrite(GPIOA2_BASE, 0x03, 0x00);

        if((GPIOPinRead(GPIOA0_BASE, 0x01))== 0x01)
        {
            while(((GPIOPinRead(GPIOA0_BASE, 0x01))== 0x01));
            disp(0);
        }

        if((GPIOPinRead(GPIOA2_BASE, 0x40))== 0x40)
        {
            while(((GPIOPinRead(GPIOA2_BASE, 0x40))== 0x40));
            disp(1);
        }

        if((GPIOPinRead(GPIOA0_BASE, 0x40))== 0x40)
        {
            while(((GPIOPinRead(GPIOA0_BASE, 0x40))== 0x40));
            disp(2);
        }

        if((GPIOPinRead(GPIOA0_BASE, 0x80))== 0x80)
        {
            while(((GPIOPinRead(GPIOA0_BASE, 0x80))== 0x80));
            disp(3);
        }

        GPIOPinWrite(GPIOA2_BASE, 0x03, 0x01);

        if((GPIOPinRead(GPIOA0_BASE, 0x01))== 0x01)
        {
            while(((GPIOPinRead(GPIOA0_BASE, 0x01))== 0x01));
            disp(4);
        }

        if((GPIOPinRead(GPIOA2_BASE, 0x40))== 0x40)
        {
            while(((GPIOPinRead(GPIOA2_BASE, 0x40))== 0x40));
            disp(5);
        }

        if((GPIOPinRead(GPIOA0_BASE, 0x40))== 0x40)
        {
            while(((GPIOPinRead(GPIOA0_BASE, 0x40))== 0x40));
            disp(6);
        }

        if((GPIOPinRead(GPIOA0_BASE, 0x80))== 0x80)
        {
            while(((GPIOPinRead(GPIOA0_BASE, 0x80))== 0x80));
            disp(7);
        }

        GPIOPinWrite(GPIOA2_BASE, 0x03, 0x02);

        if((GPIOPinRead(GPIOA0_BASE, 0x01))== 0x01)
        {
            while(((GPIOPinRead(GPIOA0_BASE, 0x01))== 0x01));
            disp(8);
        }

        if((GPIOPinRead(GPIOA2_BASE, 0x40))== 0x40)
        {
            while(((GPIOPinRead(GPIOA2_BASE, 0x40))== 0x40));
            disp(9);
        }

        if((GPIOPinRead(GPIOA0_BASE, 0x40))== 0x40)
        {
            while(((GPIOPinRead(GPIOA0_BASE, 0x40))== 0x40));
            disp(10);
        }

        if((GPIOPinRead(GPIOA0_BASE, 0x80))== 0x80)
        {
            while(((GPIOPinRead(GPIOA0_BASE, 0x80))== 0x80));
            disp(11);
        }

        GPIOPinWrite(GPIOA2_BASE, 0x03, 0x03);

        if((GPIOPinRead(GPIOA0_BASE, 0x01))== 0x01)
        {
            while(((GPIOPinRead(GPIOA0_BASE, 0x01))== 0x01));
            disp(12);
        }

        if((GPIOPinRead(GPIOA2_BASE, 0x40))== 0x40)
        {
            while(((GPIOPinRead(GPIOA2_BASE, 0x40))== 0x40));
            disp(13);
        }

        if((GPIOPinRead(GPIOA0_BASE, 0x40))== 0x40)
        {
            while(((GPIOPinRead(GPIOA0_BASE, 0x40))== 0x40));
            disp(14);
        }

        if((GPIOPinRead(GPIOA0_BASE, 0x80))== 0x80)
        {
            while(((GPIOPinRead(GPIOA0_BASE, 0x80))== 0x80));
            disp(15);
        }
    }
}

void disp(Numb)
{
        GPIOPinWrite(GPIOA1_BASE, 0XFF, seg_no[Numb]);
        UtilsDelay(800);
        GPIOPinWrite(GPIOA1_BASE, 0XFF, seg_no[Numb]);
        UtilsDelay(800);
        GPIOPinWrite(GPIOA1_BASE, 0XFF, seg_no[Numb]);
        UtilsDelay(800);
        GPIOPinWrite(GPIOA1_BASE, 0XFF, seg_no[Numb]);
        UtilsDelay(800);
}
