import math

# Menentukan nilai alas dan tinggi
alas = 5
tinggi = 12

# Sisi sesuai gambar diagram
sisi_a = tinggi
sisi_c = alas
sisi_b = int(math.sqrt(sisi_a**2 + sisi_c**2)) # Rumus Pythagoras (Sisi Miring)

# Perhitungan Keliling dan Luas
keliling = sisi_a + sisi_b + sisi_c
luas = int(0.5 * alas * tinggi)

# Menampilkan Output sesuai format gambar
print("Diketahui :")
print(f"Alas = {alas} cm")
print(f"Tinggi = {tinggi} cm")
print()
print("Jawab :")
print(f"Sisi A = {sisi_a} cm")
print(f"Sisi B = {sisi_b} cm")
print(f"Sisi C = {sisi_c} cm")
print(f"Keliling = {keliling} cm")
print(f"Luas = {luas} cm")
