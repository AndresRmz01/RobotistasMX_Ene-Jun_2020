#pragma config(Sensor, S1,     walle,          sensorEV3_Ultrasonic)
#pragma config(Motor,  motorA,          D,             tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorB,          I,             tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(true){
		if(getUSDistance(walle)<20){
			setMotorSync(motorA,motorB,0,100);
		}
		else{
			setMotorSpeed(motorA,50);
			setMotorSpeed(motorB,-50);
		}
	}
}
