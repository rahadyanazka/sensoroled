Penjelasan:

Kita mengimpor pustaka yang diperlukan yaitu Wire, Adafruit_GFX, dan Adafruit_SSD1306.
Mendefinisikan ukuran layar OLED (128x64) dan pin reset (jika ada).
Inisialisasi layar OLED menggunakan alamat I2C 0x3C.
Bersihkan buffer layar dan atur ukuran serta warna teks.
Tampilkan teks "Halo, Dunia!" pada layar OLED.
Pastikan Wemos D1 Mini Anda terhubung dengan benar ke layar OLED sesuai dengan pin I2C (SDA dan SCL). Biasanya, pin SDA terhubung ke D2 dan SCL terhubung ke D1 pada Wemos D1 Mini.
