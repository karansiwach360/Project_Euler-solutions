z=10000000000
n=1000
ans=0
for i in range(1,n+1):
    ans=(ans+pow(i,i,z))%z
print(ans)
