def sub_set(a,b,idx):

   
    if idx == len(a):
        print('going to 1 ')
        if sum(b) == sum(a) / 2:
            print('going to 12 ')
            print(b)
            Bol = True
            print(bol)
            return True

    else:
        print('going to 2 ')
        c=b[:]
        b.append(a[idx])
        sub_set(a,b,idx+1)
        sub_set(a,c,idx+1)

print(sub_set({1,2,3,4},{},4))