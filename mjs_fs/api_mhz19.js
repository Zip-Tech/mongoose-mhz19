// Arduino MHZ19 library API. Source C API is defined at:
// [mgos_mhz19.h]

load('api_math.js');

let MHZ19 = {
    // Error codes
    RES_FAIL: -100.0,
    
    _c: ffi('void *mgos_mhz19_create(void)'), // _c = create
    // _begin: ffi('void mgos_mhz19_begin(void *)'),
    _close: ffi('void mgos_mhz19_close(void *)'),
    // _gc: ffi('int mgos_mhz19_getCO2(void *)'), // _gc stands for getco2()
    
    // // ## **`MHZ19.create()`**
    // // Create a MHZ19 instance.
    // // Return value: an object with the methods described below.
    // create: function(serial) {
    //     let obj = Object.create(MHZ19._proto);
    //     // Initialize MHZ19 library.
    //     // Return value: handle opaque pointer.
    //     obj.mhz = MHZ19._c();
    //     let b = MHZ19._begin(obj.mhz);
    //     if (b === 0) {
    //     // Can't find a sensor
    //         return undefined;
    //     }
    //      return obj;
    // },

    _proto: {
        // ## **`myMHZ.close()`**
        // Close MHZ19 instance; no methods can be called on this instance
        // after that.
        // Return value: none.
        close: function() {
          return MHZ19._close(this.mhz);
        },
    },
};

