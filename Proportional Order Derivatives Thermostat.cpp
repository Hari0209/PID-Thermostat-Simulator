    #include <iostream>
    #include <cmath>
    /*mass of air is roughly 1.29 per cubic meter*/
    /*change in temp =  ((mass of air)*(specific heat capacity of air))/(change in thermal energy) but we are assuming time is 1 and since power is energy transfer / time we assume change in thermal energy to be the same as heater power*/
    /*specific heat capacity of air is 1003.5*/

    float temp_calculator(float heater_energy, float temp_outside, float temp, float volume){

        float temp_change;
        float mass=1.29*volume;
        float heat_loss=0.2*(temp-temp_outside); /*the equation is k(temp-temp_outside) where k is the insulation (larger k value less insulation so more heat loss) */
        float overall_energy=heater_energy-heat_loss;

        temp_change=(overall_energy)/(mass*1003.5);
        temp=temp+temp_change;
        return temp;
    };
    /*the program will be so that the the heater will adjust power every 55, we will also assume that this process will take 0.05 seconds*/
    int main(){
        bool people_inside;
        float previous_error=0;
        float temp_outside;

        std::cout<<"IS ANYONE PRESENT INSIDE THE ROOM? Type 1 for yes and anything else for no \n";
        std::cin>>people_inside; /*heater will only work if people are inside the room*/
        std::cout<<"What is the temperature outside";
        std::cin>>temp_outside;

        float length, width, height;
        float time=0.5;
       std::cout<<"enter the width of the room";
       std::cin>>width;
       std::cout<<"enter the height of the room";
       std::cin>>height;
       std::cout<<"enter the length of the room";
       std::cin>>length;
       float volume, error, heater_power, heater_energy=0;
       volume=length*width*height;

    /*room temperature at the start of the program*/
        float temp=12;
        float favoured_temp=23.5;
        float potential=0;
        float integral=0;
        float derivative=0;

        while (people_inside==true &&time<=5){
            error=favoured_temp-temp;

            if (temp<favoured_temp){
                integral+=error*0.5;
                potential=error;
                derivative=(error-previous_error)/0.5;
                heater_power=(4*potential)+(0.2*integral)+(0.5*derivative);}

            else if (temp>=favoured_temp){
                heater_power=0;
                /*error decides the heater power hence if heater power=0 then it start cooling*/
                integral+=error*0.5;}

            else{};

            heater_energy=heater_power*0.5;
            temp=temp_calculator(heater_energy,temp_outside,temp,volume);
            std::cout<<"the temperature of the room is at"<<temp<<"after"<<time<<"seconds \n";
            time+=0.5;
            std::cout<<"IS ANYONE PRESENT INSIDE THE ROOM? Type 1 for yes and anything else for no \n";
            std::cin>>people_inside;
            previous_error=error;
        };
    return 0;
    };

