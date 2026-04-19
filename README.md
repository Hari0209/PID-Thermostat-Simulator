# PID-Thermostat-Simulator
Realistic thermostat using Proportional Integral Derivatives (PID) simulating realistic room thermodynamics researching how varying outside temperature conditions as well as living room sizes affects how temperature in a room fluctuates with a PID thermostat.

How does a Potential Only Thermostat work?

A potential thermostat works by calculating the difference in error from the favoured temperature to the current temperature of the room. Multiplied by a constant (hence the name po=roportional). This means that when the heater power is directly manipulated by the value held by the variable(named) potential. A higher error (further away from the favoured temperature) would mean the heater's power would be high hence warming the room up faster. The loop is run to simulate the heater updating the proportional variable and it's output power in 0.05s (1 frame is equivalent to 0.5seconds for esae of coding). The Proportional only thermostat has a steady increase and then plateau near the 23.5 mark but never on 23.5 and it can't reach 23.5 because the error becomes so small as the room temperature nears 23.5 that heater's power is not enough to heat the room further. Hence, Proportional only Thermostats are very stable but are also slow.

How does a Potential Integral Derivative Thermostat work? 

The PID works similar to the P only Thermostat with a few differences. The heater power is also dependent on the Integral. I coded the integral such that it finds the current error -the prveious error and when you multiply that by the time (0.5) it is similar to finding the area under the graph with a gap of every frame. Since the time gap is 0.5 it is accurate as smaller the width of the rectangle gives you a more accurate number. The derivative is calculated as the error - the prevous error and that answer divided by the change in time (0.5). 

We use Integral and Derivatives in combination to the Proportional calculated because integral gets more powerful as the time progresses as the sum of the error will be increasing this means that when the margin of error is very small so the potential variable is not affecting the heater power much but the integral is adding the errors so when the error is small near the favoured temperature the integral is able to still keep the heater's power high enough to keep the heater warming the room closer to 23.5 Derivative is used to control the effect of the integral because at the start the integral is adding large number together which means that the heaters power will shoot up tremendously and we do not want that hence by finding the derivative and multiplying that by a constant we are able to decrease the effect of the integral. 

What did I conclude from this experiment?

I concluded that Porportional thermostat focused on stability but lacked speed and power nearing the air which meant that the favoured temperature is never actually reached. Proportional Integral Derivative thermostats focus on power and reach the favoured temperature quicker but fluctuates near the favoured temperature focusing on accuracy instead of stability. 


