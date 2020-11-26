#include "mgos_mhz19.h"


int mgos_mhz19_getCO2Raw(MHZ19 *mhz19) {
    if (mhz19 == nullptr) return MGOS_MHZ19_RES_FAIL;
    return mhz19->getCO2Raw();
}