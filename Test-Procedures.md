# **Test Procedures**

# Green Breeze

![](RackMultipart20210527-4-da4cmz_html_881e619269ffed1.png)

Professor Blinder

ECET 400

Due Date: 10/26/20

Submitted by: 10/26/2020

Team Members: Jarrett Bond, Kevin George, Shawn McHugh, August Rosenberger

Table of Contents

1 Introduction……………………………………………………………………………….. 3

2 System Overview…….....……………………………………………………………….. 3

3 List of Requirements…………………………………………………………………….. 3

4 Input……………………………………………………………………………………….. 3

5 Processing………………………………………………………………………………… 3

6 Output………………………………………………………………………………………3

7 Functional Prototype…………………………………………………………………….. 3

8 List and Explanation of Deliverables…………………………………………………… 4

8.1 Deliverable #1……………………………………………………………………. 4

8.1.1 Explanation……………………………………………………………… 4

8.2 Deliverable #2……………………………………………………………………. 4

8.2.1 Explanation……………………………………………………………… 4

8.3 Deliverable #3……………………………………………………………………. 4

8.3.1 Explanation……………………………………………………………… 4

8.4 Deliverable #4……………………………………………………………………. 5

8.4.1 Explanation……………………………………………………………… 5

9 Testing Environment…………………………………………………………………….. 5

9.1 Location………………………………………………………………………….. 5

9.2 Safety Measures………………………………………………………………… 5

9.3 Restrictions………………………………………………………………………. 5

10 Testing Overview…………………………………………………………………………. 6

10.1 Test #1……………………………………………………………………………. 6

10.1.1 Description…………………………………………………………….. 6

10.1.2 Test Setup……………………………………………………………….. 6

10.1.3 Necessary Equipment………………………………………………….. 6

10.1.4 Test Procedures………………………………………………………… 6

10.2 Test #2……………………………………………………………………………. 7

10.2.1 Description…………………………………………………………….. 7

10.2.2 Test Setup……………………………………………………………… 7

10.2.3 Necessary Equipment……………………………………………….... 7

10.2.4 Test Procedures……………………………………………………….. 7

10.3 Test #3……………………………………………………………………………. 8

10.3.1 Description…………………………………………………………….. 8

10.3.2 Test Setup……………………………………………………………… 8

10.3.3 Necessary Equipment………………………………………………… 8

10.3.4 Test Procedures……………………………………………………….. 8

10.4 Test #4……………………………………………………………………………. 8

10.4.1 Description…………………………………………………………….. 8

10.4.2 Test Setup……………………………………………………………… 8

10.4.3 Necessary Equipment………………………………………………… 8

10.4.4 Test Procedures……………………………………………………….. 8

10.5 Test Results………………………………………………………………………. 9

10.5.1 Summary of Table…………………………………………………….. 9

10.5.2 Results…………………………………………………………………. 9

12 Appendix A - High-Level Block Diagram………………………………………………. 10

12.1 Block Diagram…………………………………………………………………… 10

12.2 Explanation of Blocks…………………………………………………………… 10

13 Appendix B - Second-Level Block Diagram…………………………………………… 11

13.1 Block Diagram…………………………………………………………………… 11

13.2 Explanation of Blocks………………………………………………………….... 11

14 Appendix C - Schematics……………………………………………………………….. 12

14.1 Buck Converter………………………………………………………………….. 12

14.1.1 Explanation……………………………………………………………… 12

14.2 3.3v Regulator, Micro-Controller,Temp sensor, IR sensor, Display, and Wifi

Module……………………………………………………………………………. 13

14.2.1 Explanation……………………………………………………………… 13

15 Appendix D - FlowCharts and Software……………………………………………….. 14

15.1 FlowChart………………………………………………………………………… 14

15.2 Explanation of FlowChart………………………………………………………. 14

15.3 Software………………………………………………………………………….. 14

15.4 Explanation of Software……………………………………………………….... 14

16 Appendix E - Data Sheets………………………………………………………………. 15

1. Introduction

The Green Breeze is a revolutionary reimagining of the wind turbine. By capturing winds produced by automobiles and locomotives, the Green Breeze is able to convert this otherwise wasted energy into electricity and recycle it back into the power grid.

The majority of wind technology on the market today is designed around old ways of thinking about power generation. Most turbines are giants, designed to be free-standing in an open space, utilized by an industrial wind farmer, and far away from those that consume their power. While such strategies had made sense for coal and diesel power plants, alternative energy technologies allow for decentralization and variation in where and how electricity is produced. And in an age where microgrids are gaining favor with many cities and institutions alike, Green Breeze will become a local power source for the community in which it inhabits, turning it&#39;s waste back into food for the grid.

1. Overview

This document outlines essential deliverables that are required for proper function of the device. Four tests have been created in order for all deliverables to be tested by third parties. Based on measured results, it is to be determined whether or not the device passes or fails each test.

1. List of Requirements

- Produce stable DC current as an output to a load
- Must charge battery and maintain power to the microcontroller

1. Input

- Generator Power Test

1. Processing

- Battery Charge Test
- Software Stability Test
- Sensor Accuracy

1. Output

- Output Power Relay Test
- Current Clamp Test

1. Functional Prototype

- Stable energy production and charging capabilities
- Accurate data logging capabilities

1. List and Explanation of Deliverables

**8.1 Deliverable #1:**

Wind to electric energy conversion with stable 12v output to power electrical grid and charge device&#39;s battery.

8.1.1 Explanation:

Using a simulation of how the turbine will work, mechanical energy will be converted into electrical energy using properties of magnetism, the same found in motors. This will be outputted into an Alternating Current voltage that will be fed into a BMS (Battery Management System) to step down the voltage, provide protection against overcharging and charge the battery appropriately. Any power not being fed into the battery will be used to power an output device.

**8.2 Deliverable #2:**

Power output from battery suitable for powering small devices, specifically the microcontroller, which requires a 5V 3A from a USB port.

8.2.1 Explanation:

The power output of the MTP-124R battery is greater than the 5V 3A that is required to power the microcontroller. Because of this, the power output must first be stepped down and regulated to a suitable voltage and amperage, in order to not cause harm to other devices. This is accomplished with the use of a buck converter (see section 14.1 of Appendix C for more details). The buck converter outputs power at a safe level for the microcontroller, assuring it&#39;s longevity.

**8.3 Deliverable #3:**

Ability to monitor temperature, infrared, and current, perform efficiency calculations, and store data onboard.

8.3.1 Explanation:

At this point the unit (specifically the microcontroller system) should have its primary sensors connected and able to interface with the microcontroller. For the project the infrared sensor should be able to read a binary input and give feedback to the microcontroller. The temperature sensor should be able to read ambient temperature accurately, and return data to the microcontroller. The microcontroller also is wired to the battery in order to monitor the current and voltage, and thus determine the charge statu of the battery. Finally all of the data will be processed and interpreted by the microcontroller, and will finally be displayed on an oled screen so that users can monitor data in real time.

**8.4 Deliverable #4:**

Ultimately the turbine system should intermittently charge the battery, which in turn provides power to the microcontroller system. The microcontroller system then gathers relevant data from the turbine and battery and provides real time information on the status of both of those components.

8.4.1 Explanation:

For this deliverable to be effective all of the other deliverables will have to interconnect and build upon one another in a couple key transition areas. The first area of focus will be in having the turbine charge the battery, this will be done by connecting the output of the turbine (12v DC buck converter) to the battery inputs so that when the turbine generates power that power is stored in the unit&#39;s battery. The next transition area is having the battery output feed into the power input of the microcontroller, this step will contain a sub-step of dropping the voltage from the battery&#39;s 12v output, to the necessary 5v input of the microcontroller. The final transitional area will be in arranging the microcontroller sensors in a manner that they are able to provide meaningful data to the user. This includes using the infrared sensor to look at the spinning turbine blades and calculating rotational speed, using analog and digital inputs to calculate battery status, as well as using the temperature sensor to monitor the units temperature to prevent overheating.

1. Testing Environments

- **9.1 Location**
  - All testing will be conducted at the NJIT Makerspace facility.

Address: 186 Bleeker St, Newark, NJ 07103

- **9.2 Safety Measures**
  - All volunteers present must follow all rules set forth by the staff at the Makerspace facility.
  - Any and all recommended PPE must be worn at all times.
  - Face masks must be worn at all times and social distancing is a requirement.

- **9.3 Restrictions**
  - Anyone testing the Green Breeze must be an active student or Alumni to NJIT.
  - Any outdoor testing must be done on a clear day with no more than 15mph winds.
  - Only three volunteers can conduct a test at a time.

1. Testing Overview

**10.1 Test #1: Output Power Test**

10.1.1 Description:

Test output power of the generator for steady 12V (from the output point of the generator&#39;s voltage regulator).

10.1.2 Test Setup:

While the propeller is rotating at a constant speed, the output voltage will be tested using a voltmeter. An electric motor will be used to rotate the propeller to ensure consistent results. The test operator must verify that propeller speed is constant and a strong connection to ground is present.

10.1.3 Necessary Equipment:

- Green Breeze Device
- Voltmeter
- Speedometer
- Electric motor
- Pulley

10.1.4 Test Procedures:

1. Ensure that the Green Breeze is mounted firmly on level ground with the electric motor attached to the propeller shaft.
2. Turn the motor on and wait until the speed of the propeller is a constant 1000 RPM (+/- 100 RPM), refer to the speedometer to verify.
3. Using the voltmeter, place the negative (black) and positive (red) terminals on as shown in Figure 1.
4. The voltmeter should read 12 volts (+/- 500mV).

Troubleshooting:

- The measured output voltage is lower than 12v
  - Verify that propeller speed meets specifications
  - Verify that both voltmeter probes are making contact with clean metal
- The measured output voltage exceeds 12v
  - Verify that propeller speed is not exceeding specifications
  - Ensure that device is not overheating
- The propeller speed does not stabilize
  - Tighten any physical connections between the motor and propeller shaft
  - Adjust the Green Breeze base to a more level position
  - Check the motor for defects

**10.2 Test #2: Battery Output Safety Test**

10.2.1 Description:

Confirm that power output from battery suitable for powering small devices, specifically the microcontroller, which requires a 5V 3A from a USB port.

10.2.2 Test Setup:

See that microcontroller is turned on and functioning properly.

To confirm, see that the red light on the microcontroller is on and that LCD screens are displaying proper information (RPM and power output in Watts).

10.2.3 Necessary Equipment:

- Green Breeze Device
- Multimeter capable of measuring voltage and amperage
- Schematics of Green Breeze (found in Appendix C)
- One solid tipped 22 AWG jumper wire or equivalent

10.2.4 Test Procedures:

1. Locate the devices buck converter. This device can be found between the battery and microcontroller and contains the components seen in section 14.1.1 of Appendix C.
2. Locate the dual USB port on the buck converter. Disconnect the microcontroller from the buck converter.
3. With the multimeter set to volts, place the positive lead on the right most contact within the upper USB port. Place the negative lead on the left most contact within the upper USB port (or any grounded surface).
4. Measure and record the voltage drop between these two contacts.
5. Repeat steps 3 and 4 for the lower USB port.
6. Next, using the jump wire, connect one end to the leftmost contact within the upper USB port. Then connect the other end of the jumper wire to the rightmost contact of the USB cable that powers the microcontroller (make sure that the white plastic piece that holds the contacts of the USB cable is facing down).
7. set the multimeter to amperage, place the positive lead on the rightmost contact within the upper USB port. Then connect the negative lead to the leftmost contact of the USB cable.
8. Measure and record the amperage.
9. Repeat steps 6-8 for the lower USB port.

**10.3 Test #3: Sensor Test**

10.3.1 Description:

To ensure accurate readings come from sensors and processes we will use a series of procedures to test the readings of the various sensors connected to our microcontroller. Additionally, should these tests pass, and meet our expectations that allows us implicitly confirm the status of our software and display, because the tests will not give expected outputs should these two factors not be working properly.

10.3.2 Test Setup:

1. Turn on microcontroller
2. Establish external circuit
3. Record current temperature

10.3.3 Necessary Equipment:

- Microcontoller unit
- Infrared inputs (black and white)
- Thermometer
- External battery and load

10.3.4 Test Procedures:

1. Temperature sensor test
2. Infrared feedback test
3. Display and software test

**10.4 Test #4: Prototype**

10.4.1 Description:

Test all features, verify that the Green Breeze prototype meets requirements. All previous tests are conducted once again to ensure that all systems work together properly. Refer to Test #1-3 for any details that may have been forgotten.

10.4.2 Test Setup:

All equipment described previously applies here, connected together to verify all connections. Using the completed prototype, all three test stages will be conducted in a clean and dry environment while following any and all previous requirements. The unit will fail this test suite if any stage fails.

10.4.3 Necessary Equipment:

- Green Breeze Device
- Green Breeze Schematics
- Multimeter
- Thermometer
- Speedometer
- Pulley
- Motor
- External Battery
- Resistive/Reactive Load
- Personal Protective Equipment

10.4.4 Test Procedures:

- Stage 1
  - Output Power Test

Summary:

With the Green Breeze Device on level ground, rotate the propeller shaft with the electric motor provided. Once at a constant speed, measure the output voltage from the &quot;A&quot; terminal on the 12V voltage regulator with reference to ground. The output should be at 12v (+/- 500mv).

- Stage 2
  - Battery Output Safety Test

Summary:

Ensure that the output power sourced from the battery is suitable for the microcontroller and sensors. While the Green Breeze device is confirmed to be powered on, locate both the Buck Converter and USB power ports. Test each output and verify strong 5v connections.

- Stage 3
  - Sensor Test

Summary:

This test verifies that the sensors are sending accurate information to our microcontroller. Once the Green Breeze prototype is confirmed to be powered on and stable, two tests and a visual inspection are performed. Test temperature with the handheld thermometer and place objects in and away from the IR sensor to cross reference results. User measurements should fall within 5% of the prototype&#39;s measurements.

**10.5 Test Results:**

10.5.1 Summary of Table:

The Table found in Section 10.5.2 is where all measured values are to be recorded for each test. Enter measured values, the range in which these values fluctuate, and whether the device passed or failed the test. They are to be signed and dated by whomever is performing the test and add notes if necessary.

10.5.2 Results:

| _Test #_ | _Measured Values_ | _Range_ | _Pass / Fail_ | _Signature Date/Time_ | _Notes_ |
| --- | --- | --- | --- | --- | --- |
| 1 |
 |
 |
 |
 |
 |
| 2 |
 |
 |
 |
 |
 |
| 3 |
 |
 |
 |
 |
 |
| 4 |
 |
 |
 |
 |
 |

Comments:

![](RackMultipart20210527-4-da4cmz_html_237499165a11f2b9.gif)

![](RackMultipart20210527-4-da4cmz_html_237499165a11f2b9.gif)

12. Appendix A - High-Level Block Diagram

12.1 Block Diagram:

![](RackMultipart20210527-4-da4cmz_html_80037328e4decf9b.png)

12.2 Explanation of Blocks:

- Input - High volume air sourced from a moving vehicle will rotate the propeller shaft. This shaft is connected directly to the generator which will rotate as well. Rotational speed and temperature will actively be monitored with sensors.

- Processing - The data received from the sensors will be interpreted by the microcontroller and stored. The battery will be monitored and charged when needed. Output power can be switched on or off by the microcontroller.

- Output - High amperage 12v DC power will be produced and connected to a load. Data must be sent to a user console to be interpreted by a technician.

13. Appendix B - Second-Level Block Diagram

13.1 Block Diagram:

![](RackMultipart20210527-4-da4cmz_html_63f61a41e7930124.png)

13.2 Explanation of Blocks:

This diagram includes the core components of the Green Breeze. All accessories and interface equipment not shown will connect directly to the microcontroller.

The generator consists of an alternator, rectifier, and voltage regulator. The alternator produces alternating current, which is converted into direct current by the rectifier. The voltage level will fluctuate, so a voltage regulator helps to maintain a stable 12V output. The 12V output will power the onboard microcontroller, battery, and sensors for monitoring and safety purposes. The 12V output and battery charging capabilities are controlled by relays.

14. Appendix C - Schematics

14.1 Buck Converter:

![](RackMultipart20210527-4-da4cmz_html_d3d617fc4a36c597.png)

14.1.1 Explanation:

DC voltage from the battery is both sent to the input of the LM2596S and grounded through a 100 uF capacitor. The ground and on/off pins of the LM2596S are both tied to ground. The output of the LM2596S has a Schottky diode tied to it before being sent through a 470uH inductor. Both the resulting output and the FB pin are grounded through a 1mF capacitor before being tied together at the components output.

The buck converter allows for the power output from the MTP-124R battery to be stepped down and regulated to produce an output suitable for powering the microcontroller. The buck converter can produce a constant output of 5V 3A.

14.2 3.3v Regulator, Micro-Controller,Temp sensor, IR sensor, Display, and Wifi Module:

![](RackMultipart20210527-4-da4cmz_html_2aef84c61f5dc9eb.png)

14.2.1 Explanation:

15. Appendix D - FlowCharts and Software

15.1 FlowChart:

![](RackMultipart20210527-4-da4cmz_html_1253870e90ec3315.png)

15.2 Explanation of FlowChart:

15.3 Software:

15.4 Explanation of Software:

16. Appendix E - Data Sheets

**LM1117 voltage regulator :**

[https://www.ti.com/lit/ds/symlink/lm1117.pdf?ts=1601864449147&amp;ref\_url=https%253A%252F%252Fwww.google.com%252F](https://www.ti.com/lit/ds/symlink/lm1117.pdf?ts=1601864449147&amp;ref_url=https%253A%252F%252Fwww.google.com%252F)

![](RackMultipart20210527-4-da4cmz_html_a2f6a754aca7d93e.png)

Fig 6.3

**ESP 8266 - 12 Wifi module info:**

[https://www.mouser.com/datasheet/2/975/1513856197DS-ESP-12S-1589038.pdf](https://www.mouser.com/datasheet/2/975/1513856197DS-ESP-12S-1589038.pdf)

**ATMEGA-328 MicroController:**

[http://ww1.microchip.com/downloads/en/DeviceDoc/ATmega48A-PA-88A-PA-168A-PA-328-P-DS-DS40002061B.pdf](http://ww1.microchip.com/downloads/en/DeviceDoc/ATmega48A-PA-88A-PA-168A-PA-328-P-DS-DS40002061B.pdf)

![](RackMultipart20210527-4-da4cmz_html_54e248453eb2791f.png)

Fig 6.4

**Interstate Batteries MTP-124R:**

![](RackMultipart20210527-4-da4cmz_html_3ef5449bbc0dc71.png)

Fig 6.5

**LM2596**** :**

https://www.ti.com/lit/ds/symlink/lm2596.pdf

**Oiyagai DC to DC Voltage Regulator Step Down Power Supply Buck Converter:**

![](RackMultipart20210527-4-da4cmz_html_923969c985b72a3a.png)

**MCP9808 High Accuracy I2C Temperature Sensor:**

[https://cdn-shop.adafruit.com/datasheets/MCP9808.pdf](https://cdn-shop.adafruit.com/datasheets/MCP9808.pdf)

**SSD1306**  **Monochrome OLED:**

[https://cdn-shop.adafruit.com/datasheets/SSD1306.pdf](https://cdn-shop.adafruit.com/datasheets/SSD1306.pdf)

**IR333-A IR Emitter:**

[https://cdn-shop.adafruit.com/datasheets/IR333\_A\_datasheet.pdf](https://cdn-shop.adafruit.com/datasheets/IR333_A_datasheet.pdf)

**PD333-3B/H0/L2 IR Photodiode:**

[https://www.everlight.com/file/ProductFile/PD333-3B-H0-L2.pdf](https://www.everlight.com/file/ProductFile/PD333-3B-H0-L2.pdf)

**LM358 Operational Amplifier:**

[https://www.ti.com/lit/ds/symlink/lm158-n.pdf](https://www.ti.com/lit/ds/symlink/lm158-n.pdf)

**3362P-1-105LF Variable Resistor:**

[https://www.bourns.com/docs/Product-Datasheets/3362.pdf](https://www.bourns.com/docs/Product-Datasheets/3362.pdf)

**16MHz Crystal Oscillator:**

[https://www.nxp.com/docs/en/application-note/AN2500.pdf](https://www.nxp.com/docs/en/application-note/AN2500.pdf)