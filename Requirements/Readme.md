# Requirements
## Introduction
 ---
* There are a wide scope of Resistor open which can be used in both electrical and electronic circuits to deign the behaviour of circuits as per the expected output of the system and to provide the asymptotic stability of the system.Yet, to work with the system the resistor needs to have some sort of resistive values that needed to be checked while embedding it to the system.Resistors are accessible in wide scope of qualities which are utilized according to necessities.

* The resistance value,tolerance rating are printed in the form of colour band which is called Resistance colour code which needed to be observed as per the standard table.

* This project is based on C programming concepts which is used to find the value of resistor and the tolerance limits in Ohms by observing resistor colour code.

## Research
---
### Resistance colour code software and its Benifits

Resistances are used in various circuits like filter circuit to ripple out the AC elements. If the prescribed value of the resistance is not used in the circuit then that lead to system unstability which will lead to an error in the whole system performance.

### Benifits
So, to reduce this error Resistance colour code software is used inorder to reduce the error while selecting the resistance to use in any circuit.

## Cost and Features
---
| Memory Space Cost               |          Features               |
|------|-----|
|0000000000000000 T Search_BandColour|Search_BandColour function to match the colour pattern and their repective band resistance value as per in the given resistance band|
|0000000000000043 T seperatethehigher|separatethehigher function to separate the higher order resistance value|
|0000000000000000 T matchcolour|matchcolour function to match the band colour as per provided input|



## SWOT ANALYSIS
![SWOT-Sample]()

# 4W&#39;s and 1&#39;H

## Who:

To all the circuit designers 

## What:

While making the larger electronic circuits,where there are a lots of active as well as passive elements used and there work depends on their respective output it is nessesary to use the required value of resistor but it becomes a tedious and time consuming task to find the resistance of any random resistor.

## When:

In all of the circuits where the resistors are used.


## Where:

This problem is faced in all of the resistor based circuit.

## How:

This issue may lead to an error in the electronic circuits and hence lead to the undefined behaviour of the system as well as system unstability.

# Detail requirements
## High Level Requirements:
| ID | Description | Category | Status |
|-----|-----|-----|-----|
|HR01|User shall be able to enter the Resistance band colours|Technical|Implemented|
|HR02|The resistance band colour should be valid|Technical|Implemented|
|HR03|User should be able to re-enter the resistance band code|Technical|Implemented|

##  Low level Requirements:
| ID | Description | HLR ID| Status|
|-----|-----|-----|-----|
|LR01|Resistance band colour should be added inorder to get the required resistance value with its specified tolerance limits|HR01|Implemented|
|LR02|Resistance colour code should be valid as per standard colour code BBROYGBVGW|HR02|Implemented|
|LR03|User need to set permission inorder to re-enter the resistance colour code if needed|HR03|Implemented|
