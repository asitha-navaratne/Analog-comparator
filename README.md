# Analog-comparator

<p align="justify">The Analog Comparator unit is used to compare two analog voltage values at pins AIN0 and AIN1 (PB2 and PB3 respectively) of the microcontroller. When the
voltage at the positive pin AIN0 is higher than the voltage at the negative pin AIN1, the ACO bit in the Analog Comparator Control and Status Register (ACSR) will be set. In 
order to enable the Analog Comparator, the ACD bit of the ACSR register should be set to 0.</p>
