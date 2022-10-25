a = int(input(""))

h = a / 86400;
sh = a % 86400;
j = sh / 3600;
sj = a % 3600;
m = sj / 60;
d = a % 60;

if a >= 86400: print('%d hari %.2d:%.2d:%.2d'%(h, j, m, d))
elif a >= 3600 and a <= 86399: print('%.2d:%.2d:%.2d'%(j, m, d))
elif a >= 60 and a <= 3599: print('00:%.2d:%.2d'%(m, d))
elif a <= 59: print('00:00:%.2d'%(d))