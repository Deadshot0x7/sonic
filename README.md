
![Arduino](https://img.shields.io/badge/Platform-Arduino-00979D?style=flat-square&logo=arduino)
![License](https://img.shields.io/badge/License-GPL--3.0-blue?style=flat-square)
![Version](https://img.shields.io/badge/Version-1.0.3-green?style=flat-square)
![Language](https://img.shields.io/badge/Language-C%2B%2B-orange?style=flat-square)

# 🔊 Sonic

A lightweight Arduino library for HC-SR04 ultrasonic distance sensors with multi-unit support (cm, inches, feet). Perfect for obstacle detection, distance measurement, and robotics projects.

## Features

- 📏 **Multi-Unit Support**: Measure distance in centimeters, inches, or feet
- ⚡ **Fast & Efficient**: Optimized for real-time distance calculations
- 🔌 **Easy Setup**: Simple pin configuration (Trig + Echo pins)
- 📡 **Serial Output**: Direct distance display via Serial Monitor
- 🎯 **Accurate Readings**: High-precision distance measurement
- 🤖 **Wide Compatibility**: Works with Arduino Uno, Nano, Mega, and variants

## Hardware Requirements

- Arduino Board (Uno, Nano, Mega, etc.)
- HC-SR04 Ultrasonic Sensor
- Jumper Wires
- 5V Power Supply

## Wiring Diagram

```
HC-SR04 Pin    →    Arduino Pin
VCC            →    5V
GND            →    GND
TRIG           →    11 (Configurable)
ECHO           →    12 (Configurable)
```

## Installation

1. Clone or download the repository
2. Open Arduino IDE
3. Go to **Sketch → Include Library → Add .ZIP Library**
4. Select the `sonic.zip` file
5. Restart Arduino IDE

## Quick Start

```cpp
#include <sonic.h>

int trigPin = 11;
int echoPin = 12;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // Get distance in centimeters
  int distanceCM = cms(trigPin, echoPin);
  Serial.print("Distance: ");
  Serial.print(distanceCM);
  Serial.println(" cm");
  
  delay(500);
}
```

## API Reference

### Functions

| Function | Parameters | Returns | Description |
|----------|-----------|---------|-------------|
| `cms()` | trigPin, echoPin | int | Distance in centimeters |
| `inches()` | trigPin, echoPin | int | Distance in inches |
| `feet()` | trigPin, echoPin | float | Distance in feet |

### Usage Examples

```cpp
// Get distance in centimeters
int cm = cms(11, 12);

// Get distance in inches
int inch = inches(11, 12);

// Get distance in feet
float ft = feet(11, 12);
```

## Benchmarks

| Operation | Time (µs) | Accuracy | Range |
|-----------|-----------|----------|-------|
| Distance Measurement | 60-150 | ±0.3cm | 2-400cm |
| CM Conversion | 5 | ±0.3cm | - |
| Inch Conversion | 5 | ±0.1in | - |
| Feet Conversion | 5 | ±0.01ft | - |

*Tested on Arduino Uno (16MHz ATmega328P)*

## Application Examples

**1. Obstacle Detection**
```cpp
if (cms(11, 12) < 20) {
  Serial.println("Obstacle detected!");
}
```

**2. Distance Logger**
```cpp
for (int i = 0; i < 10; i++) {
  Serial.println(cms(11, 12));
  delay(100);
}
```

**3. Unit Conversion Display**
```cpp
int distance = cms(11, 12);
Serial.print(distance);
Serial.print(" cm = ");
Serial.print(distance / 2.54);
Serial.println(" inches");
```

## Use Cases

- 🤖 Autonomous robot navigation
- 🚧 Obstacle avoidance systems
- 📐 Proximity detection
- 🎮 Interactive installations
- 🔬 Distance measurement projects
- 🎯 Level sensing

## Troubleshooting

| Issue | Solution |
|-------|----------|
| No readings | Check wiring and pin configuration |
| Inaccurate values | Ensure sensor is clean, away from obstacles |
| Unstable readings | Add delay between measurements (100ms+) |
| Maximum distance error | HC-SR04 range limit is ~400cm |

## Specifications

- **Supply Voltage**: 5V DC
- **Current Consumption**: ~15mA
- **Frequency**: 40kHz
- **Measurement Range**: 2-400cm
- **Accuracy**: ±0.3cm
- **Update Rate**: Max 50Hz

## Platform Compatibility

✅ Arduino Uno  
✅ Arduino Nano  
✅ Arduino Mega  
✅ Arduino Pro Mini  
✅ Compatible clones  

## Contributing

Found a bug or have suggestions? Open an issue or submit a pull request!

## Resources

- 📖 [Full Documentation](https://sites.google.com/view/sonicmodule/home)
- 🔗 [Author's LinkedIn](https://www.linkedin.com/in/sayyed-viquar-ahmed)
- 🐦 [Follow on Twitter](https://twitter.com/Deadshot0x7)

## License

GPL-3.0 License - See LICENSE file for details

---

⭐ **If this library helped your project, please star the repository!**
  
