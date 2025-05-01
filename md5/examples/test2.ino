#include <MD5.h>
int val =23456;
String stringOne, stringTwo; // compare the hash we are looking for with the current one, if the string is not fully compared, but only a few characters, please let me know
void setup(){ Serial.begin(115200); }
void loop() {
char buff[5];
itoa(val, buff, DEC);
unsigned char* hash=MD5::make_hash(buff);
char *md5str = MD5::make_digest(hash, 16);
stringOne = String("4d383d5cdcb4e8e52a3cbf0d9d6c02ff"); // 23490 = 4d383d5cdcb4e8e52a3cbf0d9d6c02ff, which we are looking for
stringTwo = md5str;
if ( stringOne == stringTwo) { // when found, tells what it is equal to
Serial.println(val); }
free(hash);
free(md5str);
val++;
delay(100);
}