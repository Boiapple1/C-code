const int LightInputPin = 7;//light sensor is on pin 7
const int switchCount = 100;//cout at which to switch

int lightState = LOW;//the current validated light state
int lightCount = 0;//counter of sequential readings

void setup() {
	pinMode(LightInputPin, INPUT);//set pin 7 to be an input

	//read lightinputpin repeatedly to get an average
	lightCount = 0;
	for (int i = 0; i < switchCount; i++)
		if (digitalRead(LightInputPin) == HIGH)
			lightCount++;
		else
			lightCount--;

	//if more reads were HIGH than were LOW, set state to HIGH
	lightState = (lightCOunt > 0) ? HIGH : LOW;
	lightCount = 0;
}
void loop() {
	//if this reading matches lighstate, reset lightcount
	//count up if this reading differs from lightstate
	if (digitalRead(LightInputPin) == lightState)
		lightCount = 0;
	else
		lightCount++;
	if (lightCount >= switchCount)
	{
		lightState = (lightState == HIGH) ? LOW : HIGH;
		lightCount = 0;
	}
}