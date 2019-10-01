q=int(input())
for i in range(q):
        x=int(input())
        x_flipped = ~x & 0xffffffff
      
        d=int("{0:b}".format(x_flipped),2)
        print(d)    