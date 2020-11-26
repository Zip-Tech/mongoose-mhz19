/*
    * Arduino MH-Z19 library API wrapper
*/

#include "MHZ19.h"

#ifdef __cplusplus
extern "C"
{
#endif

#define MGOS_MHZ19_RES_FAIL -10000

int mgos_mhz19_getCO2Raw(MHZ19 *mhz19);

#ifdef __cplusplus
}
#endif /* __cplusplus*/