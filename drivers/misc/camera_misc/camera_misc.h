#ifndef _CAMERA_MISC_H
#define _CAMERA_MISC_H

#define CAMERA_DATA_ARRAY_LEN       4

enum {
  CAMERA_RESET_WRITE     = 100,
  CAMERA_POWERDOWN_WRITE = 101,
  CAMERA_CLOCK_DISABLE   = 102,
  CAMERA_CLOCK_ENABLE    = 103,
  CAMERA_AVDD_POWER_ENABLE = 104,
  CAMERA_AVDD_POWER_DISABLE = 105,
};

#define CAMERA_DEVICE0  "/dev/camera0"

#endif /* _CAMERA_MISC_H */ 
