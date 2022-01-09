# **Design Specifications**

# Green Breeze

![](RackMultipart20210527-4-1d5xwsv_html_31a8618113cbc2c8.png)

Professor Blinder

ECET 400

Team Members: Jarrett Bond, Kevin George, Shawn McHugh, August Rosenberger

Table of Contents Add subsections

Chapter 1: Summary of Product Page 2

Chapter 2: List of Requirements Page 3

Chapter 3: Requirements Specifications Page 3

Chapter 4: Top-Level Block Diagram

Section 1 Page 2

Section 2 Page 2

Section 3 Page 2

Chapter 5: Explanation of Block Diagrams

Section 1 Page 2

Section 2 Page 2

Section 3 Page 2

Chapter 6: Second-Level Block Diagram Page 2

Chapter 7: Flowchart of the Program Page 2

Chapter 8: Cost and Type of Major Components Purchased Page 2

Appendix A: Circuit Diagrams Page 2

Appendix B: Code with Comments Page 2

Appendix C: Potential Problems and Obstacles Page 2

Appendix D: Bill of Materials Page 2

Appendix E: Calculations Page 2

Appendix F: Data Sheets Page 2

1. Project Roles

August:

- Hardware design for microcontroller
- Determining auxiliary components for microcontroller and their implementation
- Voltage regulation for auxiliary components
- Providing data sheets and schematics for microcontroller and auxiliary components

Kevin:

- Software design and implementation
- Software flowcharts and block diagrams

Jarrett:

- Selecting battery
- Designing voltage regulator from battery to microcontroller
- Identifying potential problems with all equipment he selected and designed
- Providing data sheets for all equipment he selected and designed

Shawn:

- Designing primary output power diagrams
- Designing relay circuit for charging the battery

Determining most efficient use of generator.

1. Summary of Product

Green Breeze is a horizontal-axis wind turbine designed to be implemented within subway tunnels. Three sets of turbine blades are staggered one foot apart on a single shaft. The second and third set of blades rotated 30 and 60 degrees clockwise (respectively) in relation to the first set of blades. The turbine utilizes the residual wind energy produced by subway cars to create electricity by means of an alternator. The electricity generated is then sent through a regulator to control power output fluctuations. Electricity is then sent to the subway&#39;s grid system as well as to the device&#39;s battery. A second voltage regulator is utilized in order to power the device&#39;s microcontroller. The microcontroller is responsible for monitoring all sensors, activating switches, making calculations, as well as storing and relaying all pertinent data.

The product was first subdivided into two parts. August and Kevin were responsible for all aspects of the design and programming surrounding the microcontroller.  Jarrett and Shawn took responsibility for figuring out how the device would effectively generate and store electricity.  From there the roles were further divided and were as follows:

1. List of Requirements

Way to turn kinetic wind energy into electricity

Stable alternator output to power electrical grid and charge device&#39;s battery

Power output from battery suitable for powering small devices (describe)

Ability to monitor sensors, perform calculations, and store data

Ability to read pertinent data the device is generating

1. Requirements Specifications

**Requirement #1:**

**Requirement #2:**

**Requirement #3:**

_General Description:_

DC to DC step down power converter module with USB port.

_Power Requirements:_

1. Source: Lead acid battery
2. Voltage Requirements: 6V-40V

_Case Requirements:_

1. Description:DC to DC Voltage Regulator Step Down Power Supply Buck Converter Module 6-40V to 5V 3A Dual USB Port Output
2. Overall Size: 59mm X 21mm X 17mm/2.32X0.83X0.67inch
3. Material: Silicon, plastic, capacitors (100??F and 1000??F), inductor (470mH), diode (SS34), step down voltage regulator (LM2596S), dual USB port

_Technical Requirements:_

1. Inputs: 6V-40V DC
2. Outputs: 5V / 3A (MAX)
3. Ports: Dual USB
4. Switching frequency: 150KHZ
5. Working temperature: -40 ? ~ 85 ?

_Cost and Schedule Requirements:_

1. Materials and cost should not exceed: $11.00
2. Development and costs should not exceed: $10.00

**Requirement #4:**

**Requirement #5:**

Top-Level Block Diagram

**Section 1:**

![](RackMultipart20210527-4-1d5xwsv_html_74fec2d515676a1.png)

**Section 2:**

**Section 3:**

Explanation of Block Diagrams

**Section 1:**

Section 1 shows how the device&#39;s power is created, altered, stored, and distributed up until the point of the microcontroller.  The turbine includes the rotary blades and shaft that are responsible for capturing the kinetic wind energy and transforming it into mechanical energy. The mechanical energy is then used to turn the rotor within the alternator.  The alternator generates electricity by converting the mechanical energy by means of a spinning rotor within an encompassing stator.  Both the rotor and stator are magnetically charged. The interaction between the two produces a rotating magnetic field which in turn produces an alternating current flow.  This alternating current is then sent through a voltage regulator, responsible for taking a fluctuating voltage and stabilizing it.  The rectifier then converts the alternating current (AC) into direct current (DC), in this case outputting a steady 12V.  This 12V DC is then sent to a lead acid battery where it will be stored until it is needed by other components on the device.  When electricity is drawn from the battery it must first pass through a buck converter.  The buck converter decreases and stabilizes the power that is output from the battery, making it safe for small devices.  Once passing through the buck converter a steady 5V is output. This 5V then reaches the microcontroller, the brain of the entire device.

**Section 2:**

**Section 3:**

Second-Level Block Diagram

![](RackMultipart20210527-4-1d5xwsv_html_6df1aacddf49ee30.png)

Flowchart of the Program

Cost and Type of Major Components Purchased

\*\*\*All component costs are from October 2020 and subject to change\*\*\*

**Battery:**

Type:   Interstate Batteries MTP-124R

Cost:   $172.95

**Relays:**

**Charge Relay**

Type: IDEC Corporation RH1B-UDC12V

Cost: $11.48

**Output Relay**

Type: Grainger 5RLU7

Cost: $4.58

**Buck Converter:**

Type:   Oiyagai DC to DC Voltage Regulator Step Down Power Supply Buck Converter

Module 6-40V to 5V 3A Dual USB Port Output

Cost:   $ 8.50

**3.3 Voltage Regulator:**

Type: The LM1117 is a low dropout voltage regulator with a dropout of 1.2 V at 800 mA of load current.

Cost: $1.25

**Wifi Module:**

Type: The smallest 802.11b/g/n Wi-Fi SOC module

Cost: $9.43

**Atmega 328 MicroController**

Type: A low power, CMOS 8-bit microcontroller, with a CPU throughput approaching one million instructions per second (MIPS) per megahertz

Cost: $1.90

**Temperature Sensor:**

Type: AdaFruit 3251 - 3.3-5v sensor capable of measuring temperature and humidity

Cost: $8.95

**IR sensor:**

Type: Parallax 28015 - 5v ultrasonic proximity sensor

Cost: $29.99

**Display:**

Type: CFAH1602B-TMI-JT - 4/8 Bit parallel channel LED based text only display.

Capable of displaying two 16 character rows of text.

Cost: $7.03

Appendix A - Circuit Diagrams

**Buck Converter:**

![](RackMultipart20210527-4-1d5xwsv_html_4265f56e8a616f75.png)

**3.3v Regulator, Micro-Controller, and Wifi Module:**

![](RackMultipart20210527-4-1d5xwsv_html_a80187a6314308f.png)

Appendix B - Coding with Comments

Appendix C - Potential Problems and Obstacles

Appendix D - Bill of Materials

Appendix E - Calculations

RPMCurrent Variable = Output Current (Ao)

Drag / (Area \* .5 \* r \* V^2)= Drag Coefficient (Cd)

_Vo = 1.25 (1 - R __2_ _/ R__ 1_ _)_

Appendix F - Datasheets

**LM1117 voltage regulator :**

[https://www.ti.com/lit/ds/symlink/lm1117.pdf?ts=1601864449147&amp;ref\_url=https%253A%252F%252Fwww.google.com%252F](https://www.ti.com/lit/ds/symlink/lm1117.pdf?ts=1601864449147&amp;ref_url=https%253A%252F%252Fwww.google.com%252F)

![](RackMultipart20210527-4-1d5xwsv_html_6410853233a707dc.png)

**ESP 8266 - 12 Wifi module info:**

[**https://www.mouser.com/datasheet/2/975/1513856197DS-ESP-12S-1589038.pdf**](https://www.mouser.com/datasheet/2/975/1513856197DS-ESP-12S-1589038.pdf)

**ATMEGA-328 MicroController:**

[http://ww1.microchip.com/downloads/en/DeviceDoc/ATmega48A-PA-88A-PA-168A-PA-328-P-DS-DS40002061B.pdf](http://ww1.microchip.com/downloads/en/DeviceDoc/ATmega48A-PA-88A-PA-168A-PA-328-P-DS-DS40002061B.pdf)

![](RackMultipart20210527-4-1d5xwsv_html_41f780c10bb48235.png)

**Interstate Batteries MTP-124R:**

![](RackMultipart20210527-4-1d5xwsv_html_b4ddc10070ff666e.png)

**LM2596**** :**

https://www.ti.com/lit/ds/symlink/lm2596.pdf

**Oiyagai DC to DC Voltage Regulator Step Down Power Supply Buck Converter:**

![](RackMultipart20210527-4-1d5xwsv_html_b3464007a3fb17f4.png)
