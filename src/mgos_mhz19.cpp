#include "mgos_mhz19.h"
#include <Stream.h>


MHZ19 *mgos_mhz19_create() {
  return new MHZ19();
}

void mgos_mhz19_begin(MHZ19 *mhz, Stream &serial) {
  if (mhz == nullptr) return;
  return mhz->begin(serial);
}

void mgos_mhz19_close(MHZ19 *mhz) {
  if (mhz != nullptr) {
    delete mhz;
    mhz = nullptr;
  }
}

int mgos_mhz19_getCO2(MHZ19 *mhz19) {
    if (mhz19 == nullptr) return MGOS_MHZ19_RES_FAIL;
    return mhz19->getCO2();
}