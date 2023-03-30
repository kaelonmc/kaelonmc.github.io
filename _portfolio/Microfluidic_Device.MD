---
title: "Microfluidic Device"
excerpt: "Microfluidic Homogenous Mixer with SLA Printing"
header:
  image: /assets/img/Microfluidic-Banner.jpg
  teaser: /assets/img/Microfluidic-Preview.jpg
   
---
## Background
* **Microfluidic** mixing aims to achieve thorough and rapid mixing of multiple fluid samples on a microscale level
  * The small size of the flow channels in these mixers increases the surface to volume ratio when compared to macro-scale mixers, making these devices useful in many applications
  * These devices have a considerable impact on the fields of *biomedical diagnostics and drug development* as well as the *food and chemical industries*
* Specific applications of microfluidic mixing include:
  * Sample dilution
  * Reagent homogenization
  * Chemical or biological reactions
* However, the microchannels present a challenge due to the low Reynolds numbers in the channels
  * For example, typical water-based microfluidic systems have Reynolds numbers n on the order of 0.1
  * Contributing factors include:
    * Small hydraulic diameter 
    * Low kinetic viscosity 
    * Low flow velocity of the solution(s)
* Unlike larger macro-scale mixer devices, **turbulent mixing does not occur** in these low Reynolds number regimes. 
* Flows in microfluidic devices are **almost always laminar** in nature, making **thorough mixing a key challenge** within microfluidics since these devices cannot take advantage of turbulent mixing.
* As a result, microfluidic homogeneous mixers rely solely on **diffusive mixing**
  * Diffusive mixing is an inherently slower process and requires a long channel to achieve sufficient mixing
  * The aim of microfluidic mixing schemes is to enhance the mixing efficiency by *speeding up the time* required to achieve adequate mixing, and/or by *shortening the channel length* required
* There are two approaches to microfluidic mixing: **active** and **passive** mixers
  * **Active mixers**: improve the mixing performance by *applying external forces* to the fluid flows to accelerate the diffusion. Active mixing schemes include:
    * Acoustic/Ultrasonic
    * Dielectrophoretic
    * Electrokinetic time-pulse
    * Electrohydrodynamic force
    * Thermal actuation
    * Magneto-hydrodynamic flow
    * Electrokinetic instability
  * **Passive mixers**: the microchannel configuration is designed to *increase the contact area and/or the contact time* of both samples. While no external energy or stimulus is required, passive schemes typically result in a lower mixing efficiency than active schemes. Passive mixing schemes include:
    * Lamination
    * Zig-zag channels
    * 3D serpentine structures
    * Embedded barriers
    * Twisted channels
    * Surface chemistry


## CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH35dfcQT936092f0e4381a449e85df15f9a?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>


## Design Choices and Print Settings
Important characteristic dimensions of the rigid plier design include: a 10 mm handle width, a 20 mm diameter circular base, a needle nose length of 30 mm, a handle length of 55 mm, and a thickness of 10 mm. These were all made fairly generic to yield a parametrically designed, simplistic yet effective plier shape. Because small pellets are the intended object to grip and move, the plier design was intended to be relatively small. Regarding the flexible component, a width and length of the parabolic elastic shape needed to be determined for proper functionality. To do this, I measured the distance between the two handles when closed 5 mm from the circular base which was where the support was intended to be placed. This measurement was approximately 11 mm. As such, I determined the end-to-end width of the flexible support to be 15 mm to give a reasonable range of opening/closing motion for the pliers. This, in turn, yielded a maximum supported object dimension of 10 mm that the pliers could successfully grip and hold. The overall height of the support component is fairly arbitrary but was selected to be 20 mm to support the amount of flexure needed for the pliers to fully close and return to their starting position. Additional design considerations include a 15 mm long notch that is half the width of the plier handles to allow the TPU to be firmly positioned within the plier design considering that TPU and PLA don’t adhere to one another very well. This design choice enabled a structurally sound flexible element with supports that were completely embedded within one part of the two-part plier assembly. A small dowel-hole fit was also needed to press fit the two-part assembly together. Somewhat crunchy movement was obtained by printing a 6 mm diameter hole with a 5.5 mm diameter dowel. In order to fix this, I lightly sanded down the dowel with sandpaper across its circumference and was able to obtain smooth motion following this step.

This print was completed of a MakerGear M3-ID where each independent extruded contained a 0.35 mm nozzle. Because two materials were used, two distinct filament print settings were needed for a successful print. The PLA portions of the print used a 210 °C extruder temperature with no print speed limit. For the 95A TPU, a retraction speed of 15 mm/s was set to allow the extruder’s gears to adequately grip and extrude the TPU without slipping. In addition, the extruder was set to 240 °C to melt and print the TPU with a maximum print speed of 25 mm/s to ensure print error minimization and solid material adhesion. The print bed was set to 60 °C which enabled both materials to adhere well at the beginning of the print.
