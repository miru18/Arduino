#include <DS3231.h>

DS3231  rtc(A4,A5);//SDA,SCL

void setup() {
 rtc.begin(); // Initialize the rtc object
 Serial.begin(9600);
}

void loop() {
 // The following lines can be uncommented to set the date and time
// rtc.setDOW(WEDNESDAY);     // Set Day-of-Week to Wednesday
// rtc.setTime(19, 05, 0);     // Set the time to 12:00:00 (24hr format)
// rtc.setDate(23, 3, 2022);   // Set the date to January 1st, 2014
//
 Serial.print("Time:  ");
 Serial.println(rtc.getTimeStr());
 
 Serial.print("Date: ");
 Serial.println(rtc.getDateStr());
 
 delay(1000);
}
