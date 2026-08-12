# Using a button 
Using a button as an input to turn on the LED.

I also learned how the circuit works using Claude AI to help me visualise the circuits. 

## Figure 1 - The whole circuit

<img width="1440" height="1252" alt="image" src="https://github.com/user-attachments/assets/6a98fbc9-d4f7-4b3f-a319-f8c0c50ceb5f" />

##Figure 2 - The separate circuits
<img width="1440" height="1040" alt="image" src="https://github.com/user-attachments/assets/ac8ae831-11f8-44c4-bf19-0f265d8061fd" />


First, 5V is supplied to the circuit. A 5V voltage is connected to the button. If the button is not pressed, then the pull-down resistor lowers the voltage to approximately 0V by connecting the input to ground, so the input doesn't float. If the button is pressed, then a 5V is supplied to pin 2 via the node on the breadboard. This lets the Arudino board reads that the voltage is 'HIGH'.

Then the program I wrote compiles and if the voltage of the button is HIGH, If it is, a voltage is supplied to the LED through the jumper wire connected to pin 12, causing the LED to turn on.


## Video
<span style="color:red">Click Thumbnail to see the full Video demonstration of variable light intensity</span>
[![Arduino LED demonstration](thumbnail.png)](https://drive.google.com/file/d/13K_CdQw_D3WXQBbHMqTLv0AoAJD6V06U/view?usp=drive_link)
