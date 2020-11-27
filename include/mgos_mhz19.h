/*
    * Arduino MH-Z19 library API wrapper
*/

#include "MHZ19.h"

#ifdef __cplusplus
extern "C"
{
#endif

#define MGOS_MHZ19_RES_FAIL -10000
/*
 * Initialize mhz19 library.
 * Return value: OneWire handle opaque pointer.
 */
MHZ19 *mgos_mhz19_create();

/*
 * Initialize the sensor with given parameters/settings.
 * Returns 0 if the sensor not plugged or a checking failed,
 * i.e. the chip ID is incorrect.
 * Returns 1 otherwise.
 */
// void mgos_mhz19_begin(MHZ19 *mhz, Stream &stream);
void mgos_mhz19_begin(MHZ19 *mhz);

/*
 * Close MHZ19 handle. Return value: none.
 */
void mgos_mhz19_close(MHZ19 *mhz);

/*
 * Get co2 value
 */
int mgos_mhz19_getCO2(MHZ19 *mhz);

#ifdef __cplusplus
}
#endif /* __cplusplus*/