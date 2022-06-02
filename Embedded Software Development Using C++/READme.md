
The Embedded Software Development using C++ course demonstrates the application of object-oriented programming (OOP) in embedded systems. C++ is the language of choice because it has facilities that make OOP easy to implement and it also allows programming at the hardware level. As feature-rich and fantastic as C++ is, it is easy to misuse and this might cause code bloat. In this course, specific features of the language have been chosen to ensure the programs developed obey the following:

Simplicity

Readability

Maintainability

Core concepts of OOP such as abstraction, encapsulation and polymorphism are covered. The course aims to present this style of programming as simple and friendly as possible hence inheritance isn't covered. In order to make library and application development relatively faster, the STM32Cube HAL APIs are used and direct register-level programming is reduced to a minimum. The STM32F401RE Nucleo Board is used throughout this course and the Keil uVision5 MDK and STM32CubeIDE are used for software development and debugging. Since the course predominantly uses the HAL, then anyone taking the course can use a different STM32 microcontroller and run the same code (with few modifications) due to the portability of the HAL.

Most embedded software are written in C and with a procedural approach to programming. C++ isn't a replacement for C and neither is OOP a replacement for procedural programming. But C++ does provide some features that our embedded software can benefit from and if used judiciously, it would be rewarding for application development. In the end, it is a matter of preference and use case and this course ensures the applicability of the language and programming paradigm (OOP) are reflected and appreciated.

As a student of this course, you'd be exposed to the following:

Object-oriented programming on an embedded system and the following will be applied:

Class, Encapsulation, Abstraction, Polymorphism

Private and Public keywords

Pointers and References

Type safety

Development of libraries using C++, STM32Cube HAL drivers and information from documentations to interface the STM32 microcontroller with external components like:

20x4 LCD

4x4 Keypad

SG90 Servo

HC05 Bluetooth Module

HC-SR04 Ultrasonic Sensor

L298N Motor Driver

Code generation using STM32CubeMx as well as modification and customization of the CubeMx generated code to suit the application being developed.

HAL GPIO, UART and Timer programming on the STM32

Use of timers for PWM signal generation as well as PWM input capture for determination of an input signal's duty cycle

Software design prior to the development of a library or application code

Code testing and debugging on Keil uVision 5 and STM32CubeIDE