/*-------------------------------------------------------------------------*
 * File:  Potentiometer.h
 *-------------------------------------------------------------------------*
 * Description:
 *     Potentiometer driver that uses the RX62N's S12AD A/D input.
 *-------------------------------------------------------------------------*/
#ifndef POTENTIOMETER_H_
#define POTENTIOMETER_H_

/*-------------------------------------------------------------------------*
 * Includes:
 *-------------------------------------------------------------------------*/
#include <stdint.h>

/*-------------------------------------------------------------------------*
 * Prototypes:
 *-------------------------------------------------------------------------*/
void Potentiometer_Init(void);
uint32_t Potentiometer_Get(void);
uint32_t Microphone_Get(void);

#endif // POTENTIOMETER_H_
/*-------------------------------------------------------------------------*
 * End of File:  Potentiometer.h
 *-------------------------------------------------------------------------*/