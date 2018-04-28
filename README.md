# OS-Malloc-and-heap
เธอๆ รู้จัก Stack,Heap,Malloc,realloc ป่าว ถ้าไม่รู้จักมานี่เลย เดี้ยวเราสอนให้
แต่ก่อนจะไปรู้จักมัน มารู้จัก memory diagram กันก่อนดีกว่า
## memory diagram

![Process memory layout](http://www.bogotobogo.com/cplusplus/images/assembly/memory_diagram.png)<br>

ดูภาพแล้วอาจดูงงๆ แต่เข้าใจง่ายกว่าผู้หญิงแน่นอน ส่วนที่เราจะสนใจจริงๆ มีสองอันคือ Stack กับ Heap <br>
Stack พื้นที่ที่เราใช้เก็บตัวแปรประเภท Local ซึ่งตรงนี้มันถูกจัดการด้วย complier แหละ
Heap หรือ dynamic data ตรงนี้เราเอาไว้เก็บตัวแปรที่เป็น dynamic หรือพูดง่ายๆคือตัวแปรที่เกิดจากการ malloc หรือ calloc นั้นแหละ ซึ่งพื้นที่ตรงนี้เราสามารถย่อขยายได้ตามต้องการหรือใน C เราใช้ realloc นั้นแหละ(ยังกะไฟฉายขยายส่วน)






## ref

http://www.bogotobogo.com/cplusplus/assembly.php
