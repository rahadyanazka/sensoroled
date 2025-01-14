#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Tentukan ukuran layar OLED
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

// Tentukan pin reset (jika ada)
#define OLED_RESET    -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  // Inisialisasi serial untuk debugging
  Serial.begin(115200);

  // Inisialisasi layar OLED
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Alamat I2C 0x3C
    Serial.println(F("OLED gagal diinisialisasi"));
    for(;;); // Berhenti di sini
  }

  // Bersihkan buffer layar
  display.clearDisplay();

  // Atur ukuran teks dan warna
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);

  // Tampilkan teks pada layar
  display.setCursor(0, 0);
  display.println(F("Halo, Dunia!"));
  display.display(); // Update layar dengan konten buffer
}

void loop() {
  // Tambahkan kode Anda di sini jika perlu
}