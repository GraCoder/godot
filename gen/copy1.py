import sys
import shutil
import os

#src = sys.argv[1]
src = 'D:\\04_Dev\\godot'

cdir = os.path.dirname(os.path.realpath(__file__))

dirs = ['servers', 'dirvers', 'core']

lostfiles = []

for dir in dirs:
    for root, dirs, files in os.walk(os.path.join(src, dir)):
        for f in files:
            if not f.endswith('gen.h'):
                continue
            srcfile = os.path.join(root, f)
            rp = os.path.relpath(srcfile, src)
            dstfile = os.path.join(cdir, rp)
            shutil.copyfile(srcfile, dstfile)
            
