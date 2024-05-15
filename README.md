# Averaging_Filter_for_Arduino_Application
This header file provide averaging-filter function for smooting data, reducting noise, and so on.
# How to Use
1. Generate an instance of the "AveragingFilter" class.
2. In the setup() function, call the "init" function and set the number of samples for averaging as an argument.
3. You can store the measured data by calling the "storeMeasuredData" function and setting the data as an argument.
4. Retrieve the averaged data from the return value of the "outputAveragingData" function.
