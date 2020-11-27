// Arduino MHZ19 library API. Source C API is defined at:
// [mgos_mhz19.h]

load('api_math.js');

// mySerial.begin(BAUDRATE);                               // Uno example: Begin Stream with MHZ19 baudrate

// mySerial.begin(BAUDRATE, SERIAL_8N1, RX_PIN, TX_PIN);   // ESP32 Example

// myMHZ19.begin(mySerial);                // *Important, Pass your Stream reference here

// myMHZ19.autoCalibration(false);         // Turn auto calibration OFF

let MHZ19 = {
    // Error codes
    RES_FAIL: -100.0,
    
    _c: ffi('void *mgos_mhz19_create(void)'), // _c = create
    _begin: ffi('void mgos_mhz19_begin(void *)'),
    _close: ffi('void mgos_mhz19_close(void *)'),
    // _gc: ffi('int mgos_mhz19_getCO2(void *)'), // _gc stands for getco2()
    
    // // ## **`MHZ19.create()`**
    // // Create a MHZ19 instance.
    // // Return value: an object with the methods described below.
    create: function() {
        let obj = Object.create(MHZ19._proto);
        // Initialize MHZ19 library.
        // Return value: handle opaque pointer.
        obj.mhz = MHZ19._c();
        let b = MHZ19._begin(obj.mhz);
        if (b === 0) {
        // Can't find a sensor
            return undefined;
        }
         return obj;
    },

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

