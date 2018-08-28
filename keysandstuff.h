/************************* WiFI Setup *****************************/
char ssid[] = "MillPond";        //  your network SSID (name)
char pass[] = "millpond";        // your network password (use for WPA, or use as key for WEP)
int keyIndex = 0;                // your network key Index number (needed only for WEP)
int status = WL_IDLE_STATUS;

/************************* Adafruit.io Setup *********************************/

#define AIO_SERVER      "io.adafruit.com"  //static
#define AIO_SERVERPORT  1883               //static
#define AIO_USERNAME    "csomerlot"
#define AIO_KEY         "a8c43f552c52450386ce83e3a14eb00a"

/************************* Site-specific vars ********************************/
#define SITE_NAME  "office_test"
#define LOOP_DELAY 5000          //seconds
