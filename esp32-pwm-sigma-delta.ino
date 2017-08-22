void setup()
{
    //setup channel 0 with frequency 312500 Hz
    sigmaDeltaSetup(0, 312500);
    //attach pin 12 to channel 0
    sigmaDeltaAttachPin(12,0);
    //initialize channel 0 to off
    sigmaDeltaWrite(0, 0);
}

void loop()
{
    //slowly ramp-up the value
    //will overflow at 256
    static uint8_t i = 0;
    //static uint16_t i = 0;
    sigmaDeltaWrite(0, i++);
    delay(10);
}
