# Dự án cảm biến hành trình (nút nhấn điều khiển LED)

Dự án này sử dụng một nút nhấn (cảm biến hành trình) kết nối với Arduino để điều khiển đèn LED và gửi tín hiệu trạng thái qua Serial Monitor. Mỗi lần nhấn nút, LED sẽ sáng trong 200ms.

---

##  Giới thiệu thiết bị

### Arduino
ArduinoIDE là nền tảng vi điều khiển mã nguồn mở, dễ sử dụng trong các dự án DIY, học tập và phát triển sản phẩm nhúng.

### cảm biến hành trình ( Cảm biến va chạm)
Là thiết bị cơ bản, tạo tín hiệu khi người dùng nhấn. Trong dự án này, nút được kết nối ở chế độ `INPUT_PULLUP`, nên khi nhấn sẽ đưa tín hiệu về mức LOW.

---

## 🔌 Sơ đồ kết nối phần cứng

| Thiết bị     | Arduino Pin |
|--------------|-------------|
| Nút nhấn (1 chân) | GND         |
| Nút nhấn (chân còn lại) | D7 (BUTTON_PIN) |
| LED (nội bộ)   | D13 (mặc định) |

> Sử dụng điện trở kéo lên nội bộ bằng `INPUT_PULLUP` nên **không cần điện trở rời**.

---

## Tính năng chính

- Bật LED khi nhấn nút
- Gửi thông báo trạng thái qua Serial Monitor
- LED sẽ tự tắt sau 200ms

---

## 📹 Video demo

*Chưa có video hướng dẫn.*

---



## 📂 Tệp chính

- `button_led.ino`
