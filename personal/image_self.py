import os
import sys
import time
from os import listdir
from os.path import isfile, join

def get_datetime(path):
    st = str(os.stat(path).st_mtime)
    dt = time.strftime('%d_%m_%Y_%H_%M_%S', time.localtime(os.stat(path).st_mtime))
    ns = int(st.split('.')[1])
    return '{}_{:08d}'.format(dt, ns)

def convert(path):
    onlyfiles = [f for f in listdir(path) if isfile(join(path, f))]
    for f in onlyfiles:
        p = path + '/' + f
        ext = f.split('.')[1]
        fn = get_datetime(path + '/' + f)
        nn = path + '/' + fn + '.' + ext
        if os.path.isfile(nn):
            iter = 1
            while os.path.isfile(nn) == True:
                iter += 1
                nn = path + '/' + fn + "_" + str(iter) + "." + ext
            os.rename(p, nn)
        else:
            os.rename(p, nn)
            print('{} -> {}'.format(p, nn))

if __name__ == '__main__':
    if len(sys.argv) < 2:
        print('Please provide a path for image name conversion')
        exit(0)
    else:
        convert(sys.argv[1])