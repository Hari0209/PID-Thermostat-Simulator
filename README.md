# PID-Thermostat-Simulator
Realistic thermostat using Proportional Integral Derivatives simulating realistic room thermodynamics researching how varying outside temperature conditions as well as living room sizes affects how temperature in a room fluctuates with a PID thermostat.

##How does a Potential Only Thermostat work?
A potential thermostat works by calculating the difference in error from the favoured temperature to the current temperature of the room. Multiplied by a constant (hence the name po=roportional). This means that when the heater power is directly manipulated by the value held by the variable(named) potential. A higher error (further away from the favoured temperature) would mean the heater's power would be high hence warming the room up faster. The loop is run to simulate the heater updating the proportional variable and it's output power in 0.05s (1 frame is equivalent to 0.05seconds for esae of coding).

##How does a Potential Integral Derivative Thermostat work? 
The Integral Derivative 

