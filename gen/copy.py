import sys
import shutil
import os

src = sys.argv[1]

cdir = os.path.dirname(os.path.realpath(__file__))

dirs = ['servers', 'dirvers', 'core']

lostfiles = []

for dir in dirs:
    for root, dirs, files in os.walk(os.path.join(cdir, dir)):
        for f in files:
            dp = os.path.join(root, f)
            rp = os.path.relpath(dp, cdir)
            op = os.path.join(src, rp)
            if os.path.exists(op):
                shutil.copyfile(op, rp)
            else:
                print(f + " not exists.", file=sys.stderr)
                lostfiles.append(rp)

if len(lostfiles) > 0:
    y = input('delete lost files? y/n')
    if y == 'y':
        for f in lostfiles:
            os.remove(f)
