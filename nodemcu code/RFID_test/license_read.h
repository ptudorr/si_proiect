#ifndef __LICENSE_READ_INCLUDED
#define __LICENSE_READ_INCLUDED

#define MFRC522_SPICLOCK (10000u)

#include <SPI.h>
#include <MFRC522.h>

#define RST_PIN         UINT8_MAX           // Configurable, see typical pin layout above
#define SS_PIN_IN       D3          // Configurable, see typical pin layout above
#define SS_PIN_OUT      D4          // Configurable, see typical pin layout above

//license - pre-allocated char array of at least 8 chars; will end in \0
//returns true on success
bool read_license_in(char *license);
bool read_license_out(char *license);

void license_read_init();

#endif
