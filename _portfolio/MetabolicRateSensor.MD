---
title: "Metabolic Rate Sensor"
excerpt: "A non-invasive transdermal metabolic rate sensor created as a research project."
header:
  image: /assets/img/Optopair.png
  teaser: /assets/img/OptopairHolder.png
gallery:
  - image_path: assets/img/ComparisonGraph.png
  - image_path: assets/img/ResearchGraph.png
  - image_path: assets/img/Waveform.png
   
---

# Features

* **Novel Concept** A non-invasive transdermal metabolic rate sensor utilizing mid-infrared light.
* **Industry-standard Detection Capability** When optimized, this sensor can detect highly specific changes in the concentration of CO2 present in air.
* **Advancing Technology** Additional tests are yielding an ability to detect changes through liquids introduced to lab-made skin phantoms.

# Off-the-Shelf and 3D Printed Parts

|Part|Acquirement Method|
|----|----|
|Optopair Holder|3D-Printed|
|PCB Holder|3D-Printed|
|LED Bulb|Purchased|
|Photodiode|Purchased|
|Arduino|Purchased|
|LED Driver|Purchased|
|Optopair Synchronizer Board|Purchased|
|Circuit-Building Components|Purchased|
|Power Supply|Purchased|
|Oscilloscope|Purchased|

# CAD Model
#### Holds the experimental skin phantom and optopair
<iframe src="https://myhub.autodesk360.com/ue2d8555f/shares/public/SH56a43QTfd62c1cd9684d1a2561ee276e90?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# Arduino Code
The code specifically for this project is private but, for completion sake, initial sample Arduino code used to drive the Automatic Dog Feeder seen on the homepage can be found [here](https://github.com/kaelonmc/Misc.-Arduino-Code/blob/35504efb8428851e06a30b6429d3b5981f38d774/Dog_Feeder_Sample_Code.ino).

# Operation
While still a project in progress, use of operation is relatively easy. The Arduino with loaded project code must be turned on and connected to the sensors. The LED and photodiode optopair must be placed within their respective slots on any given holder. Once fitted, either a gaseous or liquid sample containing CO2 must be placed within the holder. Upon turning on the power supply, immediately data collection should begin. Run for however long is needed and power off.

{% include gallery caption="Comparison Chart of Metabolic Rate Acquisition Methods, Results From Testing, and a Sample Output Waveform" %}
