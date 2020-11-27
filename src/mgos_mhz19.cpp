#include "mgos_mhz19.h"
// #include <HardwareSerial.h>
#include <SoftwareSerial.h>

MHZ19 *mgos_mhz19_create() {
  return new MHZ19();
}

void mgos_mhz19_begin(MHZ19 *mhz) {
  if (mhz == nullptr) return;
  int RX_PIN = 10 ;
  int TX_PIN = 11;
  SoftwareSerial mySerial(RX_PIN, TX_PIN);
  int BAUDRATE = 9600; 
  mySerial.begin(BAUDRATE);
  return mhz->begin(mySerial);
}

void mgos_mhz19_close(MHZ19 *mhz) {
  if (mhz != nullptr) {
    delete mhz;
    mhz = nullptr;
  }
}

int mgos_mhz19_getCO2(MHZ19 *mhz) {
    if (mhz == nullptr) return MGOS_MHZ19_RES_FAIL;
    return mhz->getCO2();
}