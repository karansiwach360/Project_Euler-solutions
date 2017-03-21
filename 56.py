ans=0
for i in range(1,100):
    for j in range(1,100):
        s=i**j
        z=0
        while s>0:
            z+=(s%10)
            s//=10
        ans=max(ans,z)
print(ans)
