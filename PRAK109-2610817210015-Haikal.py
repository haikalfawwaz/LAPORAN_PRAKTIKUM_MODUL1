pasukan = 958730  # Hapus titiknya di sini
pahlawan = ["Zilong", "Ling", "Baxia", "Wanwan", "Chang'e"]

jumlah_pahlawan = len(pahlawan)
porsi_pasukan = pasukan // jumlah_pahlawan  # Ubah / menjadi // di sini

print(f"Jumlah pasukan yang dibawa Yu Zhong = {pasukan}")
print(f"Jumlah pahlawan = {jumlah_pahlawan}")
print(f"Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah {porsi_pasukan} pasukan")
