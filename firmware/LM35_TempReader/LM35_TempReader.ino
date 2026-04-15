int adcValues[2]; 
float nhietDo[2]; 
char chuoi[30];

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Đọc kênh A0
  adcValues[0] = analogRead(A0);
  nhietDo[0] = (adcValues[0] * 500.0) / 1023.0;

  // Đọc kênh A1
  adcValues[1] = analogRead(A1);
  nhietDo[1] = (adcValues[1] * 500.0) / 1023.0;

  // Gửi dữ liệu dạng CSV qua Serial
  sprintf(chuoi, "%d,%d\n", (int)nhietDo[0], (int)nhietDo[1]);
  Serial.print(chuoi);

  delay(100);
}