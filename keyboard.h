#ifndef __KEYBOARD_H
#define __KEYBOARD_H

#include <QObject>
#include <hidapi/hidapi.h>

enum Mode {
  MODE_NORMAL = 1,
  MODE_GAMING = 2,
  MODE_BREATHE = 3,
  MODE_DEMO = 4,
  MODE_WAVE = 5
};

enum Region {
  REGION_LEFT = 1,
  REGION_MIDDLE = 2,
  REGION_RIGHT = 3
};

enum Color {
  COLOR_OFF = 0,
  COLOR_RED = 1,
  COLOR_ORANGE = 2,
  COLOR_YELLOW = 3,
  COLOR_GREEN = 4,
  COLOR_SKY = 5,
  COLOR_BLUE = 6,
  COLOR_PURPLE = 7,
  COLOR_WHITE = 8
};

enum Intensity {
  INTENSITY_HIGH = 0,
  INTENSITY_MEDIUM = 1,
  INTENSITY_LOW = 2,
  INTENSITY_LIGHT = 3
};

class Keyboard : public QObject {
  Q_OBJECT

public:
  Keyboard();
  ~Keyboard();
  void setMode(Mode mode);
  void setColor(Region region, Color color, Intensity intensity);

private:
  hid_device *m_dev;
};

#endif // __KEYBOARD_H
