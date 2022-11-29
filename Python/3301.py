h,z,l = input().split()
h = int(h)
z = int(z)
l = int(l)
    
if((h>z and h<l) or (h<z and h>l)):
    print(f'huguinho')
elif((z>h and z<l) or (z<h and z>l)):
    print(f'zezinho')
elif((l>h and l<z) or (l<h and l>z)):
    print(f'luisinho')