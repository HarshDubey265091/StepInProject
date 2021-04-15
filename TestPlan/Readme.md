# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01    | Check if the passed coloured code is valid|Valid Resistance Colour Code|Matched |Passed |Requirement Based|
|  H_02       |Check if the passed resistance colour code is returning the Code value|Valid Resistance Colour code input|Returned and Matched|Passed|Scenario Based|
|  H_03       |Check if the passed invalid resistance colour code|Do not match|Not matched|Invalid Colour|Boundary based    |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |Check if the passed Resistance coloured code is valid to the matchcolour function|Valid Resistance Colour Code within BBROYGBVGWGSN|  Valid Resistance Colour Code|Matched Resistance Colour Code|Returned the Colour Code PASSED|Requirement based |
|  L_02       |Check if the passed coloured code is valid to Search_BandColour function and returning its respective Colour code| Valid Resistance Colour Code|Matched and its Colour Code value|Returned the Colour Code PASSED|Scenario based    |
|  L_03       |Check if the passed invalid resistance colour code to the Search_BandColour funtion|Invalid Resistance Colour Code|To Return -1|Returned -1|Boundary based    |
