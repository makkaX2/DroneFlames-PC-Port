import re

p = 'c:/Users/mxka/Documents/port/DroneFlames_PC_v0.32.0_good_boy_irl/ui/menus.gd'
with open(p, 'rb') as f:
    data = f.read().decode('utf-8')

data = re.sub(r'const VERSION: String = .*', 'const VERSION: String = "v0.31.7 (PC Port by @good_boy_irl)"', data)

with open(p, 'wb') as f:
    f.write(data.encode('utf-8'))
print('menus.gd updated successfully!')
