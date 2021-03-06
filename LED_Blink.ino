
/*SC-FISIKA INSTRMENTASI UIN SUKA
 Note : 
 a. Perhatikan Setiap penjelasan progam
 b. penjelasan progam diawali dengan tanda "//"
 c. penjelasan progam bukan bagian dari skecth progam yang akan di jalankan

 PROYEK : LED BLINK dengan Arduino
 
*/

//

//fungsi void setup untuk mendelarasikan pin pada arduino & menjalankan progam sekali
void setup() {
  pinMode(13, OUTPUT); //mendelarasikan pin 13 sebagai OUTPUT
}

//fungsi void loop untuk menjalankan progam berulangkali
void loop() {
  digitalWrite(13, HIGH);//memerintah pin 13 untuk mengeluarkan tegangan MAX ( 5 Volt )
  delay(1000);//Durasi perintah sebelumnya
  digitalWrite(13, LOW);//memerintahan pin 13 untuk mengeluarkan tegangan minimum ( 0 Volt )
  delay(1000);//Durasi  perintah sebelumnya
}
