# STM-Learning-Log 🚀
This repository documents my journey in STM32 embedded development, from basic LED control to advanced hardware-software integration.

## 🛠️ Project Milestones

### 1. Modular LED Driver Refactoring (2026-04-05)
- **Key Achievement**: Successfully decoupled hardware-specific logic from `main.c` into a dedicated driver layer (`led.c` and `led.h`).
- **Technical Highlights**:
  - Implemented a **parameterized driver function**: `LED_Init(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin)`.
  - Applied **Bitwise Operations** and Hexadecimal logic for efficient pin management.
  - Resolved complex **Hardware Debugging** issues caused by loose connections on the system board.

### 2. 8-Bit LED Chaser (Water Light)
- **Functionality**: Synchronized sequential LED blinking across pins PA0-PA7 using array iteration and loops.
- **Troubleshooting**: Optimized the control logic by implementing a "Turn On -> Delay -> Turn Off" sequence to prevent simultaneous lighting of all LEDs.
### 3. Mastered GPIO Input/Output:
Gained a deep understanding of reading digital signals from external hardware.

## 📂 Directory Structure
- **User/**: Application logic and high-level control (`main.c`, `led.c`).
- **Hardware/**: Low-level hardware abstraction and peripheral drivers.
- **System/**: System utilities including `Delay.c` for precise timing.
