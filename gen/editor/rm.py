import sys

file_path = sys.argv[1]

ret = ""

with open(file_path) as f:
    ss = f.read()
    i = 0
    j = 0
    while(True):
        i = ss.find("{", i)
        if i == -1:
            break
        ret += ss[j: i + 1]
        i = ss.find("}", i)
        j = i
    ret += ss[i: len(ss)]

print(ret)

with open(file_path, "w") as f:
    f.write(ret)