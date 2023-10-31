import os
import sys

cdir = os.path.dirname(os.path.realpath(__file__))
sys.path.append(os.path.join(cdir, "core/object"))
sys.path.append(os.path.join(cdir, "core/extension"))
sys.path.append(os.path.join(cdir, "modules"))
sys.path.append(os.path.join(cdir, "main"))

env = ""

bindir = sys.argv[1]
def gen_virtual():
    import make_virtuals
    objdir = os.path.join(bindir, 'core/object')
    if(not os.path.exists(objdir)):
        os.mkdir(objdir)
    gdvir = os.path.join(objdir, "gdvirtual.gen.inc")
    make_virtuals.run([gdvir,], "make_virtuals.py", "")


def gen_extwrap():
    import make_wrappers
    extdir = os.path.join(bindir, 'core/extension')
    if(not os.path.exists(extdir)):
        os.mkdir(extdir)
    extwrap = os.path.join(extdir, "ext_wrappers.gen.inc")
    make_wrappers.run([extwrap,], "make_wrappers.py", "")


def gen_modules():
    import modules_builders
    moddir = os.path.join(bindir, 'modules')
    if(not os.path.exists(moddir)):
        os.mkdir(moddir)
    modfile = os.path.join(moddir, "modules_enabled.gen.h")
    modlist = []
    with open(modfile, "w") as f:
        for module in modlist:
            f.write("#define %s\n" % ("MODULE_" + module.upper() + "_ENABLED"))


def gen_main():
    import main_builders
    maindir = os.path.join(bindir, 'main')
    if(not os.path.exists(maindir)):
        os.mkdir(maindir)
    spdes = os.path.join(maindir, 'splash.gen.h')
    spori = 'main/splash.png'
    main_builders.make_splash([spdes,], [spori,], "")

    #spdes = os.path.join(maindir, 'splash_editor.gen.h')
    #spori = 'main/splash_editor.png'
    #main_builders.make_splash_editor([spdes,], [spori,], env)

    spdes = os.path.join(maindir, 'app_icon.gen.h')
    spori = 'main/app_icon.png'
    main_builders.make_app_icon([spdes], [spori], env)

def gen_glsl():
    import glsl_builders
    from pathlib import Path
    relpath = "servers/rendering/renderer_rd/shaders"
    glsldir = os.path.join(cdir, relpath)
    fls = os.listdir(glsldir)
    glsl = []
    incglsl = []
    for f in fls:
        if f.endswith("_inc.glsl"):
            incglsl.append(f)

    for f in fls:
        if f.endswith(".glsl"):
            if not f in incglsl:
                glsl.append(f)
    
    glslbindir = os.path.join(bindir, relpath)
    if(not os.path.exists(glslbindir)):
        os.makedirs(glslbindir, exist_ok=True)
    
    for f in glsl:
        of = os.path.join(Path(f).stem, '.gen.h')
        glsl_builders.build_rd_headers(of, f, env)
    


#gen_virtual()
#gen_extwrap()
#gen_modules()
#gen_main()
#gen_glsl()
